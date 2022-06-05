#ifndef DELDEB_H
#define DELDEB_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>

namespace Ui {
class deldeb;
}

class deldeb : public QWidget
{
    Q_OBJECT

public:
    explicit deldeb(QWidget *parent = nullptr);
    ~deldeb();

private slots:
    void on_pushButton_clicked();

private:
    Ui::deldeb *ui;
};

#endif // DELDEB_H
