/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *Login;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *admnBtn;
    QToolButton *facBtn;
    QToolButton *stdBtn;
    QLabel *label_12;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *usrTxtBox;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLineEdit *pwdTxtBox;
    QPushButton *pushButton;
    QLabel *label_13;
    QFrame *frame_13;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *label_16;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLabel *label_4;
    QWidget *AddNotification;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_15;
    QVBoxLayout *verticalLayout_11;
    QLabel *NoneNotification_2;
    QFrame *detailsPanel_2;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_17;
    QPlainTextEdit *titleAdd;
    QFrame *line_3;
    QLabel *label_19;
    QPlainTextEdit *desAdd;
    QFrame *adminCommands_2;
    QVBoxLayout *verticalLayout_13;
    QFrame *frame_16;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *postButton;
    QPushButton *delNotification_2;
    QWidget *AddNewUser;
    QVBoxLayout *verticalLayout_17;
    QFrame *frame_17;
    QVBoxLayout *verticalLayout_14;
    QLabel *NoneNotification_3;
    QFrame *detailsPanel_3;
    QVBoxLayout *verticalLayout_15;
    QFrame *frame_20;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_20;
    QPlainTextEdit *usrTxt;
    QFrame *frame_21;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_21;
    QPlainTextEdit *passTxt;
    QFrame *frame_19;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_22;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_2;
    QFrame *adminCommands_3;
    QVBoxLayout *verticalLayout_16;
    QFrame *frame_18;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *addUserBtn_2;
    QPushButton *cancelBtn;
    QWidget *Main;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame_12;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QPushButton *addUserBtn;
    QPushButton *addPost;
    QPushButton *pushButton_2;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_8;
    QFrame *frame_11;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLabel *label_11;
    QListWidget *listWidget;
    QSpacerItem *verticalSpacer;
    QFrame *frame_10;
    QVBoxLayout *verticalLayout_9;
    QLabel *NoneNotification;
    QFrame *detailsPanel;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_8;
    QPlainTextEdit *titleText;
    QFrame *line_2;
    QLabel *label_10;
    QPlainTextEdit *desText;
    QFrame *adminCommands;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_18;
    QFrame *frame_14;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QFrame *line;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(861, 653);
        MainWindow->setMinimumSize(QSize(0, 598));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cascadia Mono")});
        MainWindow->setFont(font);
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextOnly);
        MainWindow->setTabShape(QTabWidget::Triangular);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34, 34);"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setMinimumSize(QSize(0, 100));
        Login = new QWidget();
        Login->setObjectName("Login");
        Login->setEnabled(true);
        Login->setMaximumSize(QSize(8320749, 16777215));
        verticalLayout_6 = new QVBoxLayout(Login);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_5 = new QLabel(Login);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(16777212, 100));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cascadia Mono")});
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setStyleStrategy(QFont::PreferAntialias);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(58, 248, 0);"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_5, 0, Qt::AlignHCenter);

        frame_4 = new QFrame(Login);
        frame_4->setObjectName("frame_4");
        frame_4->setMaximumSize(QSize(16777215, 550));
        frame_4->setStyleSheet(QString::fromUtf8("color: rgb(58, 248, 0);\n"
"border-color: rgb(58, 248, 0);\n"
"border-style: solid;\n"
"border: 1px solid rgb(58, 248, 0);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        frame_7 = new QFrame(frame_4);
        frame_7->setObjectName("frame_7");
        frame_7->setMaximumSize(QSize(16777215, 250));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_7);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_3 = new QLabel(frame_7);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(16777212, 80));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cascadia Mono")});
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        font2.setStyleStrategy(QFont::PreferAntialias);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(58, 248, 0);\n"
"border: none;"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_3);

        frame_6 = new QFrame(frame_7);
        frame_6->setObjectName("frame_6");
        frame_6->setMinimumSize(QSize(0, 50));
        frame_6->setStyleSheet(QString::fromUtf8("border: none;"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        admnBtn = new QToolButton(frame_6);
        admnBtn->setObjectName("admnBtn");
        admnBtn->setStyleSheet(QString::fromUtf8("background: rgb(58, 248, 0);\n"
"color: black;\n"
""));

        horizontalLayout_2->addWidget(admnBtn);

        facBtn = new QToolButton(frame_6);
        facBtn->setObjectName("facBtn");
        facBtn->setStyleSheet(QString::fromUtf8("border: 1px solid green;"));

        horizontalLayout_2->addWidget(facBtn);

        stdBtn = new QToolButton(frame_6);
        stdBtn->setObjectName("stdBtn");
        stdBtn->setStyleSheet(QString::fromUtf8("border: 1px solid green;"));

        horizontalLayout_2->addWidget(stdBtn);


        verticalLayout_5->addWidget(frame_6);

        label_12 = new QLabel(frame_7);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("color:red;"));
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_12);


        verticalLayout_4->addWidget(frame_7);

        frame_3 = new QFrame(frame_4);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(0, 210));
        frame_3->setMaximumSize(QSize(16777215, 350));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setObjectName("gridLayout");
        frame = new QFrame(frame_3);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(400, 0));
        frame->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setStrikeOut(false);
        frame->setFont(font3);
        frame->setStyleSheet(QString::fromUtf8("color: rgb(58, 248, 0);\n"
"border:none"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(10);
        horizontalLayout_6 = new QHBoxLayout(frame);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 40));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Cascadia Code")});
        font4.setPointSize(12);
        font4.setBold(true);
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("color: rgb(58, 248, 0);\n"
"border: none;"));

        horizontalLayout_6->addWidget(label);

        usrTxtBox = new QLineEdit(frame);
        usrTxtBox->setObjectName("usrTxtBox");
        usrTxtBox->setMinimumSize(QSize(80, 40));
        usrTxtBox->setMaximumSize(QSize(756, 16777215));
        usrTxtBox->setStyleSheet(QString::fromUtf8("border:3px solid rgb(58, 248, 0);"));

        horizontalLayout_6->addWidget(usrTxtBox);


        gridLayout->addWidget(frame, 1, 0, 1, 1);

        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(400, 0));
        frame_2->setMaximumSize(QSize(16777215, 16777215));
        frame_2->setStyleSheet(QString::fromUtf8("color: rgb(58, 248, 0);\n"
"border:none"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_2);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(16777215, 40));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Cascadia Code")});
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setItalic(false);
        label_2->setFont(font5);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(58, 248, 0);\n"
