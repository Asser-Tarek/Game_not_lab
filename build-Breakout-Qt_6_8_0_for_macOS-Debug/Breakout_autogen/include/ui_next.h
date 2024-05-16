/********************************************************************************
** Form generated from reading UI file 'next.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEXT_H
#define UI_NEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Next
{
public:
    QPushButton *next_next;

    void setupUi(QDialog *Next)
    {
        if (Next->objectName().isEmpty())
            Next->setObjectName("Next");
        Next->resize(526, 466);
        next_next = new QPushButton(Next);
        next_next->setObjectName("next_next");
        next_next->setGeometry(QRect(220, 360, 100, 32));

        retranslateUi(Next);

        QMetaObject::connectSlotsByName(Next);
    } // setupUi

    void retranslateUi(QDialog *Next)
    {
        Next->setWindowTitle(QCoreApplication::translate("Next", "Dialog", nullptr));
        next_next->setText(QCoreApplication::translate("Next", "next level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Next: public Ui_Next {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEXT_H
