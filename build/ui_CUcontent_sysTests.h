/********************************************************************************
** Form generated from reading UI file 'CUcontent_sysTests.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUCONTENT_SYSTESTS_H
#define UI_CUCONTENT_SYSTESTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sysTestsContent_Form
{
public:
    QGridLayout *gridLayout;
    QLabel *actuatorlistTitle_label;
    QLabel *testImmoLineTitel_label;
    QPushButton *testImmoLine_pushButton;
    QFrame *hsep_line;
    QPushButton *startActuatorTest_pushButton;
    QLabel *actuatorTest_arrow_label;
    QLabel *actuatorTestInfo_label;
    QListWidget *actuators_listWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *sysTestsContent_Form)
    {
        if (sysTestsContent_Form->objectName().isEmpty())
            sysTestsContent_Form->setObjectName(QString::fromUtf8("sysTestsContent_Form"));
        sysTestsContent_Form->resize(500, 400);
        sysTestsContent_Form->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        sysTestsContent_Form->setFont(font);
        gridLayout = new QGridLayout(sysTestsContent_Form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        actuatorlistTitle_label = new QLabel(sysTestsContent_Form);
        actuatorlistTitle_label->setObjectName(QString::fromUtf8("actuatorlistTitle_label"));
        actuatorlistTitle_label->setMinimumSize(QSize(100, 18));
        actuatorlistTitle_label->setMaximumSize(QSize(100, 18));
        QFont font1;
        font1.setUnderline(true);
        actuatorlistTitle_label->setFont(font1);
        actuatorlistTitle_label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(actuatorlistTitle_label, 1, 0, 1, 1);

        testImmoLineTitel_label = new QLabel(sysTestsContent_Form);
        testImmoLineTitel_label->setObjectName(QString::fromUtf8("testImmoLineTitel_label"));
        testImmoLineTitel_label->setMinimumSize(QSize(245, 16));
        testImmoLineTitel_label->setMaximumSize(QSize(16777215, 16));
        testImmoLineTitel_label->setFont(font1);

        gridLayout->addWidget(testImmoLineTitel_label, 5, 0, 1, 1);

        testImmoLine_pushButton = new QPushButton(sysTestsContent_Form);
        testImmoLine_pushButton->setObjectName(QString::fromUtf8("testImmoLine_pushButton"));
        testImmoLine_pushButton->setMinimumSize(QSize(100, 34));
        testImmoLine_pushButton->setMaximumSize(QSize(100, 30));

        gridLayout->addWidget(testImmoLine_pushButton, 5, 2, 1, 1);

        hsep_line = new QFrame(sysTestsContent_Form);
        hsep_line->setObjectName(QString::fromUtf8("hsep_line"));
        hsep_line->setMinimumSize(QSize(0, 18));
        hsep_line->setFrameShape(QFrame::HLine);
        hsep_line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(hsep_line, 4, 0, 1, 3);

        startActuatorTest_pushButton = new QPushButton(sysTestsContent_Form);
        startActuatorTest_pushButton->setObjectName(QString::fromUtf8("startActuatorTest_pushButton"));
        startActuatorTest_pushButton->setMinimumSize(QSize(100, 34));
        startActuatorTest_pushButton->setMaximumSize(QSize(100, 30));

        gridLayout->addWidget(startActuatorTest_pushButton, 3, 2, 1, 1);

        actuatorTest_arrow_label = new QLabel(sysTestsContent_Form);
        actuatorTest_arrow_label->setObjectName(QString::fromUtf8("actuatorTest_arrow_label"));
        actuatorTest_arrow_label->setMinimumSize(QSize(65, 20));
        actuatorTest_arrow_label->setMaximumSize(QSize(16777215, 20));
        QFont font2;
        font2.setPointSize(18);
        actuatorTest_arrow_label->setFont(font2);
        actuatorTest_arrow_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(actuatorTest_arrow_label, 3, 1, 1, 1);

        actuatorTestInfo_label = new QLabel(sysTestsContent_Form);
        actuatorTestInfo_label->setObjectName(QString::fromUtf8("actuatorTestInfo_label"));
        actuatorTestInfo_label->setMinimumSize(QSize(220, 160));
        actuatorTestInfo_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        actuatorTestInfo_label->setWordWrap(true);

        gridLayout->addWidget(actuatorTestInfo_label, 2, 1, 1, 2);

        actuators_listWidget = new QListWidget(sysTestsContent_Form);
        actuators_listWidget->setObjectName(QString::fromUtf8("actuators_listWidget"));
        actuators_listWidget->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(actuators_listWidget, 2, 0, 2, 1);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 3);


        retranslateUi(sysTestsContent_Form);

        QMetaObject::connectSlotsByName(sysTestsContent_Form);
    } // setupUi

    void retranslateUi(QWidget *sysTestsContent_Form)
    {
        sysTestsContent_Form->setWindowTitle(QCoreApplication::translate("sysTestsContent_Form", "System Tests", nullptr));
        actuatorlistTitle_label->setText(QCoreApplication::translate("sysTestsContent_Form", "Actuators:", nullptr));
        testImmoLineTitel_label->setText(QCoreApplication::translate("sysTestsContent_Form", "Immobilizer Communication Line:", nullptr));
        testImmoLine_pushButton->setText(QCoreApplication::translate("sysTestsContent_Form", "Check", nullptr));
        startActuatorTest_pushButton->setText(QCoreApplication::translate("sysTestsContent_Form", "Start", nullptr));
        actuatorTest_arrow_label->setText(QCoreApplication::translate("sysTestsContent_Form", ">> >>", nullptr));
        actuatorTestInfo_label->setText(QCoreApplication::translate("sysTestsContent_Form", "NOTE:\n"
"Not all actuator tests may be available for this vehicle.\n"
"If the selected actuator is not supported, nothing will happen.\n"
"For corresponding information, please read the manufacturers repair manual.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sysTestsContent_Form: public Ui_sysTestsContent_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUCONTENT_SYSTESTS_H
