#include "adinfdeb.h"
#include "qmessagebox.h"
#include <QSqlError>
#include "ui_adinfdeb.h"

#include <QString>
#include <QDebug>


adinfDeb::adinfDeb(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adinfDeb)
{
    ui->setupUi(this);
}

adinfDeb::~adinfDeb()
{
    delete ui;
}

void adinfDeb::on_pushButtonDeb_clicked()
{
    QSqlQuery*query = new QSqlQuery;
    QMessageBox*mes = new QMessageBox();

    if(query->exec(QString("addDebtor '%1'").arg(ui->lineEdit->text())))
    {
        mes->setText("Запрос выполнен");
        mes->show();
    }
    else
    {
        qDebug() << "error" << query->lastError().text();
    }
}

