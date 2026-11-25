/********************************************************************************
** Form generated from reading UI file 'CUinfo_Transmission.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUINFO_TRANSMISSION_H
#define UI_CUINFO_TRANSMISSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CUinfo_Transmission_Form
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
    QLabel *obd2systemTitle_label;
    QLabel *obd2system_label;

    void setupUi(QWidget *CUinfo_Transmission_Form)
    {
        if (CUinfo_Transmission_Form->objectName().isEmpty())
            CUinfo_Transmission_Form->setObjectName(QString::fromUtf8("CUinfo_Transmission_Form"));
        CUinfo_Transmission_Form->resize(192, 190);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CUinfo_Transmission_Form->sizePolicy().hasHeightForWidth());
        CUinfo_Transmission_Form->setSizePolicy(sizePolicy);
        CUinfo_Transmission_Form->setMinimumSize(QSize(192, 190));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        CUinfo_Transmission_Form->setFont(font);
        systemTypeTitle_label = new QLabel(CUinfo_Transmission_Form);
        systemTypeTitle_label->setObjectName(QString::fromUtf8("systemTypeTitle_label"));
        systemTypeTitle_label->setGeometry(QRect(20, 25, 150, 16));
        QFont font1;
        font1.setUnderline(true);
        systemTypeTitle_label->setFont(font1);
        systemType_label = new QLabel(CUinfo_Transmission_Form);
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
        romIDtitle_label = new QLabel(CUinfo_Transmission_Form);
        romIDtitle_label->setObjectName(QString::fromUtf8("romIDtitle_label"));
        romIDtitle_label->setGeometry(QRect(20, 75, 61, 16));
        romIDtitle_label->setFont(font1);
        romID_label = new QLabel(CUinfo_Transmission_Form);
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
        nrofmbsswstitle_label = new QLabel(CUinfo_Transmission_Form);
        nrofmbsswstitle_label->setObjectName(QString::fromUtf8("nrofmbsswstitle_label"));
        nrofmbsswstitle_label->setGeometry(QRect(20, 105, 150, 16));
        nrofmbsswstitle_label->setFont(font1);
        nrofdatambstitle_label = new QLabel(CUinfo_Transmission_Form);
        nrofdatambstitle_label->setObjectName(QString::fromUtf8("nrofdatambstitle_label"));
        nrofdatambstitle_label->setGeometry(QRect(35, 125, 38, 16));
        nrofswitchestitle_label = new QLabel(CUinfo_Transmission_Form);
        nrofswitchestitle_label->setObjectName(QString::fromUtf8("nrofswitchestitle_label"));
        nrofswitchestitle_label->setGeometry(QRect(103, 125, 57, 16));
        nrofdatambs_label = new QLabel(CUinfo_Transmission_Form);
        nrofdatambs_label->setObjectName(QString::fromUtf8("nrofdatambs_label"));
        nrofdatambs_label->setGeometry(QRect(77, 125, 21, 16));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        nrofdatambs_label->setPalette(palette2);
        nrofswitches_label = new QLabel(CUinfo_Transmission_Form);
        nrofswitches_label->setObjectName(QString::fromUtf8("nrofswitches_label"));
        nrofswitches_label->setGeometry(QRect(164, 125, 21, 16));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        nrofswitches_label->setPalette(palette3);
        obd2systemTitle_label = new QLabel(CUinfo_Transmission_Form);
        obd2systemTitle_label->setObjectName(QString::fromUtf8("obd2systemTitle_label"));
        obd2systemTitle_label->setGeometry(QRect(20, 155, 125, 16));
        obd2systemTitle_label->setFont(font1);
        obd2system_label = new QLabel(CUinfo_Transmission_Form);
        obd2system_label->setObjectName(QString::fromUtf8("obd2system_label"));
        obd2system_label->setGeometry(QRect(157, 153, 18, 18));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        obd2system_label->setPalette(palette4);
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        obd2system_label->setFont(font2);
        obd2system_label->setScaledContents(true);

        retranslateUi(CUinfo_Transmission_Form);

        QMetaObject::connectSlotsByName(CUinfo_Transmission_Form);
    } // setupUi

    void retranslateUi(QWidget *CUinfo_Transmission_Form)
    {
        CUinfo_Transmission_Form->setWindowTitle(QString());
        systemTypeTitle_label->setText(QCoreApplication::translate("CUinfo_Transmission_Form", "System Type:", nullptr));
        systemType_label->setText(QString());
        romIDtitle_label->setText(QCoreApplication::translate("CUinfo_Transmission_Form", "ROM-ID:", nullptr));
        romID_label->setText(QString());
        nrofmbsswstitle_label->setText(QCoreApplication::translate("CUinfo_Transmission_Form", "Measuring Blocks:", nullptr));
        nrofdatambstitle_label->setText(QCoreApplication::translate("CUinfo_Transmission_Form", "Data:", nullptr));
        nrofswitchestitle_label->setText(QCoreApplication::translate("CUinfo_Transmission_Form", "Switches:", nullptr));
        nrofdatambs_label->setText(QString());
        nrofswitches_label->setText(QString());
        obd2systemTitle_label->setText(QCoreApplication::translate("CUinfo_Transmission_Form", "OBD2-System:", nullptr));
        obd2system_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CUinfo_Transmission_Form: public Ui_CUinfo_Transmission_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUINFO_TRANSMISSION_H
