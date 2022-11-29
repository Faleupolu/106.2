#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "userlogin.h"
#include "usersignup.h"
#include "adminlogin.h"
#include "dashboard.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Login_clicked();

    void on_pushButton_SignUp_clicked();

    void on_pushButtonadminlogin_clicked();

    void on_pushButtonadminregister_clicked();



private:
    Ui::MainWindow *ui;
    UserLogin *ul;
    UserSignup *us;
    AdminLogin *al;
     Dashboard *db;

};
#endif // MAINWINDOW_H
