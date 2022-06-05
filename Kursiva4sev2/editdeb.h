#ifndef EDITDEB_H
#define EDITDEB_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlQuery>

namespace Ui {
class editdeb;
}

class editdeb : public QWidget
{
    Q_OBJECT

public:
    explicit editdeb(QWidget *parent = nullptr);
    ~editdeb();

private slots:
    void on_pushButtonDeb_clicked();

private:
    Ui::editdeb *ui;
};

#endif // EDITDEB_H
