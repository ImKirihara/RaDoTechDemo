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
    QPushButton *startScanButton;
    QGroupBox *scanBox;
    QPushButton *scanHandsButton;
    QPushButton *doneButton;
    QPushButton *scanFeetButton;
    QLabel *label_35;
    QLabel *label_36;
    QWidget *historyPage;
    QListWidget *historyList;
    QPushButton *showDataButton;
    QWidget *dataPage;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextBrowser *f1Text;
    QLabel *label_13;
    QLabel *label_9;
    QTextBrowser *f4Text_2;
    QLabel *label_16;
    QTextBrowser *h1Text;
    QLabel *label;
    QLabel *label_11;
    QLabel *label_5;
    QTextBrowser *h6Text_2;
    QTextBrowser *h6Text;
    QTextBrowser *f5Text;
    QTextBrowser *h4Text;
    QLabel *label_2;
    QTextBrowser *f4Text;
    QTextBrowser *f2Text;
    QTextBrowser *f3Text;
    QLabel *label_7;
    QTextBrowser *h2Text;
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
    QTextBrowser *h3Text_2;
    QLabel *label_3;
    QTextBrowser *f6Text_2;
    QTextBrowser *f3Text_2;
    QTextBrowser *f1Text_2;
    QTextBrowser *h4Text_2;
    QLabel *label_10;
    QTextBrowser *h2Text_2;
    QLabel *label_14;
    QTextBrowser *h3Text;
    QTextBrowser *h1Text_2;
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
    QTextBrowser *f6Text;
    QTextBrowser *f5Text_2;
    QTextBrowser *f2Text_2;
    QTextBrowser *h5Text_2;
    QLabel *label_15;
    QTextBrowser *h5Text;
    QWidget *tab_2;
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
        scanHandsButton = new QPushButton(scanBox);
        scanHandsButton->setObjectName(QString::fromUtf8("scanHandsButton"));
        scanHandsButton->setGeometry(QRect(30, 70, 151, 41));
        doneButton = new QPushButton(scanBox);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(440, 70, 111, 41));
        scanFeetButton = new QPushButton(scanBox);
        scanFeetButton->setObjectName(QString::fromUtf8("scanFeetButton"));
        scanFeetButton->setGeometry(QRect(210, 70, 151, 41));
        label_35 = new QLabel(scanBox);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(30, 40, 151, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(20);
        label_35->setFont(font);
        label_36 = new QLabel(scanBox);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(210, 40, 151, 31));
        label_36->setFont(font);
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
        tabWidget->setStyleSheet(QString::fromUtf8("color:white;\n"
""));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        f1Text = new QTextBrowser(tab);
        f1Text->setObjectName(QString::fromUtf8("f1Text"));
        f1Text->setGeometry(QRect(340, 30, 101, 21));
        f1Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f1Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f1Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(300, 150, 62, 17));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(300, 90, 62, 17));
        f4Text_2 = new QTextBrowser(tab);
        f4Text_2->setObjectName(QString::fromUtf8("f4Text_2"));
        f4Text_2->setGeometry(QRect(450, 120, 101, 21));
        f4Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f4Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f4Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_16 = new QLabel(tab);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(370, 10, 62, 17));
        h1Text = new QTextBrowser(tab);
        h1Text->setObjectName(QString::fromUtf8("h1Text"));
        h1Text->setGeometry(QRect(50, 30, 101, 21));
        h1Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h1Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h1Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 10, 62, 17));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(300, 60, 62, 17));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 150, 62, 17));
        h6Text_2 = new QTextBrowser(tab);
        h6Text_2->setObjectName(QString::fromUtf8("h6Text_2"));
        h6Text_2->setGeometry(QRect(160, 180, 101, 21));
        h6Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h6Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h6Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h6Text = new QTextBrowser(tab);
        h6Text->setObjectName(QString::fromUtf8("h6Text"));
        h6Text->setGeometry(QRect(50, 180, 101, 21));
        h6Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h6Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h6Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f5Text = new QTextBrowser(tab);
        f5Text->setObjectName(QString::fromUtf8("f5Text"));
        f5Text->setGeometry(QRect(340, 150, 101, 21));
        f5Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f5Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f5Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h4Text = new QTextBrowser(tab);
        h4Text->setObjectName(QString::fromUtf8("h4Text"));
        h4Text->setGeometry(QRect(50, 120, 101, 21));
        h4Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h4Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h4Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 30, 62, 17));
        f4Text = new QTextBrowser(tab);
        f4Text->setObjectName(QString::fromUtf8("f4Text"));
        f4Text->setGeometry(QRect(340, 120, 101, 21));
        f4Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f4Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f4Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f2Text = new QTextBrowser(tab);
        f2Text->setObjectName(QString::fromUtf8("f2Text"));
        f2Text->setGeometry(QRect(340, 60, 101, 21));
        f2Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f2Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f2Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f3Text = new QTextBrowser(tab);
        f3Text->setObjectName(QString::fromUtf8("f3Text"));
        f3Text->setGeometry(QRect(340, 90, 101, 21));
        f3Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f3Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f3Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(300, 120, 62, 17));
        h2Text = new QTextBrowser(tab);
        h2Text->setObjectName(QString::fromUtf8("h2Text"));
        h2Text->setGeometry(QRect(50, 60, 101, 21));
        h2Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h2Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h2Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
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

        h3Text_2 = new QTextBrowser(tab);
        h3Text_2->setObjectName(QString::fromUtf8("h3Text_2"));
        h3Text_2->setGeometry(QRect(160, 90, 101, 21));
        h3Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h3Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h3Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 60, 62, 17));
        f6Text_2 = new QTextBrowser(tab);
        f6Text_2->setObjectName(QString::fromUtf8("f6Text_2"));
        f6Text_2->setGeometry(QRect(450, 180, 101, 21));
        f6Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f6Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f6Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f3Text_2 = new QTextBrowser(tab);
        f3Text_2->setObjectName(QString::fromUtf8("f3Text_2"));
        f3Text_2->setGeometry(QRect(450, 90, 101, 21));
        f3Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f3Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f3Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f1Text_2 = new QTextBrowser(tab);
        f1Text_2->setObjectName(QString::fromUtf8("f1Text_2"));
        f1Text_2->setGeometry(QRect(450, 30, 101, 21));
        f1Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f1Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f1Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h4Text_2 = new QTextBrowser(tab);
        h4Text_2->setObjectName(QString::fromUtf8("h4Text_2"));
        h4Text_2->setGeometry(QRect(160, 120, 101, 21));
        h4Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h4Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h4Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(300, 30, 62, 17));
        h2Text_2 = new QTextBrowser(tab);
        h2Text_2->setObjectName(QString::fromUtf8("h2Text_2"));
        h2Text_2->setGeometry(QRect(160, 60, 101, 21));
        h2Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h2Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h2Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(180, 10, 62, 17));
        h3Text = new QTextBrowser(tab);
        h3Text->setObjectName(QString::fromUtf8("h3Text"));
        h3Text->setGeometry(QRect(50, 90, 101, 21));
        h3Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h3Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h3Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h1Text_2 = new QTextBrowser(tab);
        h1Text_2->setObjectName(QString::fromUtf8("h1Text_2"));
        h1Text_2->setGeometry(QRect(160, 30, 101, 21));
        h1Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h1Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h1Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
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
        f6Text = new QTextBrowser(tab);
        f6Text->setObjectName(QString::fromUtf8("f6Text"));
        f6Text->setGeometry(QRect(340, 180, 101, 21));
        f6Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f6Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f6Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f5Text_2 = new QTextBrowser(tab);
        f5Text_2->setObjectName(QString::fromUtf8("f5Text_2"));
        f5Text_2->setGeometry(QRect(450, 150, 101, 21));
        f5Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f5Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f5Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f2Text_2 = new QTextBrowser(tab);
        f2Text_2->setObjectName(QString::fromUtf8("f2Text_2"));
        f2Text_2->setGeometry(QRect(450, 60, 101, 21));
        f2Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        f2Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        f2Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h5Text_2 = new QTextBrowser(tab);
        h5Text_2->setObjectName(QString::fromUtf8("h5Text_2"));
        h5Text_2->setGeometry(QRect(160, 150, 101, 21));
        h5Text_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h5Text_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h5Text_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(470, 10, 62, 17));
        h5Text = new QTextBrowser(tab);
        h5Text->setObjectName(QString::fromUtf8("h5Text"));
        h5Text->setGeometry(QRect(50, 150, 101, 21));
        h5Text->setStyleSheet(QString::fromUtf8("background-color:white;"));
        h5Text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        h5Text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
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

        signOutButton = new QPushButton(sideBar);
        signOutButton->setObjectName(QString::fromUtf8("signOutButton"));

        sidebarLayout->addWidget(signOutButton);


        retranslateUi(AppWidget);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AppWidget);
    } // setupUi

    void retranslateUi(QWidget *AppWidget)
    {
        AppWidget->setWindowTitle(QCoreApplication::translate("AppWidget", "Form", nullptr));
        startScanButton->setText(QCoreApplication::translate("AppWidget", "Start Scan", nullptr));
        scanBox->setTitle(QCoreApplication::translate("AppWidget", "Scan", nullptr));
        scanHandsButton->setText(QCoreApplication::translate("AppWidget", "Scan", nullptr));
        doneButton->setText(QCoreApplication::translate("AppWidget", "Finish", nullptr));
        scanFeetButton->setText(QCoreApplication::translate("AppWidget", "Scan", nullptr));
        label_35->setText(QCoreApplication::translate("AppWidget", "Hand Scan", nullptr));
        label_36->setText(QCoreApplication::translate("AppWidget", "Feet Scan", nullptr));
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
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("AppWidget", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("AppWidget", "Tab 2", nullptr));
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
