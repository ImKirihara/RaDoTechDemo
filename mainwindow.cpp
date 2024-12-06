﻿#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "appwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Create the AppWidget instance (the new home screen) - Nathan
    appWidget = new AppWidget(this);
    ui->StackedWidget->addWidget(appWidget);

    // Tester Login Profile - Mel
    profiles.append(new User("Login", "Tester", "Female", "Canada", "t", "16131234567", "t", QDate::currentDate(), 70, 150));

    // Main Menu Screen - Mel
    ui->StackedWidget->setCurrentWidget(ui->Menu);

    // Profile Creation Buttons - Mel
    connect(ui->createProfileButton, &QPushButton::clicked, this, [this](){
        changePage(ui->CreateProfile);
    });
    connect(ui->saveButton, SIGNAL(clicked()), this, SLOT(createUser()));

    // Profile Login Buttons - Mel
    connect(ui->loginButton, &QPushButton::clicked, this, [this](){
        changePage(ui->loginProfile);
    });
    connect(ui->enterButton, SIGNAL(clicked()), this, SLOT(loginUser()));

    connect(appWidget, &AppWidget::signOutRequest, this, &MainWindow::signOut);


}

MainWindow::~MainWindow()
{
    delete ui;
}

// Page Change Function - Mel
void MainWindow::changePage(QWidget *page){
    ui->StackedWidget->setCurrentWidget(page);
}

// Page To Detect Profile Creation Radio Button Selection - Mel
QString MainWindow::getGender(){
    QString g;
    if(ui->femaleButton->isChecked()){
        g = "Female";
    }else if(ui->maleButton->isChecked()){
        g = "Male";
    }else if(ui->otherButton->isChecked()){
        g = "Other";
    }
    return g;
}

// Profile Creation Function - Mel
bool MainWindow::createUser(){
    QString f, l, g, c, e, p, pass, cp;
    QDate b;
    int w, h;
    bool validInput = false;

    while(!validInput){
        f = ui->firstNameText->text();
        l = ui->lastNameText->text();
        g = getGender();
        c = ui->countryText->text();
        e = ui->emailText->text();
        p = ui->phoneText->text();
        pass = ui->passwordText->text();
        cp = ui->confirmPasswordText->text();
        b = ui->birthdayEdit->date();
        w = ui->weightBox->value();
        h = ui->heightBox->value();

        if(f.isEmpty() || l.isEmpty() || g.isEmpty() || c.isEmpty() || e.isEmpty() || p.isEmpty() || b > QDate::currentDate() || b.isNull() || w <= 0 || h <= 0){
            QMessageBox::warning(this, "Invalid Input", "Please fill all boxes.");
            return false;
        }

        if(pass != cp){
            QMessageBox::warning(this, "Invalid Password", "Passwords do not match.");
            return false;
        }

        for(int i = 0; i < profiles.size(); i++){
            if(e == profiles[i]->getEmail()){
                QMessageBox::warning(this, "Invalid Email", "Email address already used.");
                return false;
            }
        }

        validInput = true;
    }

    User* u = new User(f, l, g, c, e, p, pass, b, w, h);
    profiles.append(u);
    appWidget->setActiveUser(u);

    changePage(appWidget);

    return true;
}

// Profile Login Function - Mel
bool MainWindow::loginUser(){
    QString enteredEmail = ui->emailLoginText->text();
    QString enteredPassword = ui->passwordLoginText->text();

    for(int i = 0; i < profiles.size(); i++){
        if(enteredEmail == profiles[i]->getEmail()){
            if(enteredPassword == profiles[i]->getPassword()){
                changePage(appWidget);
                appWidget->setActiveUser(profiles[i]);
                return true;
            }else{
                QMessageBox::warning(this, "Invalid Password", "Incorrect Password");
                return false;
            }
        }
    }
    QMessageBox::warning(this, "Invalid Email", "Incorrect Email or Password");
    return false;
}

void MainWindow::signOut(){
    appWidget->setActiveUser(nullptr);
    changePage(ui->Menu);
}

