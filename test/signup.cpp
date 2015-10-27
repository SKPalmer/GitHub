#include "signup.h"
#include "ui_signup.h"
#include "mainwindow.h"

signup::signup(MainWindow *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    m_pMainWindow = parent;
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}

void signup::on_buttonBox_accepted()
{
    m_pMainWindow->show();
}

void signup::on_buttonBox_rejected()
{
    //m_ppage1->show();
}
