#include "logindialog.h"
#include "ui_logindialog.h"
#include "playerList.h"
#include "playerNode.h"
#include "mainwindow.h"
#include "signupdialog.h"

loginDialog::loginDialog(playerList *list, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog)
{
    playerlist = list;
    ui->setupUi(this);

}

loginDialog::~loginDialog()
{
    delete ui;
}

void loginDialog::on_pushButton_login_clicked()
{
   //playerlist->check(n);
   MainWindow *mw = new MainWindow();
   mw->show();
   close();

}

void loginDialog::on_pushButton_exit_clicked()
{
    close();
}

void loginDialog::on_pushButton_signUp_clicked()
{
    signupdialog sud;
    sud.setModal(true);
    sud.exec();
}
