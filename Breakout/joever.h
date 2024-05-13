#ifndef JOEVER_H
#define JOEVER_H

#include <QDialog>
#include "test.h"

namespace Ui {
class Joever;
}

class Joever : public QDialog
{
    Q_OBJECT

public:
    explicit Joever(QWidget *parent = nullptr);
    ~Joever();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Joever *ui;
};

#endif // JOEVER_H
