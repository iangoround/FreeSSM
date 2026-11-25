/********************************************************************************
** Form generated from reading UI file 'Preferences.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Preferences_Dialog
{
public:
    QLabel *title_label;
    QPushButton *ok_pushButton;
    QPushButton *cancel_pushButton;
    QPushButton *testinterface_pushButton;
    QComboBox *interfaceType_comboBox;
    QComboBox *language_comboBox;
    QLabel *language_label;
    QLabel *interfaceName_label;
    QLabel *label;
    QLabel *langIcon_label;
    QLabel *interfaceTypeIcon_label;
    QLabel *label_4;
    QComboBox *guistyle_comboBox;
    QLabel *guistyle_label;
    QLabel *guiStyleIcon_label;
    QComboBox *interfaceName_comboBox;
    QLabel *interfaceType_label;
    QLabel *interfaceNameIcon_label;
    QCheckBox *preferredSSM2protocol_checkBox;

    void setupUi(QDialog *Preferences_Dialog)
    {
        if (Preferences_Dialog->objectName().isEmpty())
            Preferences_Dialog->setObjectName(QString::fromUtf8("Preferences_Dialog"));
        Preferences_Dialog->setWindowModality(Qt::ApplicationModal);
        Preferences_Dialog->resize(458, 316);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(230);
        sizePolicy.setVerticalStretch(199);
        sizePolicy.setHeightForWidth(Preferences_Dialog->sizePolicy().hasHeightForWidth());
        Preferences_Dialog->setSizePolicy(sizePolicy);
        Preferences_Dialog->setMinimumSize(QSize(458, 316));
        Preferences_Dialog->setMaximumSize(QSize(458, 316));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(9);
        Preferences_Dialog->setFont(font);
        title_label = new QLabel(Preferences_Dialog);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(40, 7, 200, 34));
        QFont font1;
        font1.setPointSize(22);
        title_label->setFont(font1);
        title_label->setScaledContents(false);
        ok_pushButton = new QPushButton(Preferences_Dialog);
        ok_pushButton->setObjectName(QString::fromUtf8("ok_pushButton"));
        ok_pushButton->setGeometry(QRect(25, 271, 195, 30));
        cancel_pushButton = new QPushButton(Preferences_Dialog);
        cancel_pushButton->setObjectName(QString::fromUtf8("cancel_pushButton"));
        cancel_pushButton->setGeometry(QRect(240, 271, 195, 30));
        testinterface_pushButton = new QPushButton(Preferences_Dialog);
        testinterface_pushButton->setObjectName(QString::fromUtf8("testinterface_pushButton"));
        testinterface_pushButton->setGeometry(QRect(25, 223, 410, 32));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/oxygen/32x32/fork.png"), QSize(), QIcon::Normal, QIcon::Off);
        testinterface_pushButton->setIcon(icon);
        testinterface_pushButton->setIconSize(QSize(24, 24));
        interfaceType_comboBox = new QComboBox(Preferences_Dialog);
        interfaceType_comboBox->addItem(QString());
        interfaceType_comboBox->addItem(QString());
        interfaceType_comboBox->addItem(QString());
        interfaceType_comboBox->setObjectName(QString::fromUtf8("interfaceType_comboBox"));
        interfaceType_comboBox->setGeometry(QRect(150, 113, 285, 22));
        language_comboBox = new QComboBox(Preferences_Dialog);
        language_comboBox->setObjectName(QString::fromUtf8("language_comboBox"));
        language_comboBox->setGeometry(QRect(150, 49, 285, 22));
        language_label = new QLabel(Preferences_Dialog);
        language_label->setObjectName(QString::fromUtf8("language_label"));
        language_label->setGeometry(QRect(53, 52, 95, 16));
        language_label->setScaledContents(false);
        interfaceName_label = new QLabel(Preferences_Dialog);
        interfaceName_label->setObjectName(QString::fromUtf8("interfaceName_label"));
        interfaceName_label->setGeometry(QRect(53, 148, 95, 16));
        label = new QLabel(Preferences_Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 13, 24, 24));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/preferences24.png")));
        langIcon_label = new QLabel(Preferences_Dialog);
        langIcon_label->setObjectName(QString::fromUtf8("langIcon_label"));
        langIcon_label->setGeometry(QRect(25, 48, 22, 22));
        langIcon_label->setPixmap(QPixmap(QString::fromUtf8(":/icons/oxygen/22x22/preferences-desktop-locale.png")));
        interfaceTypeIcon_label = new QLabel(Preferences_Dialog);
        interfaceTypeIcon_label->setObjectName(QString::fromUtf8("interfaceTypeIcon_label"));
        interfaceTypeIcon_label->setGeometry(QRect(25, 112, 22, 22));
        interfaceTypeIcon_label->setPixmap(QPixmap(QString::fromUtf8(":/icons/chrystal/22x22/hardware.png")));
        label_4 = new QLabel(Preferences_Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(9, 10, 26, 26));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icons/oxygen/32x32/preferences-system.png")));
        label_4->setScaledContents(true);
        guistyle_comboBox = new QComboBox(Preferences_Dialog);
        guistyle_comboBox->setObjectName(QString::fromUtf8("guistyle_comboBox"));
        guistyle_comboBox->setGeometry(QRect(150, 81, 285, 22));
        guistyle_label = new QLabel(Preferences_Dialog);
        guistyle_label->setObjectName(QString::fromUtf8("guistyle_label"));
        guistyle_label->setGeometry(QRect(53, 84, 95, 16));
        guiStyleIcon_label = new QLabel(Preferences_Dialog);
        guiStyleIcon_label->setObjectName(QString::fromUtf8("guiStyleIcon_label"));
        guiStyleIcon_label->setGeometry(QRect(25, 80, 22, 22));
        guiStyleIcon_label->setPixmap(QPixmap(QString::fromUtf8(":/icons/oxygen/22x22/preferences-desktop-theme.png")));
        interfaceName_comboBox = new QComboBox(Preferences_Dialog);
        interfaceName_comboBox->setObjectName(QString::fromUtf8("interfaceName_comboBox"));
        interfaceName_comboBox->setGeometry(QRect(150, 145, 285, 22));
        interfaceType_label = new QLabel(Preferences_Dialog);
        interfaceType_label->setObjectName(QString::fromUtf8("interfaceType_label"));
        interfaceType_label->setGeometry(QRect(53, 116, 95, 16));
        interfaceNameIcon_label = new QLabel(Preferences_Dialog);
        interfaceNameIcon_label->setObjectName(QString::fromUtf8("interfaceNameIcon_label"));
        interfaceNameIcon_label->setGeometry(QRect(25, 144, 22, 22));
        interfaceNameIcon_label->setPixmap(QPixmap(QString::fromUtf8(":/icons/chrystal/22x22/input_devices_settings.png")));
        preferredSSM2protocol_checkBox = new QCheckBox(Preferences_Dialog);
        preferredSSM2protocol_checkBox->setObjectName(QString::fromUtf8("preferredSSM2protocol_checkBox"));
        preferredSSM2protocol_checkBox->setGeometry(QRect(25, 180, 410, 30));
        QWidget::setTabOrder(language_comboBox, interfaceType_comboBox);
        QWidget::setTabOrder(interfaceType_comboBox, testinterface_pushButton);
        QWidget::setTabOrder(testinterface_pushButton, ok_pushButton);
        QWidget::setTabOrder(ok_pushButton, cancel_pushButton);

        retranslateUi(Preferences_Dialog);

        QMetaObject::connectSlotsByName(Preferences_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Preferences_Dialog)
    {
        Preferences_Dialog->setWindowTitle(QCoreApplication::translate("Preferences_Dialog", "Preferences", nullptr));
        title_label->setText(QCoreApplication::translate("Preferences_Dialog", "Preferences", nullptr));
        ok_pushButton->setText(QCoreApplication::translate("Preferences_Dialog", "&OK", nullptr));
        cancel_pushButton->setText(QCoreApplication::translate("Preferences_Dialog", "&Cancel", nullptr));
        testinterface_pushButton->setText(QCoreApplication::translate("Preferences_Dialog", "&Test Diagnostic Interface", nullptr));
        interfaceType_comboBox->setItemText(0, QCoreApplication::translate("Preferences_Dialog", "Serial Pass-Through", nullptr));
        interfaceType_comboBox->setItemText(1, QCoreApplication::translate("Preferences_Dialog", "SAE-J2534 Pass-Through", nullptr));
        interfaceType_comboBox->setItemText(2, QCoreApplication::translate("Preferences_Dialog", "AT-command controlled (ELM / AGV / Diamex)", nullptr));

        language_label->setText(QCoreApplication::translate("Preferences_Dialog", "Language:", nullptr));
        interfaceName_label->setText(QCoreApplication::translate("Preferences_Dialog", "Interface-Name:", nullptr));
        label->setText(QString());
        langIcon_label->setText(QString());
        interfaceTypeIcon_label->setText(QString());
        label_4->setText(QString());
        guistyle_label->setText(QCoreApplication::translate("Preferences_Dialog", "GUI-Style:", nullptr));
        guiStyleIcon_label->setText(QString());
        interfaceType_label->setText(QCoreApplication::translate("Preferences_Dialog", "Interface-Type:", nullptr));
        interfaceNameIcon_label->setText(QString());
        preferredSSM2protocol_checkBox->setText(QCoreApplication::translate("Preferences_Dialog", "Prefer ISO-14230 (K-Line) over ISO-15765 (CAN), if ECU supports\n"
"both SSM2 protocol variants", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Preferences_Dialog: public Ui_Preferences_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
