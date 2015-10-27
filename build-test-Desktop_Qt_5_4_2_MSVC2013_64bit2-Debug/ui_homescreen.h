/********************************************************************************
** Form generated from reading UI file 'homescreen.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMESCREEN_H
#define UI_HOMESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_homescreen
{
public:
    QWidget *centralwidget;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *homescreen)
    {
        if (homescreen->objectName().isEmpty())
            homescreen->setObjectName(QStringLiteral("homescreen"));
        homescreen->resize(800, 600);
        centralwidget = new QWidget(homescreen);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        homescreen->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(homescreen);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        homescreen->setStatusBar(statusbar);
        menubar = new QMenuBar(homescreen);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        homescreen->setMenuBar(menubar);

        retranslateUi(homescreen);

        QMetaObject::connectSlotsByName(homescreen);
    } // setupUi

    void retranslateUi(QMainWindow *homescreen)
    {
        homescreen->setWindowTitle(QApplication::translate("homescreen", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class homescreen: public Ui_homescreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMESCREEN_H
