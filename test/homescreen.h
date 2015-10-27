#ifndef HOMESCREEN_H
#define HOMESCREEN_H

#include <QMainWindow>

namespace Ui {
class homescreen;
}

class MainWindow;

class homescreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit homescreen(MainWindow *parent);
    ~homescreen();

private slots:
    void on_pushButton_clicked();

private:
    Ui::homescreen *ui;
    MainWindow *m_pMainWindow;
};

#endif // HOMESCREEN_H
