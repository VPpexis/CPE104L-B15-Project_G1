/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loginDialog
{
public:
    QLineEdit *lineEdit_userName;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton_login;
    QPushButton *pushButton_exit;
    QPushButton *pushButton_signUp;

    void setupUi(QDialog *loginDialog)
    {
        if (loginDialog->objectName().isEmpty())
            loginDialog->setObjectName(QString::fromUtf8("loginDialog"));
        loginDialog->resize(400, 300);
        lineEdit_userName = new QLineEdit(loginDialog);
        lineEdit_userName->setObjectName(QString::fromUtf8("lineEdit_userName"));
        lineEdit_userName->setGeometry(QRect(120, 60, 113, 20));
        lineEdit_Password = new QLineEdit(loginDialog);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(120, 110, 113, 20));
        pushButton_login = new QPushButton(loginDialog);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setGeometry(QRect(150, 230, 80, 16));
        pushButton_exit = new QPushButton(loginDialog);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(270, 230, 80, 16));
        pushButton_signUp = new QPushButton(loginDialog);
        pushButton_signUp->setObjectName(QString::fromUtf8("pushButton_signUp"));
        pushButton_signUp->setGeometry(QRect(30, 230, 80, 16));

        retranslateUi(loginDialog);

        QMetaObject::connectSlotsByName(loginDialog);
    } // setupUi

    void retranslateUi(QDialog *loginDialog)
    {
        loginDialog->setWindowTitle(QCoreApplication::translate("loginDialog", "Dialog", nullptr));
        pushButton_login->setText(QCoreApplication::translate("loginDialog", "Login", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("loginDialog", "Close", nullptr));
        pushButton_signUp->setText(QCoreApplication::translate("loginDialog", "Signup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginDialog: public Ui_loginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
