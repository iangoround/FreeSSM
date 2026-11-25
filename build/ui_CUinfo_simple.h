/********************************************************************************
** Form generated from reading UI file 'CUinfo_simple.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUINFO_SIMPLE_H
#define UI_CUINFO_SIMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CUinfo_simple_Form
{
public:
    QLabel *systemTypeTitle_label;
    QLabel *systemType_label;
    QLabel *romIDtitle_label;
    QLabel *romID_label;
    QLabel *nrofmbsswstitle_label;
    QLabel *nrofdatambstitle_label;
    QLabel *nrofswitchestitle_label;
    QLabel *nrofdatambs_label;
    QLabel *nrofswitches_label;

    void setupUi(QWidget *CUinfo_simple_Form)
    {
        if (CUinfo_simple_Form->objectName().isEmpty())
            CUinfo_simple_Form->setObjectName(QString::fromUtf8("CUinfo_simple_Form"));
        CUinfo_simple_Form->resize(192, 160);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CUinfo_simple_Form->sizePolicy().hasHeightForWidth());
        CUinfo_simple_Form->setSizePolicy(sizePolicy);
        CUinfo_simple_Form->setMinimumSize(QSize(192, 160));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        CUinfo_simple_Form->setFont(font);
        systemTypeTitle_label = new QLabel(CUinfo_simple_Form);
        systemTypeTitle_label->setObjectName(QString::fromUtf8("systemTypeTitle_label"));
        systemTypeTitle_label->setGeometry(QRect(20, 25, 150, 16));
        QFont font1;
        font1.setUnderline(true);
        systemTypeTitle_label->setFont(font1);
        systemType_label = new QLabel(CUinfo_simple_Form);
        systemType_label->setObjectName(QString::fromUtf8("systemType_label"));
        systemType_label->setGeometry(QRect(36, 45, 141, 16));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(118, 116, 108, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        systemType_label->setPalette(palette);
        romIDtitle_label = new QLabel(CUinfo_simple_Form);
        romIDtitle_label->setObjectName(QString::fromUtf8("romIDtitle_label"));
        romIDtitle_label->setGeometry(QRect(20, 75, 61, 16));
        romIDtitle_label->setFont(font1);
        romID_label = new QLabel(CUinfo_simple_Form);
        romID_label->setObjectName(QString::fromUtf8("romID_label"));
        romID_label->setGeometry(QRect(80, 75, 91, 16));
        QPalette palette1;
        QBrush brush2(QColor(150, 0, 110, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        romID_label->setPalette(palette1);
        romID_label->setAlignment(Qt::AlignCenter);
        nrofmbsswstitle_label = new QLabel(CUinfo_simple_Form);
        nrofmbsswstitle_label->setObjectName(QString::fromUtf8("nrofmbsswstitle_label"));
        nrofmbsswstitle_label->setGeometry(QRect(20, 105, 150, 16));
        nrofmbsswstitle_label->setFont(font1);
        nrofdatambstitle_label = new QLabel(CUinfo_simple_Form);
        nrofdatambstitle_label->setObjectName(QString::fromUtf8("nrofdatambstitle_label"));
        nrofdatambstitle_label->setGeometry(QRect(35, 125, 38, 16));
        nrofswitchestitle_label = new QLabel(CUinfo_simple_Form);
        nrofswitchestitle_label->setObjectName(QString::fromUtf8("nrofswitchestitle_label"));
        nrofswitchestitle_label->setGeometry(QRect(103, 125, 57, 16));
        nrofdatambs_label = new QLabel(CUinfo_simple_Form);
        nrofdatambs_label->setObjectName(QString::fromUtf8("nrofdatambs_label"));
        nrofdatambs_label->setGeometry(QRect(77, 125, 21, 16));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        nrofdatambs_label->setPalette(palette2);
        nrofswitches_label = new QLabel(CUinfo_simple_Form);
        nrofswitches_label->setObjectName(QString::fromUtf8("nrofswitches_label"));
        nrofswitches_label->setGeometry(QRect(164, 125, 21, 16));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        nrofswitches_label->setPalette(palette3);

        retranslateUi(CUinfo_simple_Form);

        QMetaObject::connectSlotsByName(CUinfo_simple_Form);
    } // setupUi

    void retranslateUi(QWidget *CUinfo_simple_Form)
    {
        CUinfo_simple_Form->setWindowTitle(QString());
        systemTypeTitle_label->setText(QCoreApplication::translate("CUinfo_simple_Form", "System Type:", nullptr));
        systemType_label->setText(QString());
        romIDtitle_label->setText(QCoreApplication::translate("CUinfo_simple_Form", "ROM-ID:", nullptr));
        romID_label->setText(QString());
        nrofmbsswstitle_label->setText(QCoreApplication::translate("CUinfo_simple_Form", "Measuring Blocks:", nullptr));
        nrofdatambstitle_label->setText(QCoreApplication::translate("CUinfo_simple_Form", "Data:", nullptr));
        nrofswitchestitle_label->setText(QCoreApplication::translate("CUinfo_simple_Form", "Switches:", nullptr));
        nrofdatambs_label->setText(QString());
        nrofswitches_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CUinfo_simple_Form: public Ui_CUinfo_simple_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUINFO_SIMPLE_H