"border: none;"));

        horizontalLayout_7->addWidget(label_2);

        pwdTxtBox = new QLineEdit(frame_2);
        pwdTxtBox->setObjectName("pwdTxtBox");
        pwdTxtBox->setMinimumSize(QSize(80, 40));
        pwdTxtBox->setStyleSheet(QString::fromUtf8("border-color:rgb(58, 248, 0);\n"
"border: 3px solid rgb(58, 248, 0);;"));
        pwdTxtBox->setText(QString::fromUtf8(""));
        pwdTxtBox->setEchoMode(QLineEdit::Password);
        pwdTxtBox->setPlaceholderText(QString::fromUtf8("Password"));

        horizontalLayout_7->addWidget(pwdTxtBox);


        gridLayout->addWidget(frame_2, 2, 0, 1, 1);

        pushButton = new QPushButton(frame_3);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(0, 60));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgba(17, 255, 0,0.5);\n"
"color: white;\n"
""));
        pushButton->setCheckable(false);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);


        verticalLayout_4->addWidget(frame_3);

        label_13 = new QLabel(frame_4);
        label_13->setObjectName("label_13");
        label_13->setMaximumSize(QSize(16777215, 24));
        label_13->setStyleSheet(QString::fromUtf8("border-color:yellow;"));
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_13);

        frame_13 = new QFrame(frame_4);
        frame_13->setObjectName("frame_13");
        frame_13->setMaximumSize(QSize(16777215, 40));
        frame_13->setStyleSheet(QString::fromUtf8("border:none;"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_13);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_15 = new QLabel(frame_13);
        label_15->setObjectName("label_15");
        label_15->setMaximumSize(QSize(16777215, 25));
        label_15->setStyleSheet(QString::fromUtf8("border:1px solid yellow;"));
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_15);

        label_14 = new QLabel(frame_13);
        label_14->setObjectName("label_14");
        label_14->setMaximumSize(QSize(16777215, 25));
        label_14->setStyleSheet(QString::fromUtf8("border:1px solid yellow;"));
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_14);

        label_16 = new QLabel(frame_13);
        label_16->setObjectName("label_16");
        label_16->setMaximumSize(QSize(16777215, 25));
        label_16->setStyleSheet(QString::fromUtf8("border:1px solid yellow;"));
        label_16->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_16);


        verticalLayout_4->addWidget(frame_13);


        verticalLayout_6->addWidget(frame_4, 0, Qt::AlignHCenter);

        frame_5 = new QFrame(Login);
        frame_5->setObjectName("frame_5");
        frame_5->setMinimumSize(QSize(460, 0));
        frame_5->setMaximumSize(QSize(16777215, 40));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_5);
        horizontalLayout->setObjectName("horizontalLayout");
        label_6 = new QLabel(frame_5);
        label_6->setObjectName("label_6");
        QFont font6;
        font6.setPointSize(6);
        label_6->setFont(font6);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(58, 248, 0);"));

        horizontalLayout->addWidget(label_6);

        label_4 = new QLabel(frame_5);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(16777215, 20));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Cascadia Mono")});
        font7.setPointSize(6);
        label_4->setFont(font7);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(58, 248, 0);"));

        horizontalLayout->addWidget(label_4, 0, Qt::AlignRight);


        verticalLayout_6->addWidget(frame_5, 0, Qt::AlignHCenter);

        stackedWidget->addWidget(Login);
        AddNotification = new QWidget();
        AddNotification->setObjectName("AddNotification");
        AddNotification->setEnabled(true);
        verticalLayout_2 = new QVBoxLayout(AddNotification);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame_15 = new QFrame(AddNotification);
        frame_15->setObjectName("frame_15");
        frame_15->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_15->sizePolicy().hasHeightForWidth());
        frame_15->setSizePolicy(sizePolicy1);
        frame_15->setMinimumSize(QSize(200, 0));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Cascadia Code")});
        font8.setPointSize(10);
        frame_15->setFont(font8);
        frame_15->setStyleSheet(QString::fromUtf8("border:1px solid rgb(58, 248, 0);"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        verticalLayout_11 = new QVBoxLayout(frame_15);
        verticalLayout_11->setObjectName("verticalLayout_11");
        NoneNotification_2 = new QLabel(frame_15);
        NoneNotification_2->setObjectName("NoneNotification_2");
        NoneNotification_2->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(NoneNotification_2->sizePolicy().hasHeightForWidth());
        NoneNotification_2->setSizePolicy(sizePolicy2);
        NoneNotification_2->setFont(font8);
        NoneNotification_2->setStyleSheet(QString::fromUtf8("background:rgb(58, 248, 0);color:black"));

        verticalLayout_11->addWidget(NoneNotification_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        detailsPanel_2 = new QFrame(frame_15);
        detailsPanel_2->setObjectName("detailsPanel_2");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(detailsPanel_2->sizePolicy().hasHeightForWidth());
        detailsPanel_2->setSizePolicy(sizePolicy3);
        detailsPanel_2->setMinimumSize(QSize(0, 300));
        detailsPanel_2->setFrameShape(QFrame::StyledPanel);
        detailsPanel_2->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(detailsPanel_2);
        verticalLayout_12->setObjectName("verticalLayout_12");
        label_17 = new QLabel(detailsPanel_2);
        label_17->setObjectName("label_17");
        label_17->setMaximumSize(QSize(16777215, 16777215));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Cascadia Code")});
        font9.setPointSize(12);
        label_17->setFont(font9);
        label_17->setStyleSheet(QString::fromUtf8("background:rgb(58, 248, 0);color:black"));

        verticalLayout_12->addWidget(label_17);

        titleAdd = new QPlainTextEdit(detailsPanel_2);
        titleAdd->setObjectName("titleAdd");
        titleAdd->setMaximumSize(QSize(16777215, 80));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Cascadia Code")});
        font10.setPointSize(15);
        font10.setBold(true);
        font10.setItalic(false);
        font10.setUnderline(false);
        titleAdd->setFont(font10);
        titleAdd->setStyleSheet(QString::fromUtf8("color:white"));
        titleAdd->setTabChangesFocus(false);
        titleAdd->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        titleAdd->setReadOnly(false);
        titleAdd->setOverwriteMode(true);
        titleAdd->setBackgroundVisible(false);
        titleAdd->setCenterOnScroll(false);

        verticalLayout_12->addWidget(titleAdd);

        line_3 = new QFrame(detailsPanel_2);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_12->addWidget(line_3);

        label_19 = new QLabel(detailsPanel_2);
        label_19->setObjectName("label_19");
        label_19->setMaximumSize(QSize(16777215, 25));
        label_19->setFont(font9);
        label_19->setStyleSheet(QString::fromUtf8("background:rgb(58, 248, 0);;color:clack"));

        verticalLayout_12->addWidget(label_19);

        desAdd = new QPlainTextEdit(detailsPanel_2);
        desAdd->setObjectName("desAdd");
        QFont font11;
        font11.setFamilies({QString::fromUtf8("Cascadia Code")});
        font11.setPointSize(15);
        desAdd->setFont(font11);
        desAdd->setStyleSheet(QString::fromUtf8("color:white"));
        desAdd->setReadOnly(false);
        desAdd->setOverwriteMode(true);

        verticalLayout_12->addWidget(desAdd);

        adminCommands_2 = new QFrame(detailsPanel_2);
        adminCommands_2->setObjectName("adminCommands_2");
        adminCommands_2->setFrameShape(QFrame::StyledPanel);
        adminCommands_2->setFrameShadow(QFrame::Raised);
        verticalLayout_13 = new QVBoxLayout(adminCommands_2);
        verticalLayout_13->setObjectName("verticalLayout_13");
        frame_16 = new QFrame(adminCommands_2);
        frame_16->setObjectName("frame_16");
        frame_16->setStyleSheet(QString::fromUtf8("border:none;"));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame_16);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        postButton = new QPushButton(frame_16);
        postButton->setObjectName("postButton");
        postButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: lightgreen;border:1px solid lightgreen;\n"
"}\n"
"QPushButton::hover{\n"
"color: black;border:1px solid black;background-color:lightgreen;\n"
"}"));

        horizontalLayout_11->addWidget(postButton);

        delNotification_2 = new QPushButton(frame_16);
        delNotification_2->setObjectName("delNotification_2");
        delNotification_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:red; border:1px solid; border-color:red;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"color:black; border:1px solid; border-color:white;background-color:red;\n"
