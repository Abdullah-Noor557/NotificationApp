#include "mainwindow.h"
#include<QJsonArray>
#include<fstream>

void Backend::initJsonData(string fileName){
    QFile inFile("data.json");
    inFile.open(QIODevice::ReadOnly|QIODevice::Text);
    QByteArray data = inFile.readAll();
    inFile.close();

    QJsonParseError errorPtr;
    QJsonDocument doc = QJsonDocument::fromJson(data, &errorPtr);
    if (doc.isNull()) {
        qDebug() << "Parse failed";
    }else{
        qDebug() << "Parse success";
    }

    QJsonObject rootObj = doc.object();
   // QJsonObject dta = rootObj.value("data").toObject();
    jsonData = rootObj;

    inFile.close();
    Backend::setPostsData();
}

void Backend::addNewUser(string fileName, string username, string password){
    ofstream file(fileName, ios::app); // ios::app appends to the file instead of overwriting it
    file << "\n"<<username; // appends a new line with text to the file
    file << "\n"<<password; // appends a new line with text to the file

    file.close();
}
void Backend::updateJSON(){
    // Open the JSON file for reading
    QFile jsonFile("data.json");
    if (jsonFile.open(QIODevice::ReadOnly)) {
        // Read the contents of the JSON file into a QByteArray
        QByteArray jsonData = jsonFile.readAll();

        // Create a QJsonDocument from the QByteArray
        QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);

        // Get the JSON object from the QJsonDocument
        QJsonObject jsonObj = jsonDoc.object();

        // Create an array of numbers
        QJsonArray numArray = posts;

        // Add the array to the JSON object
        jsonObj["data"] = numArray;

        // Update the JSON document with the modified JSON object
        jsonDoc.setObject(jsonObj);

        // Close the file
        jsonFile.close();

        // Open the JSON file for writing
        if (jsonFile.open(QIODevice::WriteOnly)) {
            // Write the updated JSON document to the file
            jsonFile.write(jsonDoc.toJson());

            // Close the file
            jsonFile.close();
        }
    }
}

void Backend::setPostsData(){
    posts = jsonData.value("data").toArray();
    int count = 0;
    foreach (QJsonValue post, posts) {
        QJsonObject obj = post.toObject();
        postTitles[count] = obj.value("title").toString().toStdString();


        qDebug()<< postTitles[count];
        count ++;

    }
}


void Backend::addNewPost(string title , string description, string authorName){
    QJsonObject jSonObj;
    jSonObj.insert("title",QString::fromStdString(title));
    jSonObj.insert("description",QString::fromStdString(description));
    jSonObj.insert("authorName",QString::fromStdString(authorName));

    posts.append(jSonObj);
    updateJSON();

}

 void Backend:: setLoggedInUser(string uName){
    loggedInUserName = uName;
}

void Backend::signOutUser(){
    loggedInUserName = "";
}
string Backend::getLoggedInUserName(){
    return loggedInUserName;
}

QJsonArray* Backend::returnPosts(){
    return &posts;
}
