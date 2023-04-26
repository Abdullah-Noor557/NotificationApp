
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QToolButton>
#include<string>
#include <fstream>
#include<QLineEdit>


QToolButton* buttons[3];

enum UserType{
    admin,student,faculty
};

using namespace std;
string currentUsername;
string currentPassword;

bool passMatch = false;
bool uNameMatch = false;

UserType currentUserType = admin;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    setUserTypeButtons();

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
}

void MainWindow::on_pushButton_clicked()
{
    if(currentUserType == student)
    {
        MainWindow::checkUserNameAndPass("students.txt");
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

