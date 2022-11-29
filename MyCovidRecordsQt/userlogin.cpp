#include "userlogin.h"
#include "dashboard.h"
#include <QPixmap>
#include "usersignup.h"
#include <QMessageBox>
#include "ui_userlogin.h"

UserLogin::UserLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserLogin)
{
    ui->setupUi(this);

}

UserLogin::~UserLogin()
{
    delete ui;
}

void UserLogin::on_pushButton_SignUp_clicked()
{
    this->hide();
    UserSignup us;
    us.setModal(true);
    us.exec();
}


void UserLogin::on_pushButton_clicked()
{         //MODAL PROCESS
     QMessageBox::information(this, tr("login "), tr("successfully login"));
    this->hide();
    Dashboard dashBoard;
   dashBoard.setModal(true);
    dashBoard.exec();



}