"}"));

        horizontalLayout_11->addWidget(delNotification_2);


        verticalLayout_13->addWidget(frame_16);


        verticalLayout_12->addWidget(adminCommands_2);


        verticalLayout_11->addWidget(detailsPanel_2);


        verticalLayout_2->addWidget(frame_15);

        stackedWidget->addWidget(AddNotification);
        AddNewUser = new QWidget();
        AddNewUser->setObjectName("AddNewUser");
        verticalLayout_17 = new QVBoxLayout(AddNewUser);
        verticalLayout_17->setObjectName("verticalLayout_17");
        frame_17 = new QFrame(AddNewUser);
        frame_17->setObjectName("frame_17");
        frame_17->setEnabled(true);
        sizePolicy1.setHeightForWidth(frame_17->sizePolicy().hasHeightForWidth());
        frame_17->setSizePolicy(sizePolicy1);
        frame_17->setMinimumSize(QSize(200, 0));
        frame_17->setMaximumSize(QSize(817, 559));
        frame_17->setFont(font8);
        frame_17->setStyleSheet(QString::fromUtf8("border:1px solid rgb(58, 248, 0);"));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        verticalLayout_14 = new QVBoxLayout(frame_17);
        verticalLayout_14->setObjectName("verticalLayout_14");
        NoneNotification_3 = new QLabel(frame_17);
        NoneNotification_3->setObjectName("NoneNotification_3");
        NoneNotification_3->setEnabled(true);
        sizePolicy2.setHeightForWidth(NoneNotification_3->sizePolicy().hasHeightForWidth());
        NoneNotification_3->setSizePolicy(sizePolicy2);
        NoneNotification_3->setFont(font8);
        NoneNotification_3->setStyleSheet(QString::fromUtf8("background:rgb(58, 248, 0);color:black"));

        verticalLayout_14->addWidget(NoneNotification_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        detailsPanel_3 = new QFrame(frame_17);
        detailsPanel_3->setObjectName("detailsPanel_3");
        sizePolicy3.setHeightForWidth(detailsPanel_3->sizePolicy().hasHeightForWidth());
        detailsPanel_3->setSizePolicy(sizePolicy3);
        detailsPanel_3->setMinimumSize(QSize(0, 300));
        detailsPanel_3->setFrameShape(QFrame::StyledPanel);
        detailsPanel_3->setFrameShadow(QFrame::Raised);
        verticalLayout_15 = new QVBoxLayout(detailsPanel_3);
        verticalLayout_15->setObjectName("verticalLayout_15");
        frame_20 = new QFrame(detailsPanel_3);
        frame_20->setObjectName("frame_20");
        frame_20->setMaximumSize(QSize(16777215, 100));
        frame_20->setFrameShape(QFrame::StyledPanel);
        frame_20->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_20);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_20 = new QLabel(frame_20);
        label_20->setObjectName("label_20");
        label_20->setMinimumSize(QSize(170, 0));
        label_20->setMaximumSize(QSize(16777215, 80));
        label_20->setFont(font9);
        label_20->setStyleSheet(QString::fromUtf8("background:rgb(58, 248, 0);color:black"));
        label_20->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_20);

        usrTxt = new QPlainTextEdit(frame_20);
        usrTxt->setObjectName("usrTxt");
        usrTxt->setMaximumSize(QSize(16777215, 80));
        usrTxt->setFont(font10);
        usrTxt->setStyleSheet(QString::fromUtf8("color:white"));
        usrTxt->setTabChangesFocus(false);
        usrTxt->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        usrTxt->setReadOnly(false);
        usrTxt->setOverwriteMode(true);
        usrTxt->setBackgroundVisible(false);
        usrTxt->setCenterOnScroll(false);

        horizontalLayout_13->addWidget(usrTxt);


        verticalLayout_15->addWidget(frame_20);

        frame_21 = new QFrame(detailsPanel_3);
        frame_21->setObjectName("frame_21");
        frame_21->setMaximumSize(QSize(16777215, 100));
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        horizontalLayout_14 = new QHBoxLayout(frame_21);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_21 = new QLabel(frame_21);
        label_21->setObjectName("label_21");
        label_21->setMinimumSize(QSize(170, 0));
        label_21->setMaximumSize(QSize(16777215, 80));
        label_21->setFont(font9);
        label_21->setStyleSheet(QString::fromUtf8("background:rgb(58, 248, 0);;color:clack"));
        label_21->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(label_21);

        passTxt = new QPlainTextEdit(frame_21);
        passTxt->setObjectName("passTxt");
        passTxt->setMaximumSize(QSize(16777215, 80));
        passTxt->setFont(font11);
        passTxt->setStyleSheet(QString::fromUtf8("color:white"));
        passTxt->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        passTxt->setReadOnly(false);
        passTxt->setOverwriteMode(true);
        passTxt->setBackgroundVisible(false);

        horizontalLayout_14->addWidget(passTxt);


        verticalLayout_15->addWidget(frame_21);

        frame_19 = new QFrame(detailsPanel_3);
        frame_19->setObjectName("frame_19");
        frame_19->setMaximumSize(QSize(16777215, 50));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_19);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_22 = new QLabel(frame_19);
        label_22->setObjectName("label_22");
        label_22->setMaximumSize(QSize(16777215, 50));
        label_22->setFont(font9);
        label_22->setStyleSheet(QString::fromUtf8("background:rgb(58, 248, 0);color:black"));

        horizontalLayout_9->addWidget(label_22);

        radioButton = new QRadioButton(frame_19);
        radioButton->setObjectName("radioButton");
        radioButton->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"color: rgb(58, 248, 0);\n"
