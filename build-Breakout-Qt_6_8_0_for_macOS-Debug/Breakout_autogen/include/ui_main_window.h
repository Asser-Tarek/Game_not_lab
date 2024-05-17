/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_window
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *start_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Main_window)
    {
        if (Main_window->objectName().isEmpty())
            Main_window->setObjectName("Main_window");
        Main_window->resize(716, 452);
        centralwidget = new QWidget(Main_window);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 140, 431, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Roseritta")});
        font.setPointSize(64);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        start_button = new QPushButton(centralwidget);
        start_button->setObjectName("start_button");
        start_button->setGeometry(QRect(310, 310, 100, 32));
        Main_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Main_window);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 716, 24));
        Main_window->setMenuBar(menubar);
        statusbar = new QStatusBar(Main_window);
        statusbar->setObjectName("statusbar");
        Main_window->setStatusBar(statusbar);

        retranslateUi(Main_window);

        QMetaObject::connectSlotsByName(Main_window);
    } // setupUi

    void retranslateUi(QMainWindow *Main_window)
    {
        Main_window->setWindowTitle(QCoreApplication::translate("Main_window", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Main_window", "BREAKOUT", nullptr));
        start_button->setText(QCoreApplication::translate("Main_window", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Main_window: public Ui_Main_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
