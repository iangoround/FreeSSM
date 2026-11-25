/********************************************************************************
** Form generated from reading UI file 'ActuatorTestDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTUATORTESTDLG_H
#define UI_ACTUATORTESTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_actuatortest_Dialog
{
public:
    QLabel *actuatortitle_label;
    QLabel *statustitle_label;
    QLabel *actuator_label;
    QLabel *status_label;
    QPushButton *exit_pushButton;
    QLabel *title_label;

    void setupUi(QDialog *actuatortest_Dialog)
    {
        if (actuatortest_Dialog->objectName().isEmpty())
            actuatortest_Dialog->setObjectName(QString::fromUtf8("actuatortest_Dialog"));
        actuatortest_Dialog->setWindowModality(Qt::ApplicationModal);
        actuatortest_Dialog->resize(397, 142);
        actuatortest_Dialog->setMinimumSize(QSize(397, 142));
        actuatortest_Dialog->setMaximumSize(QSize(397, 142));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(10);
        actuatortest_Dialog->setFont(font);
        actuatortitle_label = new QLabel(actuatortest_Dialog);
        actuatortitle_label->setObjectName(QString::fromUtf8("actuatortitle_label"));
        actuatortitle_label->setGeometry(QRect(20, 49, 61, 16));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        actuatortitle_label->setFont(font1);
        statustitle_label = new QLabel(actuatortest_Dialog);
        statustitle_label->setObjectName(QString::fromUtf8("statustitle_label"));
        statustitle_label->setGeometry(QRect(20, 79, 61, 16));
        statustitle_label->setFont(font1);
        actuator_label = new QLabel(actuatortest_Dialog);
        actuator_label->setObjectName(QString::fromUtf8("actuator_label"));
        actuator_label->setGeometry(QRect(90, 49, 291, 16));
        status_label = new QLabel(actuatortest_Dialog);
        status_label->setObjectName(QString::fromUtf8("status_label"));
        status_label->setGeometry(QRect(90, 79, 291, 16));
        exit_pushButton = new QPushButton(actuatortest_Dialog);
        exit_pushButton->setObjectName(QString::fromUtf8("exit_pushButton"));
        exit_pushButton->setGeometry(QRect(149, 106, 111, 26));
        title_label = new QLabel(actuatortest_Dialog);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(10, 10, 250, 26));
        QFont font2;
        font2.setPointSize(16);
        title_label->setFont(font2);

        retranslateUi(actuatortest_Dialog);

        QMetaObject::connectSlotsByName(actuatortest_Dialog);
    } // setupUi

    void retranslateUi(QDialog *actuatortest_Dialog)
    {
        actuatortest_Dialog->setWindowTitle(QCoreApplication::translate("actuatortest_Dialog", "Actuator Test", nullptr));
        actuatortitle_label->setText(QCoreApplication::translate("actuatortest_Dialog", "Actuator:", nullptr));
        statustitle_label->setText(QCoreApplication::translate("actuatortest_Dialog", "Status:", nullptr));
        actuator_label->setText(QString());
        status_label->setText(QString());
        exit_pushButton->setText(QCoreApplication::translate("actuatortest_Dialog", "Exit", nullptr));
        title_label->setText(QCoreApplication::translate("actuatortest_Dialog", "Actuator Test:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class actuatortest_Dialog: public Ui_actuatortest_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTUATORTESTDLG_H
