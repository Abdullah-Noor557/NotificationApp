
#ifndef BACKEND_H
#define BACKEND_H

#endif // BACKEND_H

#include<QFile>
#include<QJsonDocument>
#include<QJsonArray>
#include<QJsonObject>
#include "mainwindow.h"


using namespace std;

class Backend{
private:
    QJsonObject jsonData;
    QJsonArray posts;
    string loggedInUserName;
public:
    int currSelectedNotificationIndx = 0;
    int postsLength  = 0;
    string postTitles[100]; // array of all notification titles
    void initJsonData(string);
    void setPostsData(); //setter for posts data
    void setLoggedInUser(string); // setter for setting username
    void signOutUser();
    void updateJSON( );
    void addNewPost(string , string , string);
    void addNewUser(string ,string,string);

    QJsonArray* returnPosts();
    string getLoggedInUserName(); // getter for getting username

    Backend(){
        loggedInUserName = "";
    }
    Backend(QJsonObject obj):jsonData(obj){
        loggedInUserName = "";
    }

    friend class MainWindow;
};
