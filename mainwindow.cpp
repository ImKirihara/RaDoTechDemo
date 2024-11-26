#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->StackedWidget->setCurrentWidget(ui->Menu);

    // Profile Creation Buttons - Mel
    connect(ui->createProfileButton, &QPushButton::clicked, this, [this](){
        changePage(ui->CreateProfile);
    });
    connect(ui->saveButton, SIGNAL(clicked()), this, SLOT(createUser()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Profile Creation Functions - Mel
void MainWindow::changePage(QWidget *page){
    ui->StackedWidget->setCurrentWidget(page);
}

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

        validInput = true;
    }

    User* u = new User(f, l, g, c, e, p, pass, b, w, h);
    profiles.append(u);

    ui->StackedWidget->setCurrentWidget(ui->App);
    ui->welcomeLbl->setText("Welcome " + u->getName());

    return true;
}

