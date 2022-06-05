#ifndef PUNKT2_H
#define PUNKT2_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>

#include "pun2a.h"
#include "ui_pun2a.h"

namespace Ui {
class punkt2;
}

class punkt2 : public QWidget
{
    Q_OBJECT

public:
    explicit punkt2(QWidget *parent = nullptr);
    ~punkt2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::punkt2 *ui;
    pun2a * punkta;
};

#endif // PUNKT2_H
