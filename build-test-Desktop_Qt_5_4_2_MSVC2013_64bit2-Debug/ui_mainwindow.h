/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextEdit *username;
    QTextEdit *password_2;
    QPushButton *OK;
    QPushButton *reset;
    QLabel *username_2;
    QLabel *password;
    QPushButton *signup;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(755, 364);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        username = new QTextEdit(centralWidget);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(280, 80, 281, 31));
        password_2 = new QTextEdit(centralWidget);
        password_2->setObjectName(QStringLiteral("password_2"));
        password_2->setGeometry(QRect(280, 140, 281, 31));
        OK = new QPushButton(centralWidget);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setGeometry(QRect(390, 220, 75, 23));
        reset = new QPushButton(centralWidget);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setGeometry(QRect(480, 220, 75, 23));
        username_2 = new QLabel(centralWidget);
        username_2->setObjectName(QStringLiteral("username_2"));
        username_2->setGeometry(QRect(170, 90, 71, 21));
        password = new QLabel(centralWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(170, 140, 61, 21));
        signup = new QPushButton(centralWidget);
        signup->setObjectName(QStringLiteral("signup"));
        signup->setGeometry(QRect(290, 220, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 755, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        OK->setText(QApplication::translate("MainWindow", "OK", 0));
        reset->setText(QApplication::translate("MainWindow", "RESET ", 0));
        username_2->setText(QApplication::translate("MainWindow", "user name:", 0));
        password->setText(QApplication::translate("MainWindow", "password :", 0));
        signup->setText(QApplication::translate("MainWindow", "Sign Up", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
