#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushB_dot_clicked();
    void digits_numbers();
    void calc();

    void on_pushB_AC_clicked();

    void on_pushB_equals_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
