/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLog_In;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLabel *lastNameLabel;
    QLineEdit *lastNameLineEdit;
    QLabel *dateLabel;
    QDateEdit *dateDateEdit;
    QLabel *accountTypeLabel;
    QComboBox *accountTypeComboBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *emailLineEdit;
    QLabel *emailLabel;
    QLabel *accountTypeLabel_2;
    QCheckBox *checkBox_2;
    QCheckBox *accountTypeCheckBox;
    QPushButton *loginBtn;
    QPushButton *exitBtn;
    QMenuBar *menubar;
    QMenu *menuhello;
    QMenu *menuLog_In;
    QMenu *menuAdmin;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionLog_In = new QAction(MainWindow);
        actionLog_In->setObjectName("actionLog_In");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(420, 40, 371, 309));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 60, 369, 431));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(formLayoutWidget);
        nameLabel->setObjectName("nameLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameLineEdit = new QLineEdit(formLayoutWidget);
        nameLineEdit->setObjectName("nameLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLineEdit);

        lastNameLabel = new QLabel(formLayoutWidget);
        lastNameLabel->setObjectName("lastNameLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, lastNameLabel);

        lastNameLineEdit = new QLineEdit(formLayoutWidget);
        lastNameLineEdit->setObjectName("lastNameLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, lastNameLineEdit);

        dateLabel = new QLabel(formLayoutWidget);
        dateLabel->setObjectName("dateLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, dateLabel);

        dateDateEdit = new QDateEdit(formLayoutWidget);
        dateDateEdit->setObjectName("dateDateEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, dateDateEdit);

        accountTypeLabel = new QLabel(formLayoutWidget);
        accountTypeLabel->setObjectName("accountTypeLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, accountTypeLabel);

        accountTypeComboBox = new QComboBox(formLayoutWidget);
        accountTypeComboBox->addItem(QString());
        accountTypeComboBox->addItem(QString());
        accountTypeComboBox->addItem(QString());
        accountTypeComboBox->addItem(QString());
        accountTypeComboBox->setObjectName("accountTypeComboBox");

        formLayout->setWidget(3, QFormLayout::FieldRole, accountTypeComboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");

        formLayout->setLayout(9, QFormLayout::LabelRole, horizontalLayout);

        emailLineEdit = new QLineEdit(formLayoutWidget);
        emailLineEdit->setObjectName("emailLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, emailLineEdit);

        emailLabel = new QLabel(formLayoutWidget);
        emailLabel->setObjectName("emailLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, emailLabel);

        accountTypeLabel_2 = new QLabel(formLayoutWidget);
        accountTypeLabel_2->setObjectName("accountTypeLabel_2");

        formLayout->setWidget(5, QFormLayout::LabelRole, accountTypeLabel_2);

        checkBox_2 = new QCheckBox(formLayoutWidget);
        checkBox_2->setObjectName("checkBox_2");

        formLayout->setWidget(5, QFormLayout::FieldRole, checkBox_2);

        accountTypeCheckBox = new QCheckBox(formLayoutWidget);
        accountTypeCheckBox->setObjectName("accountTypeCheckBox");

        formLayout->setWidget(6, QFormLayout::FieldRole, accountTypeCheckBox);

        loginBtn = new QPushButton(formLayoutWidget);
        loginBtn->setObjectName("loginBtn");

        formLayout->setWidget(7, QFormLayout::FieldRole, loginBtn);

        exitBtn = new QPushButton(formLayoutWidget);
        exitBtn->setObjectName("exitBtn");

        formLayout->setWidget(7, QFormLayout::LabelRole, exitBtn);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuhello = new QMenu(menubar);
        menuhello->setObjectName("menuhello");
        menuLog_In = new QMenu(menubar);
        menuLog_In->setObjectName("menuLog_In");
        menuAdmin = new QMenu(menubar);
        menuAdmin->setObjectName("menuAdmin");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuhello->menuAction());
        menubar->addAction(menuLog_In->menuAction());
        menubar->addAction(menuAdmin->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(exitBtn, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLog_In->setText(QCoreApplication::translate("MainWindow", "Log In", nullptr));
#if QT_CONFIG(tooltip)
        actionLog_In->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Please Enter Your Log in Details</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        nameLabel->setText(QCoreApplication::translate("MainWindow", "First Name(s)", nullptr));
        lastNameLabel->setText(QCoreApplication::translate("MainWindow", "Last Name", nullptr));
        dateLabel->setText(QCoreApplication::translate("MainWindow", "Date of Birth", nullptr));
        accountTypeLabel->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        accountTypeComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        accountTypeComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));
        accountTypeComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Diverse", nullptr));
        accountTypeComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Prefer not to say", nullptr));

        emailLabel->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        accountTypeLabel_2->setText(QCoreApplication::translate("MainWindow", "Account Type", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Administrator", nullptr));
        accountTypeCheckBox->setText(QCoreApplication::translate("MainWindow", "User", nullptr));
        loginBtn->setText(QCoreApplication::translate("MainWindow", "Create Account", nullptr));
        exitBtn->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        menuhello->setTitle(QCoreApplication::translate("MainWindow", "My Covid Record Log In", nullptr));
        menuLog_In->setTitle(QCoreApplication::translate("MainWindow", "Log In", nullptr));
        menuAdmin->setTitle(QCoreApplication::translate("MainWindow", "Admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
