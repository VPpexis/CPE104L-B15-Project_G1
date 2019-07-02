#include "include/mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <include/signupwindow.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username -> text();
     QString password = ui->lineEdit_password -> text();

     if (username == "test" && password == "test"){
         QMessageBox::information(this, "Login", "Username and Password is Correct");
     }
     else {
        QMessageBox::warning(this,"Login","Username and Password is not Correct" );
     }
}

void MainWindow::on_pushButton_clicked()
{
    hide();
    signupwindow signupwindow;
    signupwindow.setModal(true);
    signupwindow.exec();

}
