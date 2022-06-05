#include "mainwindow.h"
#include "ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_triggered()
{
    logwin = new login();
    logwin->show();
}


void MainWindow::on_pushButton_clicked()
{

    model = new QSqlTableModel();
    model->setTable("Debtor");
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    model->select();

    model->setHeaderData(1, Qt::Horizontal, "ФИО");

    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();
    ui->tableView->hideColumn(0);

}


void MainWindow::on_pushButton_2_clicked()
{
    model = new QSqlTableModel();
    model->setTable("Ur");
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    model->select();

    model->setHeaderData(1, Qt::Horizontal, "Номер Юр.лицо");
    model->setHeaderData(2, Qt::Horizontal, "Номер персонального аккаунта");

    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();
    ui->tableView->hideColumn(3);
    ui->tableView->hideColumn(4);
}


void MainWindow::on_pushButton_3_clicked()
{
    model = new QSqlTableModel();
    model->setTable("Fizik");
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    model->select();

    model->setHeaderData(1, Qt::Horizontal, "Номер Физ.лицо");
    model->setHeaderData(2, Qt::Horizontal, "Номер персонального аккаунта");

    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();

}


void MainWindow::on_pushButton_4_clicked()
{
    model = new QSqlTableModel();
    model->setTable("Prise");
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    model->select();

    model->setHeaderData(1, Qt::Horizontal, "Номер Юр.лицо");
    model->setHeaderData(2, Qt::Horizontal, "Номер Физ.лицо");
    model->setHeaderData(5, Qt::Horizontal, "Цена услуг");

    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();
}


void MainWindow::on_action_2_triggered()
{
    dopinf = new addinform();
    dopinf -> show();
}


void MainWindow::on_action_5_triggered()
{
    deld = new deletee;
    deld -> show();
}


void MainWindow::on_action_6_triggered()
{
    punkt = new punkt2();
    punkt -> show();
}

