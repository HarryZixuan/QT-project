#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>
#include "maincontrol.h"
class MainControl;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(MainControl& control, QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_stuffButton_clicked();
    void on_clinetButton_clicked();

private:
    MainControl& _control;
    std::unique_ptr<Ui::MainWindow> _ui;
};

#endif // MAINWINDOW_H
