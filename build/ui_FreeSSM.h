/********************************************************************************
** Form generated from reading UI file 'FreeSSM.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FREESSM_H
#define UI_FREESSM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FreeSSM_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *exit_pushButton;
    QGroupBox *controlunits_groupBox;
    QPushButton *engine_pushButton;
    QPushButton *transmission_pushButton;
    QPushButton *absvdc_pushButton;
    QPushButton *cruisecontrol_pushButton;
    QPushButton *aircon_pushButton;
    QGroupBox *program_groupBox;
    QPushButton *help_pushButton;
    QPushButton *about_pushButton;
    QPushButton *preferences_pushButton;
    QLabel *background_label;

    void setupUi(QMainWindow *FreeSSM_MainWindow)
    {
        if (FreeSSM_MainWindow->objectName().isEmpty())
            FreeSSM_MainWindow->setObjectName(QString::fromUtf8("FreeSSM_MainWindow"));
        FreeSSM_MainWindow->resize(604, 341);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FreeSSM_MainWindow->sizePolicy().hasHeightForWidth());
        FreeSSM_MainWindow->setSizePolicy(sizePolicy);
        FreeSSM_MainWindow->setMinimumSize(QSize(604, 341));
        FreeSSM_MainWindow->setMaximumSize(QSize(604, 341));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        FreeSSM_MainWindow->setFont(font);
        centralwidget = new QWidget(FreeSSM_MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        exit_pushButton = new QPushButton(centralwidget);
        exit_pushButton->setObjectName(QString::fromUtf8("exit_pushButton"));
        exit_pushButton->setGeometry(QRect(217, 286, 172, 40));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        exit_pushButton->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/oxygen/32x32/system-shutdown.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit_pushButton->setIcon(icon);
        exit_pushButton->setIconSize(QSize(32, 32));
        controlunits_groupBox = new QGroupBox(centralwidget);
        controlunits_groupBox->setObjectName(QString::fromUtf8("controlunits_groupBox"));
        controlunits_groupBox->setGeometry(QRect(20, 60, 565, 129));
        controlunits_groupBox->setFont(font1);
        engine_pushButton = new QPushButton(controlunits_groupBox);
        engine_pushButton->setObjectName(QString::fromUtf8("engine_pushButton"));
        engine_pushButton->setGeometry(QRect(15, 24, 172, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/freessm/64x64/Engine.png"), QSize(), QIcon::Normal, QIcon::Off);
        engine_pushButton->setIcon(icon1);
        engine_pushButton->setIconSize(QSize(32, 32));
        transmission_pushButton = new QPushButton(controlunits_groupBox);
        transmission_pushButton->setObjectName(QString::fromUtf8("transmission_pushButton"));
        transmission_pushButton->setGeometry(QRect(197, 24, 172, 40));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/freessm/64x64/Transmission.png"), QSize(), QIcon::Normal, QIcon::Off);
        transmission_pushButton->setIcon(icon2);
        transmission_pushButton->setIconSize(QSize(32, 32));
        absvdc_pushButton = new QPushButton(controlunits_groupBox);
        absvdc_pushButton->setObjectName(QString::fromUtf8("absvdc_pushButton"));
        absvdc_pushButton->setGeometry(QRect(15, 74, 172, 40));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/freessm/64x64/ABS.png"), QSize(), QIcon::Normal, QIcon::Off);
        absvdc_pushButton->setIcon(icon3);
        absvdc_pushButton->setIconSize(QSize(32, 32));
        cruisecontrol_pushButton = new QPushButton(controlunits_groupBox);
        cruisecontrol_pushButton->setObjectName(QString::fromUtf8("cruisecontrol_pushButton"));
        cruisecontrol_pushButton->setEnabled(true);
        cruisecontrol_pushButton->setGeometry(QRect(197, 74, 172, 40));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/freessm/64x64/CruiseControl.png"), QSize(), QIcon::Normal, QIcon::Off);
        cruisecontrol_pushButton->setIcon(icon4);
        cruisecontrol_pushButton->setIconSize(QSize(32, 32));
        aircon_pushButton = new QPushButton(controlunits_groupBox);
        aircon_pushButton->setObjectName(QString::fromUtf8("aircon_pushButton"));
        aircon_pushButton->setGeometry(QRect(379, 74, 172, 40));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/freessm/64x64/AirCon.png"), QSize(), QIcon::Normal, QIcon::Off);
        aircon_pushButton->setIcon(icon5);
        aircon_pushButton->setIconSize(QSize(32, 32));
        program_groupBox = new QGroupBox(centralwidget);
        program_groupBox->setObjectName(QString::fromUtf8("program_groupBox"));
        program_groupBox->setGeometry(QRect(20, 194, 565, 79));
        program_groupBox->setFont(font1);
        help_pushButton = new QPushButton(program_groupBox);
        help_pushButton->setObjectName(QString::fromUtf8("help_pushButton"));
        help_pushButton->setGeometry(QRect(197, 24, 172, 40));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/oxygen/32x32/help-browser.png"), QSize(), QIcon::Normal, QIcon::Off);
        help_pushButton->setIcon(icon6);
        help_pushButton->setIconSize(QSize(32, 32));
        about_pushButton = new QPushButton(program_groupBox);
        about_pushButton->setObjectName(QString::fromUtf8("about_pushButton"));
        about_pushButton->setGeometry(QRect(379, 24, 172, 40));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/oxygen/32x32/help-about.png"), QSize(), QIcon::Normal, QIcon::Off);
        about_pushButton->setIcon(icon7);
        about_pushButton->setIconSize(QSize(32, 32));
        preferences_pushButton = new QPushButton(program_groupBox);
        preferences_pushButton->setObjectName(QString::fromUtf8("preferences_pushButton"));
        preferences_pushButton->setGeometry(QRect(15, 24, 172, 40));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/oxygen/32x32/preferences-system.png"), QSize(), QIcon::Normal, QIcon::Off);
        preferences_pushButton->setIcon(icon8);
        preferences_pushButton->setIconSize(QSize(32, 32));
        background_label = new QLabel(centralwidget);
        background_label->setObjectName(QString::fromUtf8("background_label"));
        background_label->setGeometry(QRect(0, 0, 604, 341));
        background_label->setScaledContents(true);
        FreeSSM_MainWindow->setCentralWidget(centralwidget);
        background_label->raise();
        exit_pushButton->raise();
        controlunits_groupBox->raise();
        program_groupBox->raise();
        QWidget::setTabOrder(engine_pushButton, transmission_pushButton);
        QWidget::setTabOrder(transmission_pushButton, absvdc_pushButton);
        QWidget::setTabOrder(absvdc_pushButton, cruisecontrol_pushButton);
        QWidget::setTabOrder(cruisecontrol_pushButton, aircon_pushButton);
        QWidget::setTabOrder(aircon_pushButton, preferences_pushButton);
        QWidget::setTabOrder(preferences_pushButton, help_pushButton);
        QWidget::setTabOrder(help_pushButton, about_pushButton);
        QWidget::setTabOrder(about_pushButton, exit_pushButton);

        retranslateUi(FreeSSM_MainWindow);

        QMetaObject::connectSlotsByName(FreeSSM_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FreeSSM_MainWindow)
    {
        exit_pushButton->setText(QCoreApplication::translate("FreeSSM_MainWindow", "          E&xit              ", nullptr));
        controlunits_groupBox->setTitle(QCoreApplication::translate("FreeSSM_MainWindow", "Control Units:", nullptr));
        engine_pushButton->setText(QCoreApplication::translate("FreeSSM_MainWindow", "        &Engine         ", nullptr));
        transmission_pushButton->setText(QCoreApplication::translate("FreeSSM_MainWindow", "   &Transmission  ", nullptr));
        absvdc_pushButton->setText(QCoreApplication::translate("FreeSSM_MainWindow", "      A&BS/VDC       ", nullptr));
        cruisecontrol_pushButton->setText(QCoreApplication::translate("FreeSSM_MainWindow", "  &Cruise Control ", nullptr));
        aircon_pushButton->setText(QCoreApplication::translate("FreeSSM_MainWindow", "A&ir Conditioning", nullptr));
        program_groupBox->setTitle(QCoreApplication::translate("FreeSSM_MainWindow", "Program:", nullptr));
        help_pushButton->setText(QCoreApplication::translate("FreeSSM_MainWindow", "         &Help             ", nullptr));
        about_pushButton->setText(QCoreApplication::translate("FreeSSM_MainWindow", "         &About           ", nullptr));
        preferences_pushButton->setText(QCoreApplication::translate("FreeSSM_MainWindow", "    &Preferences    ", nullptr));
        (void)FreeSSM_MainWindow;
    } // retranslateUi

};

namespace Ui {
    class FreeSSM_MainWindow: public Ui_FreeSSM_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FREESSM_H
