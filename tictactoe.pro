QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tictactoe
TEMPLATE = app


SOURCES += main.cpp\
        logindialog.cpp \
        mainwindow.cpp \
        playerList.cpp \
        scoreboarddialog.cpp \
        signupdialog.cpp

HEADERS  += mainwindow.h \
    logindialog.h \
    playerList.h \
    playerNode.h \
    scoreboarddialog.h \
    signupdialog.h

FORMS    += mainwindow.ui \
    logindialog.ui \
    scoreboarddialog.ui \
    signupdialog.ui
