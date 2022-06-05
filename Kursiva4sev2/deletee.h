#ifndef DELETEE_H
#define DELETEE_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>

#include "deldeb.h"
#include "ui_deldeb.h"

#include "delur.h"
#include "ui_delur.h"

#include "delfizik.h"
#include "ui_delfizik.h"

#include "delprise.h"
#include "ui_delprise.h"

namespace Ui {
class deletee;
}

class deletee : public QWidget
{
    Q_OBJECT

public:
    explicit deletee(QWidget *parent = nullptr);
    ~deletee();

private slots:
    void on_pushButtonDeb_clicked();

    void on_pushButton_Ur_clicked();

    void on_pushButton_Fiz_clicked();

    void on_pushButton_Prise_clicked();

private:
    Ui::deletee *ui;
    deldeb deld;
    delur delu;
    delfizik delfiz;
    delprise delp;
};

#endif // DELETEE_H
