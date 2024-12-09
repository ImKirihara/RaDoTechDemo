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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppWidget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *homePage;
    QGroupBox *scanBox;
    QPushButton *scanHandsButton;
    QPushButton *doneButton;
    QPushButton *scanFeetButton;
    QLabel *lblHandScan;
    QLabel *lblFeetScan;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *RH1;
    QLabel *RH2;
    QLabel *RH3;
    QLabel *RH4;
    QLabel *RH5;
    QLabel *RH6;
    QLabel *LH5;
    QLabel *LH2;
    QLabel *LH4;
    QLabel *LH1;
    QLabel *LH3;
    QLabel *LH6;
    QLabel *RF5;
    QLabel *RF2;
    QLabel *LF1;
    QLabel *LF2;
    QLabel *RF4;
    QLabel *LF4;
    QLabel *RF1;
    QLabel *LF5;
    QLabel *RF3;
    QLabel *LF3;
    QLabel *LF6;
    QLabel *RF6;
    QProgressBar *batteryBar;
    QPushButton *startScanButton;
    QWidget *historyPage;
    QListWidget *historyList;
    QPushButton *showDataButton;
    QWidget *dataPage;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextBrowser *FR1txt;
    QLabel *label_13;
    QLabel *label_9;
    QTextBrowser *FL4txt;
    QLabel *label_16;
    QTextBrowser *HR1txt;
    QLabel *label;
    QLabel *label_11;
    QLabel *label_5;
    QTextBrowser *HL6txt;
    QTextBrowser *HR6txt;
    QTextBrowser *FR5txt;
    QTextBrowser *HR4txt;
    QLabel *label_2;
    QTextBrowser *FR4txt;
    QTextBrowser *FR2txt;
    QTextBrowser *FR3txt;
    QLabel *label_7;
    QTextBrowser *HR2txt;
    QLabel *label_4;
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
    QTextBrowser *HL3txt;
    QLabel *label_3;
    QTextBrowser *FL6txt;
    QTextBrowser *FL3txt;
    QTextBrowser *FL1txt;
    QTextBrowser *HL4txt;
    QLabel *label_10;
    QTextBrowser *HL2txt;
    QLabel *label_14;
    QTextBrowser *HR3txt;
    QTextBrowser *HL1txt;
    QLabel *label_12;
    QLabel *label_8;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_6;
    QTextBrowser *FR6txt;
    QTextBrowser *FL5txt;
    QTextBrowser *FL2txt;
    QTextBrowser *HL5txt;
    QLabel *label_15;
    QTextBrowser *HR5txt;
    QWidget *tab_2;
    QWidget *tab_3;
    QTextBrowser *textBrowser;
    QWidget *sideBar;
    QVBoxLayout *sidebarLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *measureButton;
    QPushButton *historyButton;
    QPushButton *newPageButton;
    QSpacerItem *verticalSpacer;
    QPushButton *chargeButton;
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
        scanBox = new QGroupBox(homePage);
        scanBox->setObjectName(QString::fromUtf8("scanBox"));
        scanBox->setEnabled(false);
        scanBox->setGeometry(QRect(10, 90, 601, 411));
        scanBox->setStyleSheet(QString::fromUtf8("#scanBox{\n"
"background-color:rgb(46, 46, 46);\n"
"}\n"
"\n"
"\n"
""));
        scanHandsButton = new QPushButton(scanBox);
        scanHandsButton->setObjectName(QString::fromUtf8("scanHandsButton"));
        scanHandsButton->setGeometry(QRect(60, 70, 151, 41));
        doneButton = new QPushButton(scanBox);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(240, 340, 111, 41));
        scanFeetButton = new QPushButton(scanBox);
        scanFeetButton->setObjectName(QString::fromUtf8("scanFeetButton"));
        scanFeetButton->setGeometry(QRect(390, 70, 151, 41));
        lblHandScan = new QLabel(scanBox);
        lblHandScan->setObjectName(QString::fromUtf8("lblHandScan"));
        lblHandScan->setGeometry(QRect(60, 40, 151, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(20);
        lblHandScan->setFont(font);
        lblFeetScan = new QLabel(scanBox);
        lblFeetScan->setObjectName(QString::fromUtf8("lblFeetScan"));
        lblFeetScan->setGeometry(QRect(390, 40, 151, 31));
        lblFeetScan->setFont(font);
        label_37 = new QLabel(scanBox);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(80, 120, 41, 17));
        label_38 = new QLabel(scanBox);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(160, 120, 41, 17));
        label_39 = new QLabel(scanBox);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(410, 120, 41, 17));
        label_40 = new QLabel(scanBox);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(490, 120, 41, 17));
        RH1 = new QLabel(scanBox);
        RH1->setObjectName(QString::fromUtf8("RH1"));
        RH1->setGeometry(QRect(90, 150, 41, 17));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        RH1->setFont(font1);
        RH1->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        RH2 = new QLabel(scanBox);
        RH2->setObjectName(QString::fromUtf8("RH2"));
        RH2->setGeometry(QRect(90, 180, 41, 17));
        RH2->setFont(font1);
        RH2->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        RH3 = new QLabel(scanBox);
        RH3->setObjectName(QString::fromUtf8("RH3"));
        RH3->setGeometry(QRect(90, 210, 41, 17));
        RH3->setFont(font1);
        RH3->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        RH4 = new QLabel(scanBox);
        RH4->setObjectName(QString::fromUtf8("RH4"));
        RH4->setGeometry(QRect(90, 240, 41, 17));
        RH4->setFont(font1);
        RH4->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        RH5 = new QLabel(scanBox);
        RH5->setObjectName(QString::fromUtf8("RH5"));
        RH5->setGeometry(QRect(90, 270, 41, 17));
        RH5->setFont(font1);
        RH5->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        RH6 = new QLabel(scanBox);
        RH6->setObjectName(QString::fromUtf8("RH6"));
        RH6->setGeometry(QRect(90, 300, 41, 17));
        RH6->setFont(font1);
        RH6->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        LH5 = new QLabel(scanBox);
        LH5->setObjectName(QString::fromUtf8("LH5"));
        LH5->setGeometry(QRect(160, 270, 41, 17));
        LH5->setFont(font1);
        LH5->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        LH2 = new QLabel(scanBox);
        LH2->setObjectName(QString::fromUtf8("LH2"));
        LH2->setGeometry(QRect(160, 180, 41, 17));
        LH2->setFont(font1);
        LH2->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        LH4 = new QLabel(scanBox);
        LH4->setObjectName(QString::fromUtf8("LH4"));
        LH4->setGeometry(QRect(160, 240, 41, 17));
        LH4->setFont(font1);
        LH4->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        LH1 = new QLabel(scanBox);
        LH1->setObjectName(QString::fromUtf8("LH1"));
        LH1->setGeometry(QRect(160, 150, 41, 17));
        LH1->setFont(font1);
        LH1->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        LH3 = new QLabel(scanBox);
        LH3->setObjectName(QString::fromUtf8("LH3"));
        LH3->setGeometry(QRect(160, 210, 41, 17));
        LH3->setFont(font1);
        LH3->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        LH6 = new QLabel(scanBox);
        LH6->setObjectName(QString::fromUtf8("LH6"));
        LH6->setGeometry(QRect(160, 300, 41, 17));
        LH6->setFont(font1);
        LH6->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        RF5 = new QLabel(scanBox);
        RF5->setObjectName(QString::fromUtf8("RF5"));
        RF5->setGeometry(QRect(410, 270, 41, 17));
        RF5->setFont(font1);
        RF5->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        RF2 = new QLabel(scanBox);
        RF2->setObjectName(QString::fromUtf8("RF2"));
        RF2->setGeometry(QRect(410, 180, 41, 17));
        RF2->setFont(font1);
        RF2->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        LF1 = new QLabel(scanBox);
        LF1->setObjectName(QString::fromUtf8("LF1"));
        LF1->setGeometry(QRect(480, 150, 41, 17));
        LF1->setFont(font1);
        LF1->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        LF2 = new QLabel(scanBox);
        LF2->setObjectName(QString::fromUtf8("LF2"));
        LF2->setGeometry(QRect(480, 180, 41, 17));
        LF2->setFont(font1);
        LF2->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        RF4 = new QLabel(scanBox);
        RF4->setObjectName(QString::fromUtf8("RF4"));
        RF4->setGeometry(QRect(410, 240, 41, 17));
        RF4->setFont(font1);
        RF4->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        LF4 = new QLabel(scanBox);
        LF4->setObjectName(QString::fromUtf8("LF4"));
        LF4->setGeometry(QRect(480, 240, 41, 17));
        LF4->setFont(font1);
        LF4->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        RF1 = new QLabel(scanBox);
        RF1->setObjectName(QString::fromUtf8("RF1"));
        RF1->setGeometry(QRect(410, 150, 41, 17));
        RF1->setFont(font1);
        RF1->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        LF5 = new QLabel(scanBox);
        LF5->setObjectName(QString::fromUtf8("LF5"));
        LF5->setGeometry(QRect(480, 270, 41, 17));
        LF5->setFont(font1);
        LF5->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        RF3 = new QLabel(scanBox);
        RF3->setObjectName(QString::fromUtf8("RF3"));
        RF3->setGeometry(QRect(410, 210, 41, 17));
        RF3->setFont(font1);
        RF3->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        LF3 = new QLabel(scanBox);
        LF3->setObjectName(QString::fromUtf8("LF3"));
        LF3->setGeometry(QRect(480, 210, 41, 17));
        LF3->setFont(font1);
        LF3->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        LF6 = new QLabel(scanBox);
        LF6->setObjectName(QString::fromUtf8("LF6"));
        LF6->setGeometry(QRect(480, 300, 41, 17));
        LF6->setFont(font1);
        LF6->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        RF6 = new QLabel(scanBox);
        RF6->setObjectName(QString::fromUtf8("RF6"));
        RF6->setGeometry(QRect(410, 300, 41, 17));
        RF6->setFont(font1);
        RF6->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        batteryBar = new QProgressBar(homePage);
        batteryBar->setObjectName(QString::fromUtf8("batteryBar"));
        batteryBar->setGeometry(QRect(490, 20, 118, 23));
        batteryBar->setStyleSheet(QString::fromUtf8("QProgressBar{\n"
"    border: 1px solid black;\n"
"    background: transparent;\n"
"    border-radius: 8px;\n"
"    text-align: center;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    \n"
"}\n"
"\n"
"QProgressBar::chunk{\n"
"    background-color: green;\n"
"    border-radius: 8px;\n"
"}"));
        batteryBar->setValue(100);
        startScanButton = new QPushButton(homePage);
        startScanButton->setObjectName(QString::fromUtf8("startScanButton"));
        startScanButton->setGeometry(QRect(230, 500, 161, 71));
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
        dataPage = new QWidget();
        dataPage->setObjectName(QString::fromUtf8("dataPage"));
        dataPage->setStyleSheet(QString::fromUtf8("/* History Tab - ListWidget Styling */\n"
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
        tabWidget = new QTabWidget(dataPage);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 621, 601));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        FR1txt = new QTextBrowser(tab);
        FR1txt->setObjectName(QString::fromUtf8("FR1txt"));
        FR1txt->setGeometry(QRect(340, 30, 101, 21));
        FR1txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        FR1txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FR1txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(300, 150, 62, 17));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(300, 90, 62, 17));
        FL4txt = new QTextBrowser(tab);
        FL4txt->setObjectName(QString::fromUtf8("FL4txt"));
        FL4txt->setGeometry(QRect(450, 120, 101, 21));
        FL4txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        FL4txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FL4txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_16 = new QLabel(tab);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(480, 10, 62, 17));
        HR1txt = new QTextBrowser(tab);
        HR1txt->setObjectName(QString::fromUtf8("HR1txt"));
        HR1txt->setGeometry(QRect(50, 30, 101, 21));
        HR1txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        HR1txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HR1txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 10, 62, 17));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(300, 60, 62, 17));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 150, 62, 17));
        HL6txt = new QTextBrowser(tab);
        HL6txt->setObjectName(QString::fromUtf8("HL6txt"));
        HL6txt->setGeometry(QRect(160, 180, 101, 21));
        HL6txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        HL6txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HL6txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HR6txt = new QTextBrowser(tab);
        HR6txt->setObjectName(QString::fromUtf8("HR6txt"));
        HR6txt->setGeometry(QRect(50, 180, 101, 21));
        HR6txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        HR6txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HR6txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FR5txt = new QTextBrowser(tab);
        FR5txt->setObjectName(QString::fromUtf8("FR5txt"));
        FR5txt->setGeometry(QRect(340, 150, 101, 21));
        FR5txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        FR5txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FR5txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HR4txt = new QTextBrowser(tab);
        HR4txt->setObjectName(QString::fromUtf8("HR4txt"));
        HR4txt->setGeometry(QRect(50, 120, 101, 21));
        HR4txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        HR4txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HR4txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 30, 62, 17));
        FR4txt = new QTextBrowser(tab);
        FR4txt->setObjectName(QString::fromUtf8("FR4txt"));
        FR4txt->setGeometry(QRect(340, 120, 101, 21));
        FR4txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        FR4txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FR4txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FR2txt = new QTextBrowser(tab);
        FR2txt->setObjectName(QString::fromUtf8("FR2txt"));
        FR2txt->setGeometry(QRect(340, 60, 101, 21));
        FR2txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        FR2txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FR2txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FR3txt = new QTextBrowser(tab);
        FR3txt->setObjectName(QString::fromUtf8("FR3txt"));
        FR3txt->setGeometry(QRect(340, 90, 101, 21));
        FR3txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        FR3txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FR3txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(300, 120, 62, 17));
        HR2txt = new QTextBrowser(tab);
        HR2txt->setObjectName(QString::fromUtf8("HR2txt"));
        HR2txt->setGeometry(QRect(50, 60, 101, 21));
        HR2txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        HR2txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HR2txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 90, 62, 17));
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 260, 501, 281));
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

        HL3txt = new QTextBrowser(tab);
        HL3txt->setObjectName(QString::fromUtf8("HL3txt"));
        HL3txt->setGeometry(QRect(160, 90, 101, 21));
        HL3txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        HL3txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HL3txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 60, 62, 17));
        FL6txt = new QTextBrowser(tab);
        FL6txt->setObjectName(QString::fromUtf8("FL6txt"));
        FL6txt->setGeometry(QRect(450, 180, 101, 21));
        FL6txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        FL6txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FL6txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FL3txt = new QTextBrowser(tab);
        FL3txt->setObjectName(QString::fromUtf8("FL3txt"));
        FL3txt->setGeometry(QRect(450, 90, 101, 21));
        FL3txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        FL3txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FL3txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FL1txt = new QTextBrowser(tab);
        FL1txt->setObjectName(QString::fromUtf8("FL1txt"));
        FL1txt->setGeometry(QRect(450, 30, 101, 21));
        FL1txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        FL1txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FL1txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HL4txt = new QTextBrowser(tab);
        HL4txt->setObjectName(QString::fromUtf8("HL4txt"));
        HL4txt->setGeometry(QRect(160, 120, 101, 21));
        HL4txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        HL4txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HL4txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(300, 30, 62, 17));
        HL2txt = new QTextBrowser(tab);
        HL2txt->setObjectName(QString::fromUtf8("HL2txt"));
        HL2txt->setGeometry(QRect(160, 60, 101, 21));
        HL2txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        HL2txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HL2txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(70, 10, 62, 17));
        HR3txt = new QTextBrowser(tab);
        HR3txt->setObjectName(QString::fromUtf8("HR3txt"));
        HR3txt->setGeometry(QRect(50, 90, 101, 21));
        HR3txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        HR3txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HR3txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HL1txt = new QTextBrowser(tab);
        HL1txt->setObjectName(QString::fromUtf8("HL1txt"));
        HL1txt->setGeometry(QRect(160, 30, 101, 21));
        HL1txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        HL1txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HL1txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(300, 180, 62, 17));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 180, 62, 17));
        horizontalLayoutWidget = new QWidget(tab);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(150, 220, 321, 19));
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

        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 120, 62, 17));
        FR6txt = new QTextBrowser(tab);
        FR6txt->setObjectName(QString::fromUtf8("FR6txt"));
        FR6txt->setGeometry(QRect(340, 180, 101, 21));
        FR6txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        FR6txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FR6txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FL5txt = new QTextBrowser(tab);
        FL5txt->setObjectName(QString::fromUtf8("FL5txt"));
        FL5txt->setGeometry(QRect(450, 150, 101, 21));
        FL5txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        FL5txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FL5txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FL2txt = new QTextBrowser(tab);
        FL2txt->setObjectName(QString::fromUtf8("FL2txt"));
        FL2txt->setGeometry(QRect(450, 60, 101, 21));
        FL2txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        FL2txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FL2txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HL5txt = new QTextBrowser(tab);
        HL5txt->setObjectName(QString::fromUtf8("HL5txt"));
        HL5txt->setGeometry(QRect(160, 150, 101, 21));
        HL5txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        HL5txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HL5txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(370, 10, 62, 17));
        HR5txt = new QTextBrowser(tab);
        HR5txt->setObjectName(QString::fromUtf8("HR5txt"));
        HR5txt->setGeometry(QRect(50, 150, 101, 21));
        HR5txt->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        HR5txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HR5txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        textBrowser = new QTextBrowser(tab_3);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(50, 20, 521, 531));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));
        tabWidget->addTab(tab_3, QString());
        stackedWidget->addWidget(dataPage);
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

        chargeButton = new QPushButton(sideBar);
        chargeButton->setObjectName(QString::fromUtf8("chargeButton"));

        sidebarLayout->addWidget(chargeButton);

        signOutButton = new QPushButton(sideBar);
        signOutButton->setObjectName(QString::fromUtf8("signOutButton"));

        sidebarLayout->addWidget(signOutButton);


        retranslateUi(AppWidget);

        stackedWidget->setCurrentIndex(2);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AppWidget);
    } // setupUi

    void retranslateUi(QWidget *AppWidget)
    {
        AppWidget->setWindowTitle(QCoreApplication::translate("AppWidget", "Form", nullptr));
        scanBox->setTitle(QCoreApplication::translate("AppWidget", "Scan", nullptr));
        scanHandsButton->setText(QCoreApplication::translate("AppWidget", "Scan", nullptr));
        doneButton->setText(QCoreApplication::translate("AppWidget", "Finish", nullptr));
        scanFeetButton->setText(QCoreApplication::translate("AppWidget", "Scan", nullptr));
        lblHandScan->setText(QCoreApplication::translate("AppWidget", "Hand Scan", nullptr));
        lblFeetScan->setText(QCoreApplication::translate("AppWidget", "Feet Scan", nullptr));
        label_37->setText(QCoreApplication::translate("AppWidget", "Right", nullptr));
        label_38->setText(QCoreApplication::translate("AppWidget", "Left", nullptr));
        label_39->setText(QCoreApplication::translate("AppWidget", "Right", nullptr));
        label_40->setText(QCoreApplication::translate("AppWidget", "Left", nullptr));
        RH1->setText(QCoreApplication::translate("AppWidget", "H1", nullptr));
        RH2->setText(QCoreApplication::translate("AppWidget", "H2", nullptr));
        RH3->setText(QCoreApplication::translate("AppWidget", "H3", nullptr));
        RH4->setText(QCoreApplication::translate("AppWidget", "H4", nullptr));
        RH5->setText(QCoreApplication::translate("AppWidget", "H5", nullptr));
        RH6->setText(QCoreApplication::translate("AppWidget", "H6", nullptr));
        LH5->setText(QCoreApplication::translate("AppWidget", "H5", nullptr));
        LH2->setText(QCoreApplication::translate("AppWidget", "H2", nullptr));
        LH4->setText(QCoreApplication::translate("AppWidget", "H4", nullptr));
        LH1->setText(QCoreApplication::translate("AppWidget", "H1", nullptr));
        LH3->setText(QCoreApplication::translate("AppWidget", "H3", nullptr));
        LH6->setText(QCoreApplication::translate("AppWidget", "H6", nullptr));
        RF5->setText(QCoreApplication::translate("AppWidget", "F5", nullptr));
        RF2->setText(QCoreApplication::translate("AppWidget", "F2", nullptr));
        LF1->setText(QCoreApplication::translate("AppWidget", "F1", nullptr));
        LF2->setText(QCoreApplication::translate("AppWidget", "F2", nullptr));
        RF4->setText(QCoreApplication::translate("AppWidget", "F4", nullptr));
        LF4->setText(QCoreApplication::translate("AppWidget", "F4", nullptr));
        RF1->setText(QCoreApplication::translate("AppWidget", "F1", nullptr));
        LF5->setText(QCoreApplication::translate("AppWidget", "F5", nullptr));
        RF3->setText(QCoreApplication::translate("AppWidget", "F3", nullptr));
        LF3->setText(QCoreApplication::translate("AppWidget", "F3", nullptr));
        LF6->setText(QCoreApplication::translate("AppWidget", "F6", nullptr));
        RF6->setText(QCoreApplication::translate("AppWidget", "F6", nullptr));
        startScanButton->setText(QCoreApplication::translate("AppWidget", "Start Scan", nullptr));
        showDataButton->setText(QCoreApplication::translate("AppWidget", "Show Selected Data", nullptr));
        label_13->setText(QCoreApplication::translate("AppWidget", "F5", nullptr));
        label_9->setText(QCoreApplication::translate("AppWidget", "F3", nullptr));
        label_16->setText(QCoreApplication::translate("AppWidget", "Left", nullptr));
        label->setText(QCoreApplication::translate("AppWidget", "Left", nullptr));
        label_11->setText(QCoreApplication::translate("AppWidget", "F2", nullptr));
        label_5->setText(QCoreApplication::translate("AppWidget", "H5", nullptr));
        label_2->setText(QCoreApplication::translate("AppWidget", "H1", nullptr));
        label_7->setText(QCoreApplication::translate("AppWidget", "F4", nullptr));
        label_4->setText(QCoreApplication::translate("AppWidget", "H3", nullptr));
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
        label_3->setText(QCoreApplication::translate("AppWidget", "H2", nullptr));
        label_10->setText(QCoreApplication::translate("AppWidget", "F1", nullptr));
        label_14->setText(QCoreApplication::translate("AppWidget", "Right", nullptr));
        HL1txt->setHtml(QCoreApplication::translate("AppWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("AppWidget", "F6", nullptr));
        label_8->setText(QCoreApplication::translate("AppWidget", "H6", nullptr));
        label_29->setText(QString());
        label_30->setText(QCoreApplication::translate("AppWidget", "Normal", nullptr));
        label_31->setText(QString());
        label_32->setText(QCoreApplication::translate("AppWidget", "Below Normal", nullptr));
        label_33->setText(QString());
        label_34->setText(QCoreApplication::translate("AppWidget", "Above Normal", nullptr));
        label_6->setText(QCoreApplication::translate("AppWidget", "H4", nullptr));
        label_15->setText(QCoreApplication::translate("AppWidget", "Right", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("AppWidget", "Data", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("AppWidget", "Graph", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("AppWidget", "Recommendation", nullptr));
        measureButton->setText(QCoreApplication::translate("AppWidget", "Measure", nullptr));
        historyButton->setText(QCoreApplication::translate("AppWidget", "History", nullptr));
        newPageButton->setText(QCoreApplication::translate("AppWidget", "Data", nullptr));
        chargeButton->setText(QCoreApplication::translate("AppWidget", "Charge Battery", nullptr));
        signOutButton->setText(QCoreApplication::translate("AppWidget", "Sign Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppWidget: public Ui_AppWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPWIDGET_H
