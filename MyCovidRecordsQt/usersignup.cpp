#include "usersignup.h"
//#include "ui_usersignup.h"

#include <QPixmap>
#include "userlogin.h"

#include <QMessageBox>

UserSignup::UserSignup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserSignup)
{
    ui->setupUi(this);

}

UserSignup::~UserSignup()
{
    delete ui;
}

void UserSignup::on_pushButton_Login_clicked()
{
    this->hide();
    UserLogin ul;
    ul.setModal(true);
    ul.exec();
}


void UserSignup::on_pushButton_2_clicked()
{
    QMessageBox::information(this, tr("register "), tr("successfully register"));
}

