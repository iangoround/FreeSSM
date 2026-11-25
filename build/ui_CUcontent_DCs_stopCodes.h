/********************************************************************************
** Form generated from reading UI file 'CUcontent_DCs_stopCodes.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUCONTENT_DCS_STOPCODES_H
#define UI_CUCONTENT_DCS_STOPCODES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DCcontent_stopCodes_Form
{
public:
    QVBoxLayout *main_verticalLayout;
    QVBoxLayout *tables_verticalLayout;
    QLabel *currOrTempDTCsTitle_label;
    QTableWidget *currOrTempDTCs_tableWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *printDClist_pushButton;

    void setupUi(QWidget *DCcontent_stopCodes_Form)
    {
        if (DCcontent_stopCodes_Form->objectName().isEmpty())
            DCcontent_stopCodes_Form->setObjectName(QString::fromUtf8("DCcontent_stopCodes_Form"));
        DCcontent_stopCodes_Form->resize(500, 400);
        DCcontent_stopCodes_Form->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        DCcontent_stopCodes_Form->setFont(font);
        main_verticalLayout = new QVBoxLayout(DCcontent_stopCodes_Form);
        main_verticalLayout->setObjectName(QString::fromUtf8("main_verticalLayout"));
        main_verticalLayout->setContentsMargins(-1, 0, -1, -1);
        tables_verticalLayout = new QVBoxLayout();
        tables_verticalLayout->setSpacing(4);
        tables_verticalLayout->setObjectName(QString::fromUtf8("tables_verticalLayout"));
        tables_verticalLayout->setContentsMargins(-1, 0, -1, 0);
        currOrTempDTCsTitle_label = new QLabel(DCcontent_stopCodes_Form);
        currOrTempDTCsTitle_label->setObjectName(QString::fromUtf8("currOrTempDTCsTitle_label"));
        currOrTempDTCsTitle_label->setMinimumSize(QSize(280, 20));
        currOrTempDTCsTitle_label->setMaximumSize(QSize(280, 20));
        QFont font1;
        font1.setUnderline(true);
        currOrTempDTCsTitle_label->setFont(font1);
        currOrTempDTCsTitle_label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        tables_verticalLayout->addWidget(currOrTempDTCsTitle_label);

        currOrTempDTCs_tableWidget = new QTableWidget(DCcontent_stopCodes_Form);
        if (currOrTempDTCs_tableWidget->columnCount() < 2)
            currOrTempDTCs_tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        currOrTempDTCs_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        currOrTempDTCs_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        currOrTempDTCs_tableWidget->setObjectName(QString::fromUtf8("currOrTempDTCs_tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(currOrTempDTCs_tableWidget->sizePolicy().hasHeightForWidth());
        currOrTempDTCs_tableWidget->setSizePolicy(sizePolicy);
        currOrTempDTCs_tableWidget->setMinimumSize(QSize(0, 0));
        currOrTempDTCs_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        currOrTempDTCs_tableWidget->setAlternatingRowColors(true);
        currOrTempDTCs_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        tables_verticalLayout->addWidget(currOrTempDTCs_tableWidget);


        main_verticalLayout->addLayout(tables_verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        printDClist_pushButton = new QPushButton(DCcontent_stopCodes_Form);
        printDClist_pushButton->setObjectName(QString::fromUtf8("printDClist_pushButton"));
        printDClist_pushButton->setMinimumSize(QSize(90, 34));
        printDClist_pushButton->setMaximumSize(QSize(90, 34));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/chrystal/32x32/fileprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        printDClist_pushButton->setIcon(icon);
        printDClist_pushButton->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(printDClist_pushButton);


        main_verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DCcontent_stopCodes_Form);

        QMetaObject::connectSlotsByName(DCcontent_stopCodes_Form);
    } // setupUi

    void retranslateUi(QWidget *DCcontent_stopCodes_Form)
    {
        DCcontent_stopCodes_Form->setWindowTitle(QCoreApplication::translate("DCcontent_stopCodes_Form", "Diagnostic Codes", nullptr));
        currOrTempDTCsTitle_label->setText(QCoreApplication::translate("DCcontent_stopCodes_Form", "Current Stop Code(s):", nullptr));
        QTableWidgetItem *___qtablewidgetitem = currOrTempDTCs_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DCcontent_stopCodes_Form", "Code:", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = currOrTempDTCs_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DCcontent_stopCodes_Form", "Description:", nullptr));
        printDClist_pushButton->setText(QCoreApplication::translate("DCcontent_stopCodes_Form", "    Print    ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DCcontent_stopCodes_Form: public Ui_DCcontent_stopCodes_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUCONTENT_DCS_STOPCODES_H
