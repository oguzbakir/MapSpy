//
// Created by oguz on 08.08.2018.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

#include <QProcess>
#include <QString>
#include <QStringList>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:


private:

    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H