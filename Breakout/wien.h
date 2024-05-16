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
    explicit Wien(int level = 1, QWidget *parent = nullptr);
    ~Wien();

private slots:
    void on_next_clicked();

private:
    int level;
    Ui::Wien *ui;
};

#endif // WIEN_H
