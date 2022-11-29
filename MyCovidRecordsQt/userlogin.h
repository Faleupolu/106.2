#ifndef USERLOGIN_H
#define USERLOGIN_H

#include <QDialog>

namespace Ui {
class UserLogin;
}

class UserLogin : public QDialog
{
    Q_OBJECT

public:
    explicit UserLogin(QWidget *parent = nullptr);
    ~UserLogin();

private slots:
    void on_pushButton_SignUp_clicked();

    void on_pushButton_clicked();

private:
    Ui::UserLogin *ui;
};

#endif // USERLOGIN_H
