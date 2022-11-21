#include "userlogin.h"
#include "ui_userlogin.h"

#include <QPixmap>
#include "usersignup.h"

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