"}\n"
"QRadioButton::checked{\n"
"background-color: rgb(58, 248, 0);\n"
"color:black;\n"
"}"));

        horizontalLayout_9->addWidget(radioButton);

        radioButton_3 = new QRadioButton(frame_19);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"color: rgb(58, 248, 0);\n"
"}\n"
"QRadioButton::checked{\n"
"background-color: rgb(58, 248, 0);\n"
"color:black;\n"
"}"));

        horizontalLayout_9->addWidget(radioButton_3);

        radioButton_2 = new QRadioButton(frame_19);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"color: rgb(58, 248, 0);\n"
"}\n"
"QRadioButton::checked{\n"
"background-color: rgb(58, 248, 0);\n"
"color:black;\n"
"}"));
        radioButton_2->setChecked(true);

        horizontalLayout_9->addWidget(radioButton_2);


        verticalLayout_15->addWidget(frame_19);

        adminCommands_3 = new QFrame(detailsPanel_3);
        adminCommands_3->setObjectName("adminCommands_3");
        adminCommands_3->setMaximumSize(QSize(16777215, 80));
        adminCommands_3->setFrameShape(QFrame::StyledPanel);
        adminCommands_3->setFrameShadow(QFrame::Raised);
        verticalLayout_16 = new QVBoxLayout(adminCommands_3);
        verticalLayout_16->setObjectName("verticalLayout_16");
        frame_18 = new QFrame(adminCommands_3);
        frame_18->setObjectName("frame_18");
        frame_18->setMinimumSize(QSize(0, 60));
        frame_18->setMaximumSize(QSize(16777215, 60));
        frame_18->setStyleSheet(QString::fromUtf8("border:none;"));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(frame_18);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        addUserBtn_2 = new QPushButton(frame_18);
        addUserBtn_2->setObjectName("addUserBtn_2");
        addUserBtn_2->setMinimumSize(QSize(0, 40));
        addUserBtn_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: lightgreen;border:1px solid lightgreen;\n"
