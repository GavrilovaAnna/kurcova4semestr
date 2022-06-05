#include "addprise.h"
#include <QSqlError>
#include "ui_addprise.h"

#include <QString>
#include <QDebug>

addprise::addprise(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addprise)
{
    ui->setupUi(this);
}

addprise::~addprise()
{
    delete ui;
}

void addprise::on_pushButtonPrise_clicked()
{
    QSqlQuery*query = new QSqlQuery;
    QMessageBox*mes = new QMessageBox();

    if(query->exec(QString("addPrise %1, %2, %3").arg(ui->lineEdit->text()).arg(ui->lineEdit_2->text()).arg(ui->lineEdit_3->text())))
    {
        mes->setText("Запрос выполнен");
        mes->show();
    }
    else
    {
        qDebug() << "error" << query->lastError().text();
    }
}

