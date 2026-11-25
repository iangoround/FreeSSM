/********************************************************************************
** Form generated from reading UI file 'CUcontent_DCs_twoMemories.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUCONTENT_DCS_TWOMEMORIES_H
#define UI_CUCONTENT_DCS_TWOMEMORIES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DCcontent_twoMemories_Form
{
public:
    QVBoxLayout *main_verticalLayout;
    QVBoxLayout *tables_verticalLayout;
    QLabel *currOrTempDTCsTitle_label;
    QTableWidget *currOrTempDTCs_tableWidget;
    QLabel *histOrMemDTCsTitle_label;
    QTableWidget *histOrMemDTCs_tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *DCclearingInfo_label;
    QPushButton *printDClist_pushButton;

    void setupUi(QWidget *DCcontent_twoMemories_Form)
    {
        if (DCcontent_twoMemories_Form->objectName().isEmpty())
            DCcontent_twoMemories_Form->setObjectName(QString::fromUtf8("DCcontent_twoMemories_Form"));
        DCcontent_twoMemories_Form->resize(515, 400);
        DCcontent_twoMemories_Form->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        DCcontent_twoMemories_Form->setFont(font);
        main_verticalLayout = new QVBoxLayout(DCcontent_twoMemories_Form);
        main_verticalLayout->setObjectName(QString::fromUtf8("main_verticalLayout"));
        main_verticalLayout->setContentsMargins(-1, 0, -1, -1);
        tables_verticalLayout = new QVBoxLayout();
        tables_verticalLayout->setSpacing(4);
        tables_verticalLayout->setObjectName(QString::fromUtf8("tables_verticalLayout"));
        tables_verticalLayout->setContentsMargins(-1, 0, -1, 0);
        currOrTempDTCsTitle_label = new QLabel(DCcontent_twoMemories_Form);
        currOrTempDTCsTitle_label->setObjectName(QString::fromUtf8("currOrTempDTCsTitle_label"));
        currOrTempDTCsTitle_label->setMinimumSize(QSize(280, 20));
        currOrTempDTCsTitle_label->setMaximumSize(QSize(280, 20));
        QFont font1;
        font1.setUnderline(true);
        currOrTempDTCsTitle_label->setFont(font1);
        currOrTempDTCsTitle_label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        tables_verticalLayout->addWidget(currOrTempDTCsTitle_label);

        currOrTempDTCs_tableWidget = new QTableWidget(DCcontent_twoMemories_Form);
        if (currOrTempDTCs_tableWidget->columnCount() < 2)
            currOrTempDTCs_tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        currOrTempDTCs_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        currOrTempDTCs_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        currOrTempDTCs_tableWidget->setObjectName(QString::fromUtf8("currOrTempDTCs_tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(currOrTempDTCs_tableWidget->sizePolicy().hasHeightForWidth());
        currOrTempDTCs_tableWidget->setSizePolicy(sizePolicy);
        currOrTempDTCs_tableWidget->setMinimumSize(QSize(0, 0));
        currOrTempDTCs_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        currOrTempDTCs_tableWidget->setAlternatingRowColors(true);
        currOrTempDTCs_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        tables_verticalLayout->addWidget(currOrTempDTCs_tableWidget);

        histOrMemDTCsTitle_label = new QLabel(DCcontent_twoMemories_Form);
        histOrMemDTCsTitle_label->setObjectName(QString::fromUtf8("histOrMemDTCsTitle_label"));
        histOrMemDTCsTitle_label->setMinimumSize(QSize(280, 25));
        histOrMemDTCsTitle_label->setMaximumSize(QSize(280, 25));
        histOrMemDTCsTitle_label->setFont(font1);
        histOrMemDTCsTitle_label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        tables_verticalLayout->addWidget(histOrMemDTCsTitle_label);

        histOrMemDTCs_tableWidget = new QTableWidget(DCcontent_twoMemories_Form);
        if (histOrMemDTCs_tableWidget->columnCount() < 2)
            histOrMemDTCs_tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        histOrMemDTCs_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        histOrMemDTCs_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        histOrMemDTCs_tableWidget->setObjectName(QString::fromUtf8("histOrMemDTCs_tableWidget"));
        sizePolicy.setHeightForWidth(histOrMemDTCs_tableWidget->sizePolicy().hasHeightForWidth());
        histOrMemDTCs_tableWidget->setSizePolicy(sizePolicy);
        histOrMemDTCs_tableWidget->setMinimumSize(QSize(0, 0));
        histOrMemDTCs_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        histOrMemDTCs_tableWidget->setAlternatingRowColors(true);
        histOrMemDTCs_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        tables_verticalLayout->addWidget(histOrMemDTCs_tableWidget);


        main_verticalLayout->addLayout(tables_verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        DCclearingInfo_label = new QLabel(DCcontent_twoMemories_Form);
        DCclearingInfo_label->setObjectName(QString::fromUtf8("DCclearingInfo_label"));

        horizontalLayout->addWidget(DCclearingInfo_label);

        printDClist_pushButton = new QPushButton(DCcontent_twoMemories_Form);
        printDClist_pushButton->setObjectName(QString::fromUtf8("printDClist_pushButton"));
        printDClist_pushButton->setMinimumSize(QSize(90, 34));
        printDClist_pushButton->setMaximumSize(QSize(90, 34));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/chrystal/32x32/fileprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        printDClist_pushButton->setIcon(icon);
        printDClist_pushButton->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(printDClist_pushButton);


        main_verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DCcontent_twoMemories_Form);

        QMetaObject::connectSlotsByName(DCcontent_twoMemories_Form);
    } // setupUi

    void retranslateUi(QWidget *DCcontent_twoMemories_Form)
    {
        DCcontent_twoMemories_Form->setWindowTitle(QCoreApplication::translate("DCcontent_twoMemories_Form", "Diagnostic Codes", nullptr));
        currOrTempDTCsTitle_label->setText(QCoreApplication::translate("DCcontent_twoMemories_Form", "Current/Temporary Diagnostic Trouble Code(s):", nullptr));
        QTableWidgetItem *___qtablewidgetitem = currOrTempDTCs_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DCcontent_twoMemories_Form", "Code:", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = currOrTempDTCs_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DCcontent_twoMemories_Form", "Description:", nullptr));
        histOrMemDTCsTitle_label->setText(QCoreApplication::translate("DCcontent_twoMemories_Form", "Historic/Memorized Diagnostic Trouble Code(s):", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = histOrMemDTCs_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DCcontent_twoMemories_Form", "Code:", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = histOrMemDTCs_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DCcontent_twoMemories_Form", "Description:", nullptr));
        DCclearingInfo_label->setText(QCoreApplication::translate("DCcontent_twoMemories_Form", "=> Call ''Clear Memory'' from the ''Selection'' menu to erease all DTCs.", nullptr));
        printDClist_pushButton->setText(QCoreApplication::translate("DCcontent_twoMemories_Form", "    Print    ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DCcontent_twoMemories_Form: public Ui_DCcontent_twoMemories_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUCONTENT_DCS_TWOMEMORIES_H
