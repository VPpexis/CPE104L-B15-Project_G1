#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "playerList.h"

namespace Ui {
class loginDialog;
}

class loginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit loginDialog(playerList *list = 0, QWidget *parent = nullptr);
    ~loginDialog();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::loginDialog *ui;
    playerList *playerlist;
};

#endif // LOGINDIALOG_H
