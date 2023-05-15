#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QToolButton>
#include<string>
#include <fstream>
#include<QLineEdit>
#include"./objects.h"
#include"QListWidget"
#include<QBrush>
#include<QPlainTextEdit>
#include<QLCDNumber>
#include <QMessageBox>


using namespace std;


QToolButton* buttons[3];

enum UserType{
    admin,student,faculty
};

string currentUsername;
string currentPassword;

bool passMatch = false;
bool uNameMatch = false;

QListWidget* postsList;
QFrame* detailsSection;
QFrame* NotificationSection;

UserType currentUserType = admin;

UserType adminAddUserType = student;

void MainWindow:: fillList(){
    mainBackend->postsLength = 0;
    postsList->clear();
    int count = 0;
    QJsonArray posts = *(mainBackend->returnPosts());
    foreach (QJsonValue post, posts) {
        QJsonObject obj = post.toObject();
       QListWidgetItem *listWidgetItm = new QListWidgetItem();
        listWidgetItm->setText(obj.value("title").toString());
       postsList->addItem(listWidgetItm);
        count++;
       mainBackend->postsLength++;
    }

    ui->label_11->setText( QString::number(mainBackend->postsLength));
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    postsList = ui->listWidget;
    setUserTypeButtons();

    Backend bEnd;
    mainBackend = new Backend();
    mainBackend->initJsonData("data.json");

    detailsSection = ui->detailsPanel;
    NotificationSection = ui->frame_9;
    detailsSection->hide();

    fillList();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resetUserTypeUI(){
    for(int i = 0 ; i<3 ; i++)
    {
        buttons[i]->setStyleSheet("border: 1px solid green;background-color:none;");
    }
}

void MainWindow::setUserTypeButtons(){
    buttons[0] = ui->admnBtn;
    buttons[1] = ui->facBtn;
    buttons[2] = ui->stdBtn;
}


void MainWindow::on_admnBtn_clicked()
{
    resetUserTypeUI();
    buttons[0]->setStyleSheet("background: darkgreen;color: white;");
    currentUserType = admin;

}


void MainWindow::on_facBtn_clicked()
{
    resetUserTypeUI();
    buttons[1]->setStyleSheet("background: darkgreen;color: white;");
    currentUserType = faculty;
}


void MainWindow::on_stdBtn_clicked()
{
    resetUserTypeUI();
    buttons[2]->setStyleSheet("background: darkgreen;color: white;");
    currentUserType = student;
}


void MainWindow::checkUserNameAndPass(string fileName)
{
    ifstream userName(fileName);
    if(userName.is_open()){
        string currentLine;
        int lineCount = 0;
        while(getline(userName,currentLine)){
            if((lineCount % 2) == 0){
                if(currentUsername == currentLine)
                {
                    uNameMatch = true;
                    qDebug()<<"User Name Found";
                    break;

                }else{
                    uNameMatch = false;
                    qDebug()<<"User Name Not Found";

                }
            }
            lineCount ++;
        }
        lineCount = 0;

        ifstream passCheck(fileName);

        while(getline(passCheck,currentLine)){
            if((lineCount % 2) != 0){
                if(currentPassword == currentLine)
                {
                    passMatch = true;
                    qDebug()<<"Pass Found";

                    break;

                }else{
                    qDebug()<<"Pass Not Found";

                    passMatch = false;
                }
            }
            lineCount ++;

        }
    }else{
        qDebug()<<"File Not Loaded";
    }

    if(!passMatch){
        QLineEdit*  edt= ui->pwdTxtBox;
        edt->setStyleSheet("border:1px solid red");
    }else{
        QLineEdit*  edt= ui->pwdTxtBox;
        edt->setStyleSheet("border:1px solid green");
    }

    if(!uNameMatch){
        QLineEdit*  edt= ui->usrTxtBox;
        edt->setStyleSheet("border:1px solid red");
    }else{
        QLineEdit*  edt= ui->usrTxtBox;
        edt->setStyleSheet("border:1px solid green");
    }

    if(passMatch && uNameMatch)
    {
        ui->stackedWidget->setCurrentIndex(3);
    }

}

void MainWindow::on_pushButton_clicked()
{
    mainBackend->initJsonData("data.json");
    fillList();

    if(currentUserType == student)
    {
        MainWindow::checkUserNameAndPass("students.txt");
        QPlainTextEdit* titleTxt = ui->titleText;
        QPlainTextEdit* descriptionTxt = ui->desText;

        titleTxt->setReadOnly(true);
        descriptionTxt->setReadOnly(true);
        ui->adminCommands->hide();
        ui->addPost->hide();
        ui->addUserBtn->hide();

    }else if(currentUserType == faculty)
    {
        MainWindow::checkUserNameAndPass("faculty.txt");

        QPlainTextEdit* titleTxt = ui->titleText;
        QPlainTextEdit* descriptionTxt = ui->desText;

        titleTxt->setReadOnly(false);
        descriptionTxt->setReadOnly(false);
        ui->adminCommands->show();
        ui->addPost->show();
        ui->addUserBtn->hide();


        ui->pushButton_4->hide();


    }else{
        MainWindow::checkUserNameAndPass("admins.txt");
        QPlainTextEdit* titleTxt = ui->titleText;
        QPlainTextEdit* descriptionTxt = ui->desText;

        titleTxt->setReadOnly(false);
        descriptionTxt->setReadOnly(false);
        ui->adminCommands->show();
        ui->addPost->show();
        ui->addUserBtn->show();
        ui->pushButton_4->show();

    }
}


void MainWindow::on_usrTxtBox_textChanged(const QString &arg1)
{
    currentUsername = arg1.toStdString();

}


void MainWindow::on_pwdTxtBox_textChanged(const QString &arg1)
{
    currentPassword = arg1.toStdString();

}


void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QLabel* label = ui->NoneNotification;
    label->hide();
    ui->detailsPanel->show();


    QPlainTextEdit* titleTxt = ui->titleText;
    QPlainTextEdit* descriptionTxt = ui->desText;

    int index =  postsList->indexFromItem(item).row();
    mainBackend->currSelectedNotificationIndx = index;
    titleTxt->setPlainText(mainBackend->posts.at(index).toObject().value("title").toString());
    descriptionTxt->setPlainText(mainBackend->posts.at(index).toObject().value("description").toString());


}


