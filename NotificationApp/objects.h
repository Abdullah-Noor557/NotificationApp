
#ifndef OBJECTS_H
#define OBJECTS_H

#endif // OBJECTS_H

#include<string>

using namespace std;

class AppObject{
private:
    string ObjectName = "UnNamed Object";
    bool selectable = false;

public:
    AppObject(){
        initialize();
    }
    AppObject(string name):ObjectName(name){
        initialize();
    }
    virtual void initialize(){
        qDebug()<< "Initializing" << ObjectName;
    }

};

class NotificationObject:public AppObject{
private:
    string postTitle;
    string postAuthor;
    string postDescription;
public:
    NotificationObject():AppObject::AppObject(){
        postTitle = "null";
        postAuthor = "null";
        postDescription = "null";
    }

    NotificationObject(string pT,string pA,string pD):postTitle(pT),postAuthor(pA),postDescription(pD){
    }

    void initialize() override{
        qDebug()<<"NObject Created with Title : "<< postTitle << " Author : "<< postAuthor;
    }

    ~NotificationObject(){
        qDebug()<<"Notification Object Destroyed";
    }

};

