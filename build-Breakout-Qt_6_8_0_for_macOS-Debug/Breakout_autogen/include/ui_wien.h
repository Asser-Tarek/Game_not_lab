/********************************************************************************
** Form generated from reading UI file 'wien.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIEN_H
#define UI_WIEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Wien
{
public:
    QPushButton *next;
    QLabel *image;

    void setupUi(QDialog *Wien)
    {
        if (Wien->objectName().isEmpty())
            Wien->setObjectName("Wien");
        Wien->resize(553, 499);
        next = new QPushButton(Wien);
        next->setObjectName("next");
        next->setGeometry(QRect(220, 420, 121, 32));
        image = new QLabel(Wien);
        image->setObjectName("image");
        image->setGeometry(QRect(140, 90, 321, 271));

        retranslateUi(Wien);

        QMetaObject::connectSlotsByName(Wien);
    } // setupUi

    void retranslateUi(QDialog *Wien)
    {
        Wien->setWindowTitle(QCoreApplication::translate("Wien", "Dialog", nullptr));
        next->setText(QCoreApplication::translate("Wien", "Next", nullptr));
        image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Wien: public Ui_Wien {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIEN_H
