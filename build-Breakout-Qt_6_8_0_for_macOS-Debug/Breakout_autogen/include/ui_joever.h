/********************************************************************************
** Form generated from reading UI file 'joever.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOEVER_H
#define UI_JOEVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Joever
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Joever)
    {
        if (Joever->objectName().isEmpty())
            Joever->setObjectName("Joever");
        Joever->resize(550, 500);
        label = new QLabel(Joever);
        label->setObjectName("label");
        label->setGeometry(QRect(57, 25, 431, 371));
        pushButton = new QPushButton(Joever);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(49, 431, 171, 51));
        pushButton_2 = new QPushButton(Joever);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(329, 431, 171, 51));

        retranslateUi(Joever);

        QMetaObject::connectSlotsByName(Joever);
    } // setupUi

    void retranslateUi(QDialog *Joever)
    {
        Joever->setWindowTitle(QCoreApplication::translate("Joever", "Dialog", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("Joever", "Back to menu", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Joever", "Restart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Joever: public Ui_Joever {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOEVER_H
