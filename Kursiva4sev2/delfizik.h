#ifndef DELFIZIK_H
#define DELFIZIK_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>

namespace Ui {
class delfizik;
}

class delfizik : public QWidget
{
    Q_OBJECT

public:
    explicit delfizik(QWidget *parent = nullptr);
    ~delfizik();

private slots:
    void on_pushButton_clicked();

private:
    Ui::delfizik *ui;
};

#endif // DELFIZIK_H
