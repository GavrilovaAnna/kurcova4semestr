#include "pun2a.h"
#include "qsqltablemodel.h"
#include "ui_pun2a.h"

pun2a::pun2a(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pun2a)
{
    ui->setupUi(this);
}

pun2a::~pun2a()
{
    delete ui;
}

void pun2a::setTable()
{
    QSqlTableModel*model = new QSqlTableModel();
    model->setTable("punkta");
    model->select();

    ui->tableView->setModel(model);
}
