/********************************************************************************
** Form generated from reading UI file 'appwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPWIDGET_H
#define UI_APPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppWidget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *homePage;
    QPushButton *startScanButton;
    QGroupBox *scanBox;
    QRadioButton *H1;
    QRadioButton *H2;
    QRadioButton *H3;
    QRadioButton *H4;
    QRadioButton *H5;
    QRadioButton *H6;
    QRadioButton *F1;
    QRadioButton *F2;
    QRadioButton *F3;
    QRadioButton *F4;
    QRadioButton *F5;
    QRadioButton *F6;
    QPushButton *scanButton;
    QPushButton *doneButton;
    QRadioButton *F6_2;
    QRadioButton *H1_2;
    QRadioButton *F2_2;
    QRadioButton *F1_2;
    QRadioButton *F5_2;
    QRadioButton *H4_2;
    QRadioButton *F4_2;
    QRadioButton *H6_2;
    QRadioButton *H3_2;
    QRadioButton *H5_2;
    QRadioButton *F3_2;
    QRadioButton *H2_2;
    QLabel *label_35;
    QLabel *label_36;
    QWidget *historyPage;
    QListWidget *historyList;
    QPushButton *showDataButton;
    QWidget *page;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QTextBrowser *h1Text;
    QTextBrowser *h2Text;
    QTextBrowser *h3Text;
    QTextBrowser *h4Text;
    QTextBrowser *h5Text;
    QTextBrowser *h6Text;
    QTextBrowser *f1Text;
    QTextBrowser *f4Text;
    QTextBrowser *f6Text;
    QTextBrowser *f2Text;
    QTextBrowser *f3Text;
    QTextBrowser *f5Text;
    QLabel *label;
    QLabel *label_14;
    QTextBrowser *h1Text_2;
    QTextBrowser *h2Text_2;
    QTextBrowser *h3Text_2;
    QTextBrowser *h4Text_2;
    QTextBrowser *h5Text_2;
    QTextBrowser *h6Text_2;
    QTextBrowser *f6Text_2;
    QTextBrowser *f2Text_2;
    QTextBrowser *f4Text_2;
    QTextBrowser *f1Text_2;
    QTextBrowser *f3Text_2;
    QTextBrowser *f5Text_2;
    QLabel *label_15;
    QLabel *label_16;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_19;
    QLabel *label_28;
    QLabel *label_25;
    QLabel *label_20;
    QLabel *label_18;
    QLabel *label_26;
    QLabel *label_23;
    QLabel *label_21;
    QLabel *label_17;
    QLabel *label_27;
    QLabel *label_24;
    QLabel *label_22;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QWidget *sideBar;
    QVBoxLayout *sidebarLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *measureButton;
    QPushButton *historyButton;
    QPushButton *newPageButton;
    QSpacerItem *verticalSpacer;
    QPushButton *signOutButton;

    void setupUi(QWidget *AppWidget)
    {
        if (AppWidget->objectName().isEmpty())
            AppWidget->setObjectName(QString::fromUtf8("AppWidget"));
        AppWidget->resize(801, 601);
        AppWidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(AppWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(180, 0, 621, 601));
        stackedWidget->setStyleSheet(QString::fromUtf8("QStackedWidget{\n"
"	background-color:rgb(46, 46, 46);\n"
"}"));
        homePage = new QWidget();
        homePage->setObjectName(QString::fromUtf8("homePage"));
        homePage->setStyleSheet(QString::fromUtf8("/* GroupBox */\n"
"QGroupBox {\n"
"    background: transparent; /* Transparent background */\n"
"    border: 2px solid rgba(255, 120, 0, 255); /* Border to match the sidebar */\n"
"    border-radius: 8px; /* Rounded corners */\n"
"    padding: 10px; /* Padding around content */\n"
"    margin: 10px; /* Margin to separate from other content */\n"
"    font-size: 18px;\n"
"    color: white; /* White text color for visibility */\n"
"}\n"
"\n"
"/* GroupBox title */\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding-left: 10px;\n"
"    padding-top: 5px;\n"
"    color: white; /* Title color */\n"
"}\n"
"\n"
"/* Radio Buttons inside GroupBox */\n"
"QRadioButton {\n"
"    background: transparent; /* Transparent background */\n"
"    color: white;             /* White text for visibility */\n"
"    border: none;             /* No border by default */\n"
"    font-size: 16px;          /* Adjust font size */\n"
"    padding: 5px;             /* Add padding aro"
                        "und text */\n"
