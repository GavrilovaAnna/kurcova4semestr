#include "delete.h"
#include "ui_delete.h"

#include <QString>
#include <QDebug>

delete::delete(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::delete)
{
    ui->setupUi(this);
}

delete::~delete()
{
delete ui;
}
