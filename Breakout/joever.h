#ifndef JOEVER_H
#define JOEVER_H

#include <QDialog>


namespace Ui {
class Joever;
}

class Joever : public QDialog
{
    Q_OBJECT

public:
    explicit Joever(int level = 1,QWidget *parent = nullptr);
    ~Joever();

private slots:

    void on_pushButton_2_clicked();

private:
    Ui::Joever *ui;
    int level;
};

#endif // JOEVER_H
