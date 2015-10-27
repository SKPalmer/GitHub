#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>

namespace Ui {
class signup;
}

class MainWindow;
class page1;

class signup : public QDialog
{
    Q_OBJECT

public:
    explicit signup(MainWindow *parent);
    ~signup();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::signup *ui;
    MainWindow *m_pMainWindow;
    page1 *m_ppage1;
};

#endif // SIGNUP_H
