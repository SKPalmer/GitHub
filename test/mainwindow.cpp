#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signup.h"
#include "QDebug"
#include "homescreen.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_psignnup = new signup(this);
    m_phomescreen = new homescreen(this);
}

MainWindow::~MainWindow()
{
    delete m_phomescreen;
    delete m_psignnup;
    delete ui;
}


void MainWindow::on_signup_clicked()
{
     hide();
     m_psignnup->show();
}

void MainWindow::on_OK_clicked()
{
    hide();
    m_phomescreen->show();
}
