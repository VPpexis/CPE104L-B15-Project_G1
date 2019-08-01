#include "mainwindow.h"
#include "logindialog.h"
#include "playerList.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    loginDialog l;
    l.exec();

    return a.exec();
}
