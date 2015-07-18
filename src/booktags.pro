#-------------------------------------------------
#
# Project created by QtCreator 2015-07-03T11:23:12
#
#-------------------------------------------------

QT       += core gui xmlpatterns sql xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = booktags
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    settingsdialog.cpp \
    programconfigfile.cpp \
    currentdirectorydialog.cpp \
    tagsbookswidget.cpp \
    initialloadthread.cpp \
    tagslistmodel.cpp \
    databaseconnection.cpp \
    bookstreemodel.cpp \
    directorydatabase.cpp \
    directorydatabaseinitializer.cpp

HEADERS  += mainwindow.h \
    settingsdialog.h \
    programconfigfile.h \
    currentdirectorydialog.h \
    utils.h \
    tagsbookswidget.h \
    initialloadthread.h \
    tagslistmodel.h \
    databaseconnection.h \
    bookstreemodel.h \
    directorydatabase.h \
    directorydatabaseinitializer.h

FORMS    += mainwindow.ui \
    settingsdialog.ui \
    currentdirectorydialog.ui \
    tagsbookswidget.ui

DISTFILES +=

RESOURCES += \
    resources.qrc