"}\n"
"QPushButton::hover{\n"
"color: black;border:1px solid black;background-color:lightgreen;\n"
"}"));

        horizontalLayout_12->addWidget(addUserBtn_2);

        cancelBtn = new QPushButton(frame_18);
        cancelBtn->setObjectName("cancelBtn");
        cancelBtn->setMinimumSize(QSize(0, 40));
        cancelBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:red; border:1px solid; border-color:red;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"color:black; border:1px solid; border-color:white;background-color:red;\n"
"}"));

        horizontalLayout_12->addWidget(cancelBtn);


        verticalLayout_16->addWidget(frame_18);


        verticalLayout_15->addWidget(adminCommands_3, 0, Qt::AlignBottom);


        verticalLayout_14->addWidget(detailsPanel_3);


        verticalLayout_17->addWidget(frame_17, 0, Qt::AlignHCenter);

        stackedWidget->addWidget(AddNewUser);
        Main = new QWidget();
        Main->setObjectName("Main");
        Main->setEnabled(true);
        verticalLayout_7 = new QVBoxLayout(Main);
        verticalLayout_7->setObjectName("verticalLayout_7");
        frame_12 = new QFrame(Main);
        frame_12->setObjectName("frame_12");
        frame_12->setStyleSheet(QString::fromUtf8("background:rgb(58, 248, 0)\n"
"\n"
""));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_12);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_9 = new QLabel(frame_12);
        label_9->setObjectName("label_9");
        QFont font12;
        font12.setFamilies({QString::fromUtf8("Cascadia Code")});
        label_9->setFont(font12);
        label_9->setStyleSheet(QString::fromUtf8("color:blac"));

        horizontalLayout_4->addWidget(label_9);

        addUserBtn = new QPushButton(frame_12);
        addUserBtn->setObjectName("addUserBtn");
        addUserBtn->setMinimumSize(QSize(100, 40));
        addUserBtn->setMaximumSize(QSize(40, 16777215));
        QFont font13;
        font13.setFamilies({QString::fromUtf8("Cascadia Code")});
        font13.setPointSize(9);
        addUserBtn->setFont(font13);
        addUserBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:purple; color:white; border: none\n"
