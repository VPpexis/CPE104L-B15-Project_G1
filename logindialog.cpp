#include "logindialog.h"
#include "ui_logindialog.h"
#include "playerList.h"
#include "playerNode.h"

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
    QString username = ui->lineEdit_userName->text();
    QString password = ui->lineEdit_Password->text();

    playerNode n;

    n.setUserName(username.toStdString());
    n.setPassword(password.toStdString());

   playerlist->check(n);
}
