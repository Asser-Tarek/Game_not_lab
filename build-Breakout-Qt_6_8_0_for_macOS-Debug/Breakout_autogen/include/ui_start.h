/********************************************************************************
** Form generated from reading UI file 'start.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_START_H
#define UI_START_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Start
{
public:
    QLabel *label;
    QPushButton *start;

    void setupUi(QDialog *Start)
    {
        if (Start->objectName().isEmpty())
            Start->setObjectName("Start");
        Start->resize(611, 457);
        label = new QLabel(Start);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 110, 471, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(64);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        start = new QPushButton(Start);
        start->setObjectName("start");
        start->setGeometry(QRect(240, 350, 121, 31));

        retranslateUi(Start);

        QMetaObject::connectSlotsByName(Start);
    } // setupUi

    void retranslateUi(QDialog *Start)
    {
        Start->setWindowTitle(QCoreApplication::translate("Start", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Start", "BREAKOUT", nullptr));
        start->setText(QCoreApplication::translate("Start", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Start: public Ui_Start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_H
