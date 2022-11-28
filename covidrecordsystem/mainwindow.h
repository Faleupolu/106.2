
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "filemanager.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT;    QString username;
    QString password;



Ui::MainWindow *ui;
private slots:

    void onLoginClicked();
    void onRegisterClicked();

private:

    FileManager fManager;
    bool signedIn = false;
    void OpenWindow();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};
#endif // MAINWINDOW_H
