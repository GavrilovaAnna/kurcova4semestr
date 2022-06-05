#include "editdeb.h"
#include "qsqlerror.h"
#include "ui_editdeb.h"

editdeb::editdeb(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editdeb)
{
    ui->setupUi(this);
}

editdeb::~editdeb()
{
    delete ui;
}

void editdeb::on_pushButtonDeb_clicked()
{
    QSqlQuery*query = new QSqlQuery;
    QMessageBox*mes = new QMessageBox();

    if(query->exec(QString("uodateDebtor '%1'").arg(ui->lineEdit->text())))
    {
        mes->setText("Запрос выполнен");
        mes->show();
    }
    else
    {
        qDebug() << "error" << query->lastError().text();
    }
}