void MainWindow::on_pushButton_3_clicked()
{


}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}


void MainWindow::on_pushButton_4_clicked()
{
    mainBackend->posts.removeAt(mainBackend->currSelectedNotificationIndx);
    postsList->takeItem(mainBackend->currSelectedNotificationIndx);
    mainBackend->updateJSON();
    QLabel* label = ui->NoneNotification;
    label->hide();
    ui->detailsPanel->hide();
    fillList();
    QMessageBox::information(this, "Notification Deleted", "Notification Deleted Successfully!");

}

void MainWindow::on_pushButton_6_clicked()
{
    string titleTxt = ui->titleText->toPlainText().toStdString();
    string desTxt = ui->desText->toPlainText().toStdString();
    QJsonObject obj;
    QString key = QString::fromStdString(titleTxt);

    obj.insert("author","test");
    obj.insert("title",key);
    key = QString::fromStdString(desTxt);
    obj.insert("description",key);
    mainBackend->posts.replace(mainBackend->currSelectedNotificationIndx, obj);

    mainBackend->updateJSON();
    fillList();
    QMessageBox::information(this, "Changes Made!", "Notification has been updated!");

}


void MainWindow::on_postButton_clicked()
{

    QPlainTextEdit* titleTxt = ui->titleAdd;
    QPlainTextEdit* descriptionTxt = ui->desAdd;

    if(titleTxt->toPlainText().length()<1)
    {
        titleTxt->setStyleSheet("border-color:red; color: white");
    }else{
        titleTxt->setStyleSheet("border-color:rgb(58, 248, 0); color: white");

    }
    if(descriptionTxt->toPlainText().length()<1)
    {
        descriptionTxt->setStyleSheet("border-color:red;color: white");
    }else{
        descriptionTxt->setStyleSheet("border-color:rgb(58, 248, 0);color: white");

    }



    if(titleTxt->toPlainText().length()>1 && descriptionTxt->toPlainText().length()>1){
        mainBackend->addNewPost(titleTxt->toPlainText().toStdString(),descriptionTxt->toPlainText().toStdString(),"test");
        ui->stackedWidget->setCurrentIndex(3);
        descriptionTxt->setPlainText("");
        titleTxt->setPlainText("");
        QMessageBox::information(this, "Notification Added", "Notification Added Successfully!");

    }
}


void MainWindow::on_delNotification_2_clicked()
{
    QPlainTextEdit* titleTxt = ui->titleAdd;
    QPlainTextEdit* descriptionTxt = ui->desAdd;
    descriptionTxt->setPlainText("");
    titleTxt->setPlainText("");
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_addPost_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}


void MainWindow::on_cancelBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}


void MainWindow::on_addUserBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}


void MainWindow::on_addUserBtn_2_clicked()
{

    string username = ui->usrTxt->toPlainText().toStdString();
    string pass = ui->passTxt->toPlainText().toStdString();

    if(adminAddUserType == admin)
    {
        mainBackend->addNewUser( "admins.txt",username,pass);

    }else if(adminAddUserType == student){
        mainBackend->addNewUser( "students.txt",username,pass);

    }else{
        mainBackend->addNewUser( "faculty.txt",username,pass);

    }
    ui->stackedWidget->setCurrentIndex(3);
    QMessageBox::information(this, "User Added", "User Added Successfully!");

}


void MainWindow::on_radioButton_clicked()
{
    adminAddUserType = admin;
}


void MainWindow::on_radioButton_3_clicked()
{
    adminAddUserType = faculty;
}


void MainWindow::on_radioButton_2_clicked()
{
    adminAddUserType = student;

}

