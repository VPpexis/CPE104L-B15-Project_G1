#ifndef SCOREBOARDDIALOG_H
#define SCOREBOARDDIALOG_H

#include <QDialog>

namespace Ui {
class scoreboardDialog;
}

class scoreboardDialog : public QDialog
{
    Q_OBJECT

public:
    explicit scoreboardDialog(QWidget *parent = nullptr);
    ~scoreboardDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::scoreboardDialog *ui;
};

#endif // SCOREBOARDDIALOG_H
