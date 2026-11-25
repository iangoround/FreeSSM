/********************************************************************************
** Form generated from reading UI file 'CUcontent_Adjustments.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUCONTENT_ADJUSTMENTS_H
#define UI_CUCONTENT_ADJUSTMENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Adjustments_Form
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *title_label;
    QTableWidget *adjustments_tableWidget;
    QLabel *nonPermanentInfo_label;

    void setupUi(QWidget *Adjustments_Form)
    {
        if (Adjustments_Form->objectName().isEmpty())
            Adjustments_Form->setObjectName(QString::fromUtf8("Adjustments_Form"));
        Adjustments_Form->resize(362, 185);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Adjustments_Form->sizePolicy().hasHeightForWidth());
        Adjustments_Form->setSizePolicy(sizePolicy);
        Adjustments_Form->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        Adjustments_Form->setFont(font);
        verticalLayout = new QVBoxLayout(Adjustments_Form);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        title_label = new QLabel(Adjustments_Form);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setMinimumSize(QSize(350, 18));
        title_label->setMaximumSize(QSize(16777215, 18));
        QFont font1;
        font1.setUnderline(true);
        title_label->setFont(font1);
        title_label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(title_label);

        adjustments_tableWidget = new QTableWidget(Adjustments_Form);
        if (adjustments_tableWidget->columnCount() < 4)
            adjustments_tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        adjustments_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        adjustments_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        adjustments_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        adjustments_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        adjustments_tableWidget->setObjectName(QString::fromUtf8("adjustments_tableWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(adjustments_tableWidget->sizePolicy().hasHeightForWidth());
        adjustments_tableWidget->setSizePolicy(sizePolicy1);
        adjustments_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        adjustments_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        adjustments_tableWidget->setRowCount(0);

        verticalLayout->addWidget(adjustments_tableWidget);

        nonPermanentInfo_label = new QLabel(Adjustments_Form);
        nonPermanentInfo_label->setObjectName(QString::fromUtf8("nonPermanentInfo_label"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(nonPermanentInfo_label->sizePolicy().hasHeightForWidth());
        nonPermanentInfo_label->setSizePolicy(sizePolicy2);
        nonPermanentInfo_label->setMinimumSize(QSize(0, 0));
        nonPermanentInfo_label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        nonPermanentInfo_label->setWordWrap(true);

        verticalLayout->addWidget(nonPermanentInfo_label);


        retranslateUi(Adjustments_Form);

        QMetaObject::connectSlotsByName(Adjustments_Form);
    } // setupUi

    void retranslateUi(QWidget *Adjustments_Form)
    {
        Adjustments_Form->setWindowTitle(QCoreApplication::translate("Adjustments_Form", "Adjustments", nullptr));
        title_label->setText(QCoreApplication::translate("Adjustments_Form", "Adjustment values:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = adjustments_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Adjustments_Form", "Title:", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = adjustments_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Adjustments_Form", "Current:", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = adjustments_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Adjustments_Form", "New:", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = adjustments_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Adjustments_Form", "Save:", nullptr));
        nonPermanentInfo_label->setText(QCoreApplication::translate("Adjustments_Form", "NOTE:   All these settings are NON-PERMANENT !\n"
"=> Clearing the ECU's memory or disconnecting from the power supply will reset all values to default !", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adjustments_Form: public Ui_Adjustments_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUCONTENT_ADJUSTMENTS_H
