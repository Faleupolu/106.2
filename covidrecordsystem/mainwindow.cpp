#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLineEdit>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    :QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QLineEdit* userField = ui->username;
    userField->setPlaceholderText("Insert Username Here...");

    QLineEdit* passField = ui->password;
    passField->setPlaceholderText("Insert Password Here...");
    passField->setEchoMode(QLineEdit::EchoMode::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::onLoginClicked(){
    QLineEdit* userField = ui->username;
    QLineEdit* passField = ui->password;

    QVector<QVector<QString>> fileContent = fManager.ReadFile("LoginInformation", 3);
    for(int i = 0; i < fileContent.size(); i++){
        if(userField->text() == fileContent.at(i).at(0)){
            if(passField->text() == fileContent.at(i).at(1)){
                signedIn = true;
                QMessageBox::information(this, "Login", "You have successfully logged in");
            }
            else{
                QMessageBox::warning(this, "Login", "Incorrect Password");
            }
        }
        else{
            continue;
        }

    }
    if(!signedIn){
        QMessageBox::warning(this, "Login", "No user found");
    }
}

void MainWindow::onRegisterClicked(){
    QLineEdit* userField = ui->username;
    QLineEdit* passField = ui->password;
    QVector<QString> content;

    content.append(userField->text());
    content.append(passField->text());
    content.append("1");

    if(fManager.CheckValidUser(userField->text(), "LoginInformation")){
        fManager.WriteFile("LoginInformation", content);

        QMessageBox box(this);
        box.setIcon(QMessageBox::Information);
        box.setText("You have successfully signed up");
        box.setWindowTitle("SignUp");
        box.setStandardButtons(QMessageBox::Ok);
        int returnVal = box.exec();

        switch(returnVal){
        case QMessageBox::Ok:
            OpenWindow();
            break;
        case QMessageBox::Save:
            break;
        case QMessageBox::Discard:
            break;

        }
    }
    else{
        QMessageBox::warning(this, "Sign up", "User with this name already exists");
    }
}

void MainWindow::OpenWindow(){
    qDebug("Function Has Been Called");
}
