#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>

namespace Ui {
class Main_window;
}

class Main_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Main_window(QWidget *parent = nullptr);
    ~Main_window();

private slots:
    void on_start_button_clicked();

private:
    Ui::Main_window *ui;
    int level;
};

#endif // MAIN_WINDOW_H