"}\n"
"\n"
"/* Hover effect for Radio Buttons */\n"
"QRadioButton:hover {\n"
"    border: 1px solid rgba(255, 255, 255, 0.4); /* Light border on hover */\n"
"    border-radius: 4px;                          /* Rounded corners */\n"
"}\n"
"\n"
"/* When Radio Button is selected */\n"
"QRadioButton:checked {\n"
"    color: #ff7f00; /* Change text color when checked */\n"
"}\n"
"\n"
"/* Radio Button indicator (round) */\n"
"QRadioButton::indicator {\n"
"    border: 2px solid #ff7f00; /* Orange border */\n"
"    border-radius: 10px;        /* Round border */\n"
"    width: 16px;                /* Size of the circle */\n"
"    height: 16px;               /* Size of the circle */\n"
"    background-color: transparent; /* Transparent background */\n"
"}\n"
"\n"
"/* When Radio Button is checked, change the indicator */\n"
"QRadioButton::indicator:checked {\n"
"    background-color: #ff7f00;  /* Orange when selected */\n"
"    border-color: #ff7f00;      /* Orange border when selected */\n"
"}\n"
"\n"
"/*"
                        " Styling for QPushButtons in homePage Widget */\n"
"QPushButton {\n"
"    background: qlineargradient(\n"
"        spread: pad, \n"
"        x1: 1, y1: 0.045, \n"
"        x2: 1, y2: 1, \n"
"        stop: 0 rgba(255, 120, 0, 255), \n"
"        stop: 1 rgba(246, 97, 81, 255)\n"
"    ); /* Gradient background like sidebar */\n"
"    color: white; /* White text */\n"
"    border: none; /* No border */\n"
"    border-radius: 12px; /* Rounded corners */\n"
"    font-size: 16px;\n"
"    padding: 10px 20px; /* Adjust padding for button size */\n"
"    text-align: center; /* Centered text */\n"
"}\n"
"\n"
"/* Hover effect for buttons */\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(255, 255, 255, 0.6); /* Light border on hover */\n"
"    background: rgba(255, 120, 0, 180); /* Slightly darker when hovering */\n"
"}\n"
"\n"
"/* Button Pressed Effect */\n"
"QPushButton:pressed {\n"
"    background: rgba(255, 255, 255, 0.2); /* Subtle background change */\n"
"    background-color: rgba(255, 120, 0, 220); /* Darke"
                        "r orange when pressed */\n"
