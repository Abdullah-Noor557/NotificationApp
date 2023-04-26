
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<string>

using namespace std;


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void resetUserTypeUI();
    void setUserTypeButtons();
    void checkUserNameAndPass(string);
    ~MainWindow();

private slots:

    void on_admnBtn_clicked();

    void on_facBtn_clicked();

    void on_stdBtn_clicked();



    void on_pushButton_clicked();

    void on_usrTxtBox_textChanged(const QString &arg1);

    void on_pwdTxtBox_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