"}\n"
"QPushButton:hover{\n"
"background-color:purple; color:white; border: 3px solid white\n"
"}\n"
""));

        horizontalLayout_4->addWidget(addUserBtn);

        addPost = new QPushButton(frame_12);
        addPost->setObjectName("addPost");
        addPost->setMinimumSize(QSize(140, 40));
        addPost->setMaximumSize(QSize(40, 16777215));
        addPost->setFont(font13);
        addPost->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:blue; color:white; border: none\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:blue\n"
"; color:white; border: 3px solid white\n"
"}"));
        addPost->setFlat(true);

        horizontalLayout_4->addWidget(addPost);

        pushButton_2 = new QPushButton(frame_12);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 40));
        pushButton_2->setMaximumSize(QSize(100, 16777215));
        pushButton_2->setFont(font12);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: darkred;color:white; \n"
"border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: red;color:white; border:2px solid white;\n"
"\n"
"}\n"
""));
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(false);

        horizontalLayout_4->addWidget(pushButton_2);


        verticalLayout_7->addWidget(frame_12);

        frame_8 = new QFrame(Main);
        frame_8->setObjectName("frame_8");
        frame_8->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34, 34);"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_8);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        frame_9 = new QFrame(frame_8);
        frame_9->setObjectName("frame_9");
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frame_9->sizePolicy().hasHeightForWidth());
        frame_9->setSizePolicy(sizePolicy4);
        frame_9->setMaximumSize(QSize(8473986, 16777215));
        frame_9->setStyleSheet(QString::fromUtf8("border:1px solid rgb(58, 248, 0);\n"
"width:2em;"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frame_9);
        verticalLayout_8->setObjectName("verticalLayout_8");
        frame_11 = new QFrame(frame_9);
        frame_11->setObjectName("frame_11");
        frame_11->setStyleSheet(QString::fromUtf8("background:rgb(58, 248, 0);"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_7 = new QLabel(frame_11);
        label_7->setObjectName("label_7");
        label_7->setFont(font8);
        label_7->setStyleSheet(QString::fromUtf8("background:rgb(58, 248, 0);color:black"));

        horizontalLayout_3->addWidget(label_7);

        label_11 = new QLabel(frame_11);
        label_11->setObjectName("label_11");
        QFont font14;
        font14.setFamilies({QString::fromUtf8("Source Code Pro")});
        font14.setBold(true);
        font14.setItalic(true);
        font14.setUnderline(false);
        font14.setKerning(true);
        label_11->setFont(font14);
        label_11->setStyleSheet(QString::fromUtf8("color:black"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_11);


        verticalLayout_8->addWidget(frame_11);

        listWidget = new QListWidget(frame_9);
        listWidget->setObjectName("listWidget");
        listWidget->setEnabled(true);
        listWidget->setFont(font11);
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget{\n"
" color:black; border:1px solid rgb(58, 248, 0);\n"
"}\n"
"\n"
"QListWidget::item{\n"
"	border: 1px solid rgb(58, 248, 0);\n"
"color: white;\n"
"\n"
"}\n"
"\n"
"QListWidget::item:hover{\n"
"	border: 3px solid rgb(58, 248, 0);\n"
"\n"
"}\n"
"\n"
"QListWidget::item:selected{\n"
"	border: 1px solid rgb(58, 248, 0);\n"
"background-color:rgb(58, 248, 0);\n"
"color:rgb(34, 34, 34);\n"
"}"));
        listWidget->setLineWidth(1);
        listWidget->setMovement(QListView::Static);
        listWidget->setFlow(QListView::TopToBottom);
        listWidget->setProperty("isWrapping", QVariant(false));
        listWidget->setResizeMode(QListView::Adjust);
        listWidget->setLayoutMode(QListView::SinglePass);
        listWidget->setSpacing(5);
        listWidget->setViewMode(QListView::ListMode);
        listWidget->setUniformItemSizes(true);
        listWidget->setWordWrap(true);

        verticalLayout_8->addWidget(listWidget);


        horizontalLayout_5->addWidget(frame_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_5->addItem(verticalSpacer);

        frame_10 = new QFrame(frame_8);
        frame_10->setObjectName("frame_10");
        frame_10->setEnabled(true);
        sizePolicy1.setHeightForWidth(frame_10->sizePolicy().hasHeightForWidth());
        frame_10->setSizePolicy(sizePolicy1);
        frame_10->setMinimumSize(QSize(200, 0));
        frame_10->setFont(font8);
        frame_10->setStyleSheet(QString::fromUtf8("border:1px solid rgb(58, 248, 0);"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(frame_10);
        verticalLayout_9->setObjectName("verticalLayout_9");
        NoneNotification = new QLabel(frame_10);
        NoneNotification->setObjectName("NoneNotification");
        NoneNotification->setEnabled(true);
        sizePolicy2.setHeightForWidth(NoneNotification->sizePolicy().hasHeightForWidth());
        NoneNotification->setSizePolicy(sizePolicy2);
        NoneNotification->setFont(font8);
        NoneNotification->setStyleSheet(QString::fromUtf8("background:rgb(58, 248, 0);color:black"));

        verticalLayout_9->addWidget(NoneNotification, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        detailsPanel = new QFrame(frame_10);
        detailsPanel->setObjectName("detailsPanel");
        sizePolicy3.setHeightForWidth(detailsPanel->sizePolicy().hasHeightForWidth());
        detailsPanel->setSizePolicy(sizePolicy3);
        detailsPanel->setMinimumSize(QSize(0, 300));
        detailsPanel->setFrameShape(QFrame::StyledPanel);
        detailsPanel->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(detailsPanel);
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_8 = new QLabel(detailsPanel);
        label_8->setObjectName("label_8");
        label_8->setMaximumSize(QSize(16777215, 16777215));
        label_8->setFont(font9);
        label_8->setStyleSheet(QString::fromUtf8("background:rgb(58, 248, 0);color:black"));

        verticalLayout_10->addWidget(label_8);

        titleText = new QPlainTextEdit(detailsPanel);
        titleText->setObjectName("titleText");
        titleText->setMaximumSize(QSize(16777215, 80));
        titleText->setFont(font10);
        titleText->setStyleSheet(QString::fromUtf8("color:white"));
        titleText->setTabChangesFocus(false);
        titleText->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        titleText->setReadOnly(true);
        titleText->setOverwriteMode(true);
        titleText->setBackgroundVisible(false);
        titleText->setCenterOnScroll(false);

        verticalLayout_10->addWidget(titleText);

        line_2 = new QFrame(detailsPanel);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(line_2);

        label_10 = new QLabel(detailsPanel);
        label_10->setObjectName("label_10");
        label_10->setMaximumSize(QSize(16777215, 25));
        label_10->setFont(font9);
        label_10->setStyleSheet(QString::fromUtf8("background:rgb(58, 248, 0);;color:clack"));

        verticalLayout_10->addWidget(label_10);

        desText = new QPlainTextEdit(detailsPanel);
        desText->setObjectName("desText");
        desText->setFont(font11);
        desText->setStyleSheet(QString::fromUtf8("color:white"));
        desText->setReadOnly(true);
        desText->setOverwriteMode(true);

        verticalLayout_10->addWidget(desText);

        adminCommands = new QFrame(detailsPanel);
        adminCommands->setObjectName("adminCommands");
        adminCommands->setFrameShape(QFrame::StyledPanel);
        adminCommands->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(adminCommands);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_18 = new QLabel(adminCommands);
        label_18->setObjectName("label_18");
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(34, 34, 34); background-color:rgb(58, 248, 0);"));
        label_18->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_18);

        frame_14 = new QFrame(adminCommands);
        frame_14->setObjectName("frame_14");
        frame_14->setStyleSheet(QString::fromUtf8("border:none;"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame_14);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        pushButton_6 = new QPushButton(frame_14);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: lightgreen;border:1px solid lightgreen;\n"
"}\n"
"QPushButton::hover{\n"
"color: black;border:1px solid black;background-color:lightgreen;\n"
"}"));

        horizontalLayout_10->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(frame_14);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:red; border:1px solid; border-color:red;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"color:black; border:1px solid; border-color:white;background-color:red;\n"
"}"));

        horizontalLayout_10->addWidget(pushButton_4);


        verticalLayout_3->addWidget(frame_14);


        verticalLayout_10->addWidget(adminCommands);


        verticalLayout_9->addWidget(detailsPanel);


        horizontalLayout_5->addWidget(frame_10);

        line = new QFrame(frame_8);
        line->setObjectName("line");
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line);


        verticalLayout_7->addWidget(frame_8);

        stackedWidget->addWidget(Main);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 861, 25));
        menubar->setStyleSheet(QString::fromUtf8("background-color: rgb(8, 8, 8);"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setStyleSheet(QString::fromUtf8("background-color:rgb(34, 34, 34);"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);
        pushButton->setDefault(true);
        addUserBtn->setDefault(true);
        addPost->setDefault(false);
        pushButton_2->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Notification Board App", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", " --- Notification Board  App ---", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "--| Log In As |--", nullptr));
        admnBtn->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        facBtn->setText(QCoreApplication::translate("MainWindow", "Faculty Member", nullptr));
        stdBtn->setText(QCoreApplication::translate("MainWindow", "Student", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "SELECT CORRECT USERTYPE OR LOGIN WILL NOT WORK", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\360\237\221\244 User Name", nullptr));
        usrTxtBox->setText(QString());
        usrTxtBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\360\237\224\221 Password ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Demo Users: ", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\360\237\221\244 teacher ,   \360\237\224\221 teacher123", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\360\237\221\244 admin ,   \360\237\224\221 admin123", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\360\237\221\244 student ,   \360\237\224\221 student123", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Abdullah Noor - Flying Solo :)", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Reg # 2022029", nullptr));
        NoneNotification_2->setText(QCoreApplication::translate("MainWindow", "Add New Notification", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        titleAdd->setDocumentTitle(QString());
        titleAdd->setPlainText(QString());
        titleAdd->setPlaceholderText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        desAdd->setPlaceholderText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        postButton->setText(QCoreApplication::translate("MainWindow", "Add Post", nullptr));
        delNotification_2->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        NoneNotification_3->setText(QCoreApplication::translate("MainWindow", "Add new User", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "UserName", nullptr));
        usrTxt->setDocumentTitle(QString());
        usrTxt->setPlainText(QString());
        usrTxt->setPlaceholderText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "User Password", nullptr));
        passTxt->setPlaceholderText(QCoreApplication::translate("MainWindow", "User Password", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "User Type:", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Teacher", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Student", nullptr));
        addUserBtn_2->setText(QCoreApplication::translate("MainWindow", "Add User", nullptr));
        cancelBtn->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Welcome ", nullptr));
        addUserBtn->setText(QCoreApplication::translate("MainWindow", "+ User", nullptr));
        addPost->setText(QCoreApplication::translate("MainWindow", "+ Notification", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Sign Out", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "NOTIFICATIONS", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        NoneNotification->setText(QCoreApplication::translate("MainWindow", "Select a Notification To view Details", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        titleText->setDocumentTitle(QString());
        titleText->setPlainText(QString());
        titleText->setPlaceholderText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        desText->setPlaceholderText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Available Commands", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Update Edits", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Delete Notification", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
