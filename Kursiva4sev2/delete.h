#ifndef DELETE_H
#define DELETE_H

#include <QWidget>

#include "deldeb.h"
#include "ui_deldeb.h"

namespace Ui {
class delete;
}

class delete : public QWidget
{
    Q_OBJECT

public:
    explicit delete(QWidget *parent = nullptr);
    ~delete();

private:
    Ui::delete *ui;
    deldeb deld;
};

#endif // DELETE_H
