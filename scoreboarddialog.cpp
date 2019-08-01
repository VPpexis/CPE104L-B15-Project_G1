#include "scoreboarddialog.h"
#include "ui_scoreboarddialog.h"

scoreboardDialog::scoreboardDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::scoreboardDialog)
{
    ui->setupUi(this);
}

scoreboardDialog::~scoreboardDialog()
{
    delete ui;
}

void scoreboardDialog::on_pushButton_clicked()
{
    close();
}
