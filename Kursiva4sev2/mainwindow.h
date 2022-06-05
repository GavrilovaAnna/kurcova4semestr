#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QSqlTableModel>

#include "login.h"
#include "ui_login.h"

#include "addinform.h"
#include "ui_addinform.h"

#include "deletee.h"
#include "ui_deletee.h"

#include "punkt2.h"
#include "ui_punkt2.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    login*logwin;
    addinform*dopinf;
    deletee*deld;
    punkt2*punkt;

private slots:
    void on_action_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_action_2_triggered();

    void on_action_5_triggered();

    void on_action_6_triggered();

private:
    Ui::MainWindow *ui;
    QSqlTableModel*model;
};
#endif // MAINWINDOW_H
