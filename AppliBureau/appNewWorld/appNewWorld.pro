#-------------------------------------------------
#
# Project created by QtCreator 2017-03-10T13:12:56
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = appNewWorld
TEMPLATE = app


SOURCES += main.cpp\
    dialogconnection.cpp \
    mainwindowgestionnaire.cpp \
    mainwindowcontroleur.cpp \
    user.cpp

HEADERS  += \
    dialogconnection.h \
    mainwindowgestionnaire.h \
    mainwindowcontroleur.h \
    user.h

FORMS    += \
    dialogconnection.ui \
    mainwindowgestionnaire.ui \
    mainwindowcontroleur.ui
