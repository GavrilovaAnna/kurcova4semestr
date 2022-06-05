#ifndef ADINFDEB_H
#define ADINFDEB_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>

namespace Ui {
class adinfDeb;
}

class adinfDeb : public QWidget
{
    Q_OBJECT

public:
    explicit adinfDeb(QWidget *parent = nullptr);
    ~adinfDeb();

private slots:
    void on_pushButtonDeb_clicked();

private:
    Ui::adinfDeb *ui;
};

#endif // ADINFDEB_H
