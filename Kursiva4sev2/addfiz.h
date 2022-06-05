#ifndef ADDFIZ_H
#define ADDFIZ_H

#include <QWidget>

namespace Ui {
class addfiz;
}

class addfiz : public QWidget
{
    Q_OBJECT

public:
    explicit addfiz(QWidget *parent = nullptr);
    ~addfiz();

private slots:
    void on_pushButtonFiz_clicked();

private:
    Ui::addfiz *ui;
};

#endif // ADDFIZ_H
