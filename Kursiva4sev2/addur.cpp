#include "addur.h"
#include "qsqlerror.h"
#include "ui_addur.h"

#include <QString>
#include <QDebug>

addUr::addUr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addUr)
{
    ui->setupUi(this);
}

addUr::~addUr()
{
    delete ui;
}

void addUr::on_pushButtonUr_clicked()
{
    QSqlQuery*query = new QSqlQuery;
    QMessageBox*mes = new QMessageBox();

    if(query->exec(QString("addUr %1, %4").arg(ui->lineEdit->text()).arg(ui->lineEdit_2->text())))
    {
        mes->setText("Запрос выполнен");
        mes->show();
    }
    else
    {
        qDebug() << "error" << query->lastError().text();
    }
}