"}\n"
""));
        startScanButton = new QPushButton(homePage);
        startScanButton->setObjectName(QString::fromUtf8("startScanButton"));
        startScanButton->setGeometry(QRect(240, 520, 161, 71));
        scanBox = new QGroupBox(homePage);
        scanBox->setObjectName(QString::fromUtf8("scanBox"));
        scanBox->setEnabled(false);
        scanBox->setGeometry(QRect(10, 100, 601, 411));
        H1 = new QRadioButton(scanBox);
        H1->setObjectName(QString::fromUtf8("H1"));
        H1->setGeometry(QRect(30, 60, 106, 23));
        H2 = new QRadioButton(scanBox);
        H2->setObjectName(QString::fromUtf8("H2"));
        H2->setGeometry(QRect(30, 90, 106, 23));
        H3 = new QRadioButton(scanBox);
        H3->setObjectName(QString::fromUtf8("H3"));
        H3->setGeometry(QRect(30, 120, 106, 23));
        H4 = new QRadioButton(scanBox);
        H4->setObjectName(QString::fromUtf8("H4"));
        H4->setGeometry(QRect(150, 60, 106, 23));
        H5 = new QRadioButton(scanBox);
        H5->setObjectName(QString::fromUtf8("H5"));
        H5->setGeometry(QRect(150, 90, 106, 23));
        H6 = new QRadioButton(scanBox);
        H6->setObjectName(QString::fromUtf8("H6"));
        H6->setGeometry(QRect(150, 120, 106, 23));
        F1 = new QRadioButton(scanBox);
        F1->setObjectName(QString::fromUtf8("F1"));
        F1->setGeometry(QRect(270, 60, 106, 23));
        F2 = new QRadioButton(scanBox);
        F2->setObjectName(QString::fromUtf8("F2"));
        F2->setGeometry(QRect(270, 90, 106, 23));
        F3 = new QRadioButton(scanBox);
        F3->setObjectName(QString::fromUtf8("F3"));
        F3->setGeometry(QRect(270, 120, 106, 23));
        F4 = new QRadioButton(scanBox);
        F4->setObjectName(QString::fromUtf8("F4"));
        F4->setGeometry(QRect(390, 60, 106, 23));
        F5 = new QRadioButton(scanBox);
        F5->setObjectName(QString::fromUtf8("F5"));
        F5->setGeometry(QRect(390, 90, 106, 23));
        F6 = new QRadioButton(scanBox);
        F6->setObjectName(QString::fromUtf8("F6"));
        F6->setGeometry(QRect(390, 120, 106, 23));
        scanButton = new QPushButton(scanBox);
        scanButton->setObjectName(QString::fromUtf8("scanButton"));
        scanButton->setGeometry(QRect(250, 290, 111, 41));
        doneButton = new QPushButton(scanBox);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(250, 340, 111, 41));
        F6_2 = new QRadioButton(scanBox);
        F6_2->setObjectName(QString::fromUtf8("F6_2"));
        F6_2->setGeometry(QRect(390, 240, 106, 23));
        H1_2 = new QRadioButton(scanBox);
        H1_2->setObjectName(QString::fromUtf8("H1_2"));
        H1_2->setGeometry(QRect(30, 180, 106, 23));
        F2_2 = new QRadioButton(scanBox);
        F2_2->setObjectName(QString::fromUtf8("F2_2"));
        F2_2->setGeometry(QRect(270, 210, 106, 23));
        F1_2 = new QRadioButton(scanBox);
        F1_2->setObjectName(QString::fromUtf8("F1_2"));
        F1_2->setGeometry(QRect(270, 180, 106, 23));
        F5_2 = new QRadioButton(scanBox);
        F5_2->setObjectName(QString::fromUtf8("F5_2"));
        F5_2->setGeometry(QRect(390, 210, 106, 23));
        H4_2 = new QRadioButton(scanBox);
        H4_2->setObjectName(QString::fromUtf8("H4_2"));
        H4_2->setGeometry(QRect(150, 180, 106, 23));
        F4_2 = new QRadioButton(scanBox);
        F4_2->setObjectName(QString::fromUtf8("F4_2"));
        F4_2->setGeometry(QRect(390, 180, 106, 23));
        H6_2 = new QRadioButton(scanBox);
        H6_2->setObjectName(QString::fromUtf8("H6_2"));
        H6_2->setGeometry(QRect(150, 240, 106, 23));
        H3_2 = new QRadioButton(scanBox);
        H3_2->setObjectName(QString::fromUtf8("H3_2"));
        H3_2->setGeometry(QRect(30, 240, 106, 23));
        H5_2 = new QRadioButton(scanBox);
        H5_2->setObjectName(QString::fromUtf8("H5_2"));
        H5_2->setGeometry(QRect(150, 210, 106, 23));
        F3_2 = new QRadioButton(scanBox);
        F3_2->setObjectName(QString::fromUtf8("F3_2"));
        F3_2->setGeometry(QRect(270, 240, 106, 23));
        H2_2 = new QRadioButton(scanBox);
        H2_2->setObjectName(QString::fromUtf8("H2_2"));
        H2_2->setGeometry(QRect(30, 210, 106, 23));
        label_35 = new QLabel(scanBox);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(30, 40, 71, 16));
        label_36 = new QLabel(scanBox);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(30, 160, 71, 16));
        stackedWidget->addWidget(homePage);
        historyPage = new QWidget();
        historyPage->setObjectName(QString::fromUtf8("historyPage"));
        historyPage->setStyleSheet(QString::fromUtf8("/* History Tab - ListWidget Styling */\n"
"QListWidget {\n"
"    background: transparent; /* Transparent background for the list */\n"
"    border: 2px solid rgba(255, 120, 0, 255); /* Orange border around the list */\n"
"    border-radius: 12px; /* Rounded corners for the entire list */\n"
"    padding: 10px; /* Padding inside the list */\n"
"    color: white; /* White text */\n"
"    font-size: 16px; /* Font size for items */\n"
"}\n"
"\n"
"/* List Item Styling */\n"
"QListWidget::item {\n"
"    background: rgba(0, 0, 0, 0.15); /* Darker background for non-selected items */\n"
"    border: none;\n"
"    color: white; /* White text color */\n"
"    padding: 8px 12px; /* Padding around items */\n"
"    border-radius: 10px; /* Rounded corners for each item */\n"
"    margin: 5px 0; /* Space between items */\n"
"}\n"
"\n"
"/* Selected Item Styling */\n"
"QListWidget::item:selected {\n"
"    background-color: rgba(255, 120, 0, 0.8); /* Darker orange background when selected */\n"
"    border-radius: 10px; /* Roun"
                        "ded corners for selected items */\n"
"}\n"
"\n"
"/* Hover Effect for List Items */\n"
"QListWidget::item:hover {\n"
"    background-color: rgba(255, 120, 0, 0.3); /* Light orange background on hover */\n"
"    border-radius: 10px; /* Rounded corners for hover effect */\n"
"}\n"
"\n"
"/* History Tab - Button Styling */\n"
"QPushButton {\n"
"    background: qlineargradient(\n"
"        spread: pad, \n"
"        x1: 1, y1: 0.045, \n"
"        x2: 1, y2: 1, \n"
"        stop: 0 rgba(255, 120, 0, 255), \n"
"        stop: 1 rgba(246, 97, 81, 255)\n"
"    ); /* Gradient background like sidebar */\n"
"    color: white; /* White text */\n"
"    border: none; /* No border */\n"
"    border-radius: 12px; /* Rounded corners for button */\n"
"    font-size: 16px;\n"
"    padding: 10px 20px; /* Padding for the button */\n"
"    text-align: center; /* Centered text */\n"
"}\n"
"\n"
"/* Button Hover Effect */\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(255, 255, 255, 0.6); /* Light border on hover */\n"
"    backgr"
                        "ound: rgba(255, 120, 0, 180); /* Slightly darker when hovering */\n"
"}\n"
"\n"
"/* Button Pressed Effect */\n"
"QPushButton:pressed {\n"
"    background: rgba(255, 255, 255, 0.2); /* Subtle background change */\n"
"    background-color: rgba(255, 120, 0, 220); /* Darker orange when pressed */\n"
"}\n"
""));
        historyList = new QListWidget(historyPage);
        historyList->setObjectName(QString::fromUtf8("historyList"));
        historyList->setGeometry(QRect(70, 40, 481, 461));
        historyList->setStyleSheet(QString::fromUtf8("background-color:white;"));
        showDataButton = new QPushButton(historyPage);
        showDataButton->setObjectName(QString::fromUtf8("showDataButton"));
        showDataButton->setGeometry(QRect(140, 510, 361, 71));
        showDataButton->setCursor(QCursor(Qt::PointingHandCursor));
        stackedWidget->addWidget(historyPage);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 40, 62, 17));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 70, 62, 17));
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 100, 62, 17));
        label_5 = new QLabel(page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 160, 62, 17));
        label_6 = new QLabel(page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 130, 62, 17));
        label_7 = new QLabel(page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(310, 130, 62, 17));
        label_8 = new QLabel(page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 190, 62, 17));
        label_9 = new QLabel(page);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(310, 100, 62, 17));
        label_10 = new QLabel(page);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(310, 40, 62, 17));
        label_11 = new QLabel(page);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(310, 70, 62, 17));
        label_12 = new QLabel(page);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(310, 190, 62, 17));
        label_13 = new QLabel(page);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(310, 160, 62, 17));
        h1Text = new QTextBrowser(page);
        h1Text->setObjectName(QString::fromUtf8("h1Text"));
        h1Text->setGeometry(QRect(60, 40, 101, 21));
        h1Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h1Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h1Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h2Text = new QTextBrowser(page);
        h2Text->setObjectName(QString::fromUtf8("h2Text"));
        h2Text->setGeometry(QRect(60, 70, 101, 21));
        h2Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h2Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h2Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h3Text = new QTextBrowser(page);
        h3Text->setObjectName(QString::fromUtf8("h3Text"));
        h3Text->setGeometry(QRect(60, 100, 101, 21));
        h3Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h3Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h3Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h4Text = new QTextBrowser(page);
        h4Text->setObjectName(QString::fromUtf8("h4Text"));
        h4Text->setGeometry(QRect(60, 130, 101, 21));
        h4Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h4Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h4Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h5Text = new QTextBrowser(page);
        h5Text->setObjectName(QString::fromUtf8("h5Text"));
        h5Text->setGeometry(QRect(60, 160, 101, 21));
        h5Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h5Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h5Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h6Text = new QTextBrowser(page);
        h6Text->setObjectName(QString::fromUtf8("h6Text"));
        h6Text->setGeometry(QRect(60, 190, 101, 21));
        h6Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h6Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h6Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f1Text = new QTextBrowser(page);
        f1Text->setObjectName(QString::fromUtf8("f1Text"));
        f1Text->setGeometry(QRect(350, 40, 101, 21));
        f1Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f1Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f1Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f4Text = new QTextBrowser(page);
        f4Text->setObjectName(QString::fromUtf8("f4Text"));
        f4Text->setGeometry(QRect(350, 130, 101, 21));
        f4Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f4Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f4Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f6Text = new QTextBrowser(page);
        f6Text->setObjectName(QString::fromUtf8("f6Text"));
        f6Text->setGeometry(QRect(350, 190, 101, 21));
        f6Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f6Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f6Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f2Text = new QTextBrowser(page);
        f2Text->setObjectName(QString::fromUtf8("f2Text"));
        f2Text->setGeometry(QRect(350, 70, 101, 21));
        f2Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f2Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f2Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f3Text = new QTextBrowser(page);
        f3Text->setObjectName(QString::fromUtf8("f3Text"));
        f3Text->setGeometry(QRect(350, 100, 101, 21));
        f3Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f3Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f3Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f5Text = new QTextBrowser(page);
        f5Text->setObjectName(QString::fromUtf8("f5Text"));
        f5Text->setGeometry(QRect(350, 160, 101, 21));
        f5Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f5Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f5Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 62, 17));
        label_14 = new QLabel(page);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(190, 10, 62, 17));
        h1Text_2 = new QTextBrowser(page);
        h1Text_2->setObjectName(QString::fromUtf8("h1Text_2"));
        h1Text_2->setGeometry(QRect(170, 40, 101, 21));
        h1Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h1Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h1Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h2Text_2 = new QTextBrowser(page);
        h2Text_2->setObjectName(QString::fromUtf8("h2Text_2"));
        h2Text_2->setGeometry(QRect(170, 70, 101, 21));
        h2Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h2Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h2Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h3Text_2 = new QTextBrowser(page);
        h3Text_2->setObjectName(QString::fromUtf8("h3Text_2"));
        h3Text_2->setGeometry(QRect(170, 100, 101, 21));
        h3Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h3Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h3Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h4Text_2 = new QTextBrowser(page);
        h4Text_2->setObjectName(QString::fromUtf8("h4Text_2"));
        h4Text_2->setGeometry(QRect(170, 130, 101, 21));
        h4Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h4Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h4Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h5Text_2 = new QTextBrowser(page);
        h5Text_2->setObjectName(QString::fromUtf8("h5Text_2"));
        h5Text_2->setGeometry(QRect(170, 160, 101, 21));
        h5Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h5Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h5Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h6Text_2 = new QTextBrowser(page);
        h6Text_2->setObjectName(QString::fromUtf8("h6Text_2"));
        h6Text_2->setGeometry(QRect(170, 190, 101, 21));
        h6Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h6Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h6Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f6Text_2 = new QTextBrowser(page);
        f6Text_2->setObjectName(QString::fromUtf8("f6Text_2"));
        f6Text_2->setGeometry(QRect(460, 190, 101, 21));
        f6Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f6Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f6Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f2Text_2 = new QTextBrowser(page);
        f2Text_2->setObjectName(QString::fromUtf8("f2Text_2"));
        f2Text_2->setGeometry(QRect(460, 70, 101, 21));
        f2Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f2Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f2Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f4Text_2 = new QTextBrowser(page);
        f4Text_2->setObjectName(QString::fromUtf8("f4Text_2"));
        f4Text_2->setGeometry(QRect(460, 130, 101, 21));
        f4Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f4Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f4Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f1Text_2 = new QTextBrowser(page);
        f1Text_2->setObjectName(QString::fromUtf8("f1Text_2"));
        f1Text_2->setGeometry(QRect(460, 40, 101, 21));
        f1Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f1Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f1Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f3Text_2 = new QTextBrowser(page);
        f3Text_2->setObjectName(QString::fromUtf8("f3Text_2"));
        f3Text_2->setGeometry(QRect(460, 100, 101, 21));
        f3Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f3Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f3Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f5Text_2 = new QTextBrowser(page);
        f5Text_2->setObjectName(QString::fromUtf8("f5Text_2"));
        f5Text_2->setGeometry(QRect(460, 160, 101, 21));
        f5Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f5Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f5Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_15 = new QLabel(page);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(480, 10, 62, 17));
        label_16 = new QLabel(page);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(380, 10, 62, 17));
        gridLayoutWidget = new QWidget(page);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 300, 501, 281));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(gridLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 209, 122);"));

        gridLayout->addWidget(label_19, 1, 0, 1, 1);

        label_28 = new QLabel(gridLayoutWidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 209, 122);"));

        gridLayout->addWidget(label_28, 12, 1, 1, 1);

        label_25 = new QLabel(gridLayoutWidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 209, 122);"));

        gridLayout->addWidget(label_25, 10, 0, 1, 1);

        label_20 = new QLabel(gridLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 209, 122);"));

        gridLayout->addWidget(label_20, 1, 1, 1, 1);

        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 209, 122);"));

        gridLayout->addWidget(label_18, 0, 1, 1, 1);

        label_26 = new QLabel(gridLayoutWidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 209, 122);"));

        gridLayout->addWidget(label_26, 10, 1, 1, 1);

        label_23 = new QLabel(gridLayoutWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 209, 122);"));

        gridLayout->addWidget(label_23, 8, 0, 1, 1);

        label_21 = new QLabel(gridLayoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 209, 122);"));

        gridLayout->addWidget(label_21, 6, 0, 1, 1);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 209, 122);"));

        gridLayout->addWidget(label_17, 0, 0, 1, 1);

        label_27 = new QLabel(gridLayoutWidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 209, 122);"));

        gridLayout->addWidget(label_27, 12, 0, 1, 1);

        label_24 = new QLabel(gridLayoutWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 209, 122);"));

        gridLayout->addWidget(label_24, 8, 1, 1, 1);

        label_22 = new QLabel(gridLayoutWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 209, 122);"));

        gridLayout->addWidget(label_22, 6, 1, 1, 1);

        horizontalLayoutWidget = new QWidget(page);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(160, 270, 321, 19));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(horizontalLayoutWidget);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy);
        label_29->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 209, 122);"));

        horizontalLayout->addWidget(label_29);

        label_30 = new QLabel(horizontalLayoutWidget);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        horizontalLayout->addWidget(label_30);

        label_31 = new QLabel(horizontalLayoutWidget);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        sizePolicy.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy);
        label_31->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 113, 216);"));

        horizontalLayout->addWidget(label_31);

        label_32 = new QLabel(horizontalLayoutWidget);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout->addWidget(label_32);

        label_33 = new QLabel(horizontalLayoutWidget);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        sizePolicy.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy);
        label_33->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 27, 36);"));

        horizontalLayout->addWidget(label_33);

        label_34 = new QLabel(horizontalLayoutWidget);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout->addWidget(label_34);

        stackedWidget->addWidget(page);
        sideBar = new QWidget(AppWidget);
        sideBar->setObjectName(QString::fromUtf8("sideBar"));
        sideBar->setGeometry(QRect(0, 0, 181, 601));
        sideBar->setStyleSheet(QString::fromUtf8("/* Sidebar QWidget */\n"
"#sideBar {\n"
"    background: qlineargradient(\n"
"spread:pad, x1:1, y1:0.045, x2:1, y2:1, stop:0 rgba(255, 120, 0, 255), stop:1 rgba(246, 97, 81, 255));\n"
"    border: none; /* Removes any default border */\n"
"}\n"
"\n"
"/* QPushButtons inside the sidebar */\n"
"QPushButton {\n"
"    background: transparent; /* Transparent button background */\n"
"    color: white;            /* White text for visibility */\n"
"    border: none;            /* No border by default */\n"
"    font-size: 16px;         /* Adjust font size for visibility */\n"
"    padding: 8px;            /* Add padding around text */\n"
"    text-align: left;        /* Align text to the left */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(255, 255, 255, 0.6); /* Light border on hover */\n"
"    border-radius: 4px;                         /* Rounded edges for hover effect */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: rgba(255, 255, 255, 0.2); /* Subtle background change on click */\n"
""
                        "}\n"
""));
        sidebarLayout = new QVBoxLayout(sideBar);
        sidebarLayout->setObjectName(QString::fromUtf8("sidebarLayout"));
        sidebarLayout->setContentsMargins(20, -1, 20, -1);
        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        sidebarLayout->addItem(verticalSpacer_2);

        measureButton = new QPushButton(sideBar);
        measureButton->setObjectName(QString::fromUtf8("measureButton"));
        measureButton->setProperty("id", QVariant(0));

        sidebarLayout->addWidget(measureButton);

        historyButton = new QPushButton(sideBar);
        historyButton->setObjectName(QString::fromUtf8("historyButton"));
        historyButton->setCheckable(false);
        historyButton->setProperty("id", QVariant(1));

        sidebarLayout->addWidget(historyButton);

        newPageButton = new QPushButton(sideBar);
        newPageButton->setObjectName(QString::fromUtf8("newPageButton"));
        newPageButton->setProperty("id", QVariant(2));

        sidebarLayout->addWidget(newPageButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        sidebarLayout->addItem(verticalSpacer);

        signOutButton = new QPushButton(sideBar);
        signOutButton->setObjectName(QString::fromUtf8("signOutButton"));

        sidebarLayout->addWidget(signOutButton);


        retranslateUi(AppWidget);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(AppWidget);
    } // setupUi

    void retranslateUi(QWidget *AppWidget)
    {
        AppWidget->setWindowTitle(QCoreApplication::translate("AppWidget", "Form", nullptr));
        startScanButton->setText(QCoreApplication::translate("AppWidget", "Start Scan", nullptr));
        scanBox->setTitle(QCoreApplication::translate("AppWidget", "Scan", nullptr));
        H1->setText(QCoreApplication::translate("AppWidget", "H1", nullptr));
        H2->setText(QCoreApplication::translate("AppWidget", "H2", nullptr));
        H3->setText(QCoreApplication::translate("AppWidget", "H3", nullptr));
        H4->setText(QCoreApplication::translate("AppWidget", "H4", nullptr));
        H5->setText(QCoreApplication::translate("AppWidget", "H5", nullptr));
        H6->setText(QCoreApplication::translate("AppWidget", "H6", nullptr));
        F1->setText(QCoreApplication::translate("AppWidget", "F1", nullptr));
        F2->setText(QCoreApplication::translate("AppWidget", "F2", nullptr));
        F3->setText(QCoreApplication::translate("AppWidget", "F3", nullptr));
        F4->setText(QCoreApplication::translate("AppWidget", "F4", nullptr));
        F5->setText(QCoreApplication::translate("AppWidget", "F5", nullptr));
        F6->setText(QCoreApplication::translate("AppWidget", "F6", nullptr));
        scanButton->setText(QCoreApplication::translate("AppWidget", "Scan", nullptr));
        doneButton->setText(QCoreApplication::translate("AppWidget", "Finish", nullptr));
        F6_2->setText(QCoreApplication::translate("AppWidget", "F6", nullptr));
        H1_2->setText(QCoreApplication::translate("AppWidget", "H1", nullptr));
        F2_2->setText(QCoreApplication::translate("AppWidget", "F2", nullptr));
        F1_2->setText(QCoreApplication::translate("AppWidget", "F1", nullptr));
        F5_2->setText(QCoreApplication::translate("AppWidget", "F5", nullptr));
        H4_2->setText(QCoreApplication::translate("AppWidget", "H4", nullptr));
        F4_2->setText(QCoreApplication::translate("AppWidget", "F4", nullptr));
        H6_2->setText(QCoreApplication::translate("AppWidget", "H6", nullptr));
        H3_2->setText(QCoreApplication::translate("AppWidget", "H3", nullptr));
        H5_2->setText(QCoreApplication::translate("AppWidget", "H5", nullptr));
        F3_2->setText(QCoreApplication::translate("AppWidget", "F3", nullptr));
        H2_2->setText(QCoreApplication::translate("AppWidget", "H2", nullptr));
        label_35->setText(QCoreApplication::translate("AppWidget", "Left Side", nullptr));
        label_36->setText(QCoreApplication::translate("AppWidget", "Right Side", nullptr));
        showDataButton->setText(QCoreApplication::translate("AppWidget", "Show Selected Data", nullptr));
        label_2->setText(QCoreApplication::translate("AppWidget", "H1", nullptr));
        label_3->setText(QCoreApplication::translate("AppWidget", "H2", nullptr));
        label_4->setText(QCoreApplication::translate("AppWidget", "H3", nullptr));
        label_5->setText(QCoreApplication::translate("AppWidget", "H5", nullptr));
        label_6->setText(QCoreApplication::translate("AppWidget", "H4", nullptr));
        label_7->setText(QCoreApplication::translate("AppWidget", "F4", nullptr));
        label_8->setText(QCoreApplication::translate("AppWidget", "H6", nullptr));
        label_9->setText(QCoreApplication::translate("AppWidget", "F3", nullptr));
        label_10->setText(QCoreApplication::translate("AppWidget", "F1", nullptr));
        label_11->setText(QCoreApplication::translate("AppWidget", "F2", nullptr));
        label_12->setText(QCoreApplication::translate("AppWidget", "F6", nullptr));
        label_13->setText(QCoreApplication::translate("AppWidget", "F5", nullptr));
        label->setText(QCoreApplication::translate("AppWidget", "Left", nullptr));
        label_14->setText(QCoreApplication::translate("AppWidget", "Right", nullptr));
        label_15->setText(QCoreApplication::translate("AppWidget", "Right", nullptr));
        label_16->setText(QCoreApplication::translate("AppWidget", "Left", nullptr));
        label_19->setText(QCoreApplication::translate("AppWidget", "Heart", nullptr));
        label_28->setText(QCoreApplication::translate("AppWidget", "Stomach", nullptr));
        label_25->setText(QCoreApplication::translate("AppWidget", "Kidney", nullptr));
        label_20->setText(QCoreApplication::translate("AppWidget", "Small Intestine", nullptr));
        label_18->setText(QCoreApplication::translate("AppWidget", "Pericaridium", nullptr));
        label_26->setText(QCoreApplication::translate("AppWidget", "Bladder", nullptr));
        label_23->setText(QCoreApplication::translate("AppWidget", "Pancrease", nullptr));
        label_21->setText(QCoreApplication::translate("AppWidget", "Lymph Vessel", nullptr));
        label_17->setText(QCoreApplication::translate("AppWidget", "Lungs", nullptr));
        label_27->setText(QCoreApplication::translate("AppWidget", "Gull Bladder", nullptr));
        label_24->setText(QCoreApplication::translate("AppWidget", "Liver", nullptr));
        label_22->setText(QCoreApplication::translate("AppWidget", "Large Intestine", nullptr));
        label_29->setText(QString());
        label_30->setText(QCoreApplication::translate("AppWidget", "Normal", nullptr));
        label_31->setText(QString());
        label_32->setText(QCoreApplication::translate("AppWidget", "Below Normal", nullptr));
        label_33->setText(QString());
        label_34->setText(QCoreApplication::translate("AppWidget", "Above Normal", nullptr));
        measureButton->setText(QCoreApplication::translate("AppWidget", "Measure", nullptr));
        historyButton->setText(QCoreApplication::translate("AppWidget", "History", nullptr));
        newPageButton->setText(QCoreApplication::translate("AppWidget", "Data", nullptr));
        signOutButton->setText(QCoreApplication::translate("AppWidget", "Sign Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppWidget: public Ui_AppWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPWIDGET_H
