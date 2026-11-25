/********************************************************************************
** Form generated from reading UI file 'CUinfo_Engine.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUINFO_ENGINE_H
#define UI_CUINFO_ENGINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CUinfo_Engine_Form
{
public:
    QLabel *romIDtitle_label;
    QLabel *obd2system_label;
    QLabel *nrofdatambstitle_label;
    QLabel *integCCtitle_label;
    QLabel *ccintegrated_label;
    QLabel *VINtitle_label;
    QLabel *immobilizer_label;
    QLabel *nrofswitchestitle_label;
    QLabel *immosupportedtitle_label;
    QLabel *nrofswitches_label;
    QLabel *VIN_label;
    QLabel *nrofdatambs_label;
    QLabel *systemTypeTitle_label;
    QLabel *systemType_label;
    QLabel *nrofmbsswstitle_label;
    QLabel *romID_label;
    QLabel *obd2systemTitle_label;

    void setupUi(QWidget *CUinfo_Engine_Form)
    {
        if (CUinfo_Engine_Form->objectName().isEmpty())
            CUinfo_Engine_Form->setObjectName(QString::fromUtf8("CUinfo_Engine_Form"));
        CUinfo_Engine_Form->resize(192, 259);
        CUinfo_Engine_Form->setMinimumSize(QSize(192, 259));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        CUinfo_Engine_Form->setFont(font);
        romIDtitle_label = new QLabel(CUinfo_Engine_Form);
        romIDtitle_label->setObjectName(QString::fromUtf8("romIDtitle_label"));
        romIDtitle_label->setGeometry(QRect(20, 67, 61, 16));
        QFont font1;
        font1.setUnderline(true);
        romIDtitle_label->setFont(font1);
        obd2system_label = new QLabel(CUinfo_Engine_Form);
        obd2system_label->setObjectName(QString::fromUtf8("obd2system_label"));
        obd2system_label->setGeometry(QRect(157, 180, 18, 18));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(118, 116, 108, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        obd2system_label->setPalette(palette);
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        obd2system_label->setFont(font2);
        obd2system_label->setScaledContents(true);
        nrofdatambstitle_label = new QLabel(CUinfo_Engine_Form);
        nrofdatambstitle_label->setObjectName(QString::fromUtf8("nrofdatambstitle_label"));
        nrofdatambstitle_label->setGeometry(QRect(35, 156, 38, 16));
        integCCtitle_label = new QLabel(CUinfo_Engine_Form);
        integCCtitle_label->setObjectName(QString::fromUtf8("integCCtitle_label"));
        integCCtitle_label->setGeometry(QRect(20, 207, 125, 16));
        integCCtitle_label->setFont(font1);
        ccintegrated_label = new QLabel(CUinfo_Engine_Form);
        ccintegrated_label->setObjectName(QString::fromUtf8("ccintegrated_label"));
        ccintegrated_label->setGeometry(QRect(157, 205, 18, 18));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        ccintegrated_label->setPalette(palette1);
        ccintegrated_label->setFont(font2);
        ccintegrated_label->setScaledContents(true);
        VINtitle_label = new QLabel(CUinfo_Engine_Form);
        VINtitle_label->setObjectName(QString::fromUtf8("VINtitle_label"));
        VINtitle_label->setGeometry(QRect(20, 94, 150, 16));
        VINtitle_label->setFont(font1);
        immobilizer_label = new QLabel(CUinfo_Engine_Form);
        immobilizer_label->setObjectName(QString::fromUtf8("immobilizer_label"));
        immobilizer_label->setGeometry(QRect(157, 230, 18, 18));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        immobilizer_label->setPalette(palette2);
        immobilizer_label->setFont(font2);
        immobilizer_label->setScaledContents(true);
        nrofswitchestitle_label = new QLabel(CUinfo_Engine_Form);
        nrofswitchestitle_label->setObjectName(QString::fromUtf8("nrofswitchestitle_label"));
        nrofswitchestitle_label->setGeometry(QRect(103, 156, 57, 16));
        immosupportedtitle_label = new QLabel(CUinfo_Engine_Form);
        immosupportedtitle_label->setObjectName(QString::fromUtf8("immosupportedtitle_label"));
        immosupportedtitle_label->setGeometry(QRect(20, 232, 125, 16));
        immosupportedtitle_label->setFont(font1);
        nrofswitches_label = new QLabel(CUinfo_Engine_Form);
        nrofswitches_label->setObjectName(QString::fromUtf8("nrofswitches_label"));
        nrofswitches_label->setGeometry(QRect(164, 156, 21, 16));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        nrofswitches_label->setPalette(palette3);
        VIN_label = new QLabel(CUinfo_Engine_Form);
        VIN_label->setObjectName(QString::fromUtf8("VIN_label"));
        VIN_label->setGeometry(QRect(36, 113, 141, 16));
        nrofdatambs_label = new QLabel(CUinfo_Engine_Form);
        nrofdatambs_label->setObjectName(QString::fromUtf8("nrofdatambs_label"));
        nrofdatambs_label->setGeometry(QRect(77, 156, 21, 16));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        nrofdatambs_label->setPalette(palette4);
        systemTypeTitle_label = new QLabel(CUinfo_Engine_Form);
        systemTypeTitle_label->setObjectName(QString::fromUtf8("systemTypeTitle_label"));
        systemTypeTitle_label->setGeometry(QRect(20, 24, 150, 16));
        systemTypeTitle_label->setFont(font1);
        systemType_label = new QLabel(CUinfo_Engine_Form);
        systemType_label->setObjectName(QString::fromUtf8("systemType_label"));
        systemType_label->setGeometry(QRect(36, 43, 148, 16));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        systemType_label->setPalette(palette5);
        nrofmbsswstitle_label = new QLabel(CUinfo_Engine_Form);
        nrofmbsswstitle_label->setObjectName(QString::fromUtf8("nrofmbsswstitle_label"));
        nrofmbsswstitle_label->setGeometry(QRect(20, 133, 150, 16));
        nrofmbsswstitle_label->setFont(font1);
        romID_label = new QLabel(CUinfo_Engine_Form);
        romID_label->setObjectName(QString::fromUtf8("romID_label"));
        romID_label->setGeometry(QRect(80, 67, 91, 16));
        QPalette palette6;
        QBrush brush2(QColor(150, 0, 110, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        romID_label->setPalette(palette6);
        romID_label->setAlignment(Qt::AlignCenter);
        obd2systemTitle_label = new QLabel(CUinfo_Engine_Form);
        obd2systemTitle_label->setObjectName(QString::fromUtf8("obd2systemTitle_label"));
        obd2systemTitle_label->setGeometry(QRect(20, 182, 125, 16));
        obd2systemTitle_label->setFont(font1);

        retranslateUi(CUinfo_Engine_Form);

        QMetaObject::connectSlotsByName(CUinfo_Engine_Form);
    } // setupUi

    void retranslateUi(QWidget *CUinfo_Engine_Form)
    {
        CUinfo_Engine_Form->setWindowTitle(QString());
        romIDtitle_label->setText(QCoreApplication::translate("CUinfo_Engine_Form", "ROM-ID:", nullptr));
        obd2system_label->setText(QString());
        nrofdatambstitle_label->setText(QCoreApplication::translate("CUinfo_Engine_Form", "Data:", nullptr));
        integCCtitle_label->setText(QCoreApplication::translate("CUinfo_Engine_Form", "Integ. Cruise Control:", nullptr));
        ccintegrated_label->setText(QString());
        VINtitle_label->setText(QCoreApplication::translate("CUinfo_Engine_Form", "Registered VIN:", nullptr));
        immobilizer_label->setText(QString());
        nrofswitchestitle_label->setText(QCoreApplication::translate("CUinfo_Engine_Form", "Switches:", nullptr));
        immosupportedtitle_label->setText(QCoreApplication::translate("CUinfo_Engine_Form", "Immobilizer:", nullptr));
        nrofswitches_label->setText(QString());
        VIN_label->setText(QString());
        nrofdatambs_label->setText(QString());
        systemTypeTitle_label->setText(QCoreApplication::translate("CUinfo_Engine_Form", "System Type:", nullptr));
        systemType_label->setText(QString());
        nrofmbsswstitle_label->setText(QCoreApplication::translate("CUinfo_Engine_Form", "Measuring Blocks:", nullptr));
        romID_label->setText(QString());
        obd2systemTitle_label->setText(QCoreApplication::translate("CUinfo_Engine_Form", "OBD2-System:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CUinfo_Engine_Form: public Ui_CUinfo_Engine_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUINFO_ENGINE_H
