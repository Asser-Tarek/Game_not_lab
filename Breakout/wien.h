#ifndef WIEN_H
#define WIEN_H

#include <QDialog>
#include "game.h"

namespace Ui {
class Wien;
}

class Wien : public QDialog
{
    Q_OBJECT

public:
    explicit Wien(QWidget *parent = nullptr);
    ~Wien();

private slots:
    void on_next_clicked();

private:
    Ui::Wien *ui;
};

#endif // WIEN_H
