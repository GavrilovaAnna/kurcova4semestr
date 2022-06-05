#include "deldeb.h"
#include "qsqlerror.h"
#include "ui_deldeb.h"

#include <QString>
#include <QDebug>

deldeb::deldeb(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deldeb)
{
    ui->setupUi(this);
}

deldeb::~deldeb()
{
    delete ui;
}

void deldeb::on_pushButton_clicked()
{
    QSqlQuery*query = new QSqlQuery;
    QMessageBox*mes = new QMessageBox();

    if(query->exec(QString("DeleteDebtor '%1'").arg(ui->lineEdit->text())))
    {
        mes->setText("Запрос выполнен");
        mes->show();
    }
    else
    {
        qDebug() << "error" << query->lastError().text();
    }
}

