#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class signup;
class homescreen;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_signup_clicked();

    void on_OK_clicked();

private:
    Ui::MainWindow *ui;
    signup *m_psignnup;
    homescreen *m_phomescreen;
};

#endif // MAINWINDOW_H
