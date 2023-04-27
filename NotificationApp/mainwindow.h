
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<string>
#include "./backend.h"
#include<QListWidgetItem>

using namespace std;


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    Backend* mainBackend;
    MainWindow(QWidget *parent = nullptr);
    void resetUserTypeUI();
    void setUserTypeButtons();
    void checkUserNameAndPass(string);
    void fillList();

    ~MainWindow();

    friend class backend;

private slots:

    void on_admnBtn_clicked();

    void on_facBtn_clicked();

    void on_stdBtn_clicked();

    void on_pushButton_clicked();

    void on_usrTxtBox_textChanged(const QString &arg1);

    void on_pwdTxtBox_textChanged(const QString &arg1);

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();


    void on_pushButton_6_clicked();

    void on_postButton_clicked();

    void on_delNotification_2_clicked();

    void on_addPost_clicked();

    void on_cancelBtn_clicked();

    void on_addUserBtn_clicked();

    void on_addUserBtn_2_clicked();

    void on_radioButton_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
