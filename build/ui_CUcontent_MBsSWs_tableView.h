/********************************************************************************
** Form generated from reading UI file 'CUcontent_MBsSWs_tableView.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUCONTENT_MBSSWS_TABLEVIEW_H
#define UI_CUCONTENT_MBSSWS_TABLEVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MBSWtable_Form
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *selectedMBsSWs_tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mbswmovedown_pushButton;
    QPushButton *mbswmoveup_pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *showMin_pushButton;
    QPushButton *showMax_pushButton;
    QPushButton *resetMinMax_pushButton;

    void setupUi(QWidget *MBSWtable_Form)
    {
        if (MBSWtable_Form->objectName().isEmpty())
            MBSWtable_Form->setObjectName(QString::fromUtf8("MBSWtable_Form"));
        MBSWtable_Form->resize(475, 200);
        MBSWtable_Form->setMinimumSize(QSize(475, 200));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(9);
        MBSWtable_Form->setFont(font);
        verticalLayout = new QVBoxLayout(MBSWtable_Form);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        selectedMBsSWs_tableWidget = new QTableWidget(MBSWtable_Form);
        if (selectedMBsSWs_tableWidget->columnCount() < 6)
            selectedMBsSWs_tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        selectedMBsSWs_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        selectedMBsSWs_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        selectedMBsSWs_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        selectedMBsSWs_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        selectedMBsSWs_tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        selectedMBsSWs_tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        selectedMBsSWs_tableWidget->setObjectName(QString::fromUtf8("selectedMBsSWs_tableWidget"));
        selectedMBsSWs_tableWidget->setMinimumSize(QSize(382, 123));
        selectedMBsSWs_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        selectedMBsSWs_tableWidget->setAlternatingRowColors(true);
        selectedMBsSWs_tableWidget->setSelectionMode(QAbstractItemView::ContiguousSelection);
        selectedMBsSWs_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(selectedMBsSWs_tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 8, -1, 0);
        mbswmovedown_pushButton = new QPushButton(MBSWtable_Form);
        mbswmovedown_pushButton->setObjectName(QString::fromUtf8("mbswmovedown_pushButton"));
        mbswmovedown_pushButton->setMinimumSize(QSize(40, 34));
        mbswmovedown_pushButton->setMaximumSize(QSize(40, 34));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/chrystal/32x32/1downarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        mbswmovedown_pushButton->setIcon(icon);
        mbswmovedown_pushButton->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(mbswmovedown_pushButton);

        mbswmoveup_pushButton = new QPushButton(MBSWtable_Form);
        mbswmoveup_pushButton->setObjectName(QString::fromUtf8("mbswmoveup_pushButton"));
        mbswmoveup_pushButton->setMinimumSize(QSize(40, 34));
        mbswmoveup_pushButton->setMaximumSize(QSize(40, 34));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/chrystal/32x32/1uparrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        mbswmoveup_pushButton->setIcon(icon1);
        mbswmoveup_pushButton->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(mbswmoveup_pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        showMin_pushButton = new QPushButton(MBSWtable_Form);
        showMin_pushButton->setObjectName(QString::fromUtf8("showMin_pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(showMin_pushButton->sizePolicy().hasHeightForWidth());
        showMin_pushButton->setSizePolicy(sizePolicy);
        showMin_pushButton->setMinimumSize(QSize(40, 34));
        showMin_pushButton->setMaximumSize(QSize(40, 34));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/freessm/24x24/show-min-value.png"), QSize(), QIcon::Normal, QIcon::Off);
        showMin_pushButton->setIcon(icon2);
        showMin_pushButton->setIconSize(QSize(24, 24));
        showMin_pushButton->setCheckable(true);

        horizontalLayout_2->addWidget(showMin_pushButton);

        showMax_pushButton = new QPushButton(MBSWtable_Form);
        showMax_pushButton->setObjectName(QString::fromUtf8("showMax_pushButton"));
        showMax_pushButton->setMinimumSize(QSize(40, 34));
        showMax_pushButton->setMaximumSize(QSize(40, 34));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/freessm/24x24/show-max-value.png"), QSize(), QIcon::Normal, QIcon::Off);
        showMax_pushButton->setIcon(icon3);
        showMax_pushButton->setIconSize(QSize(24, 24));
        showMax_pushButton->setCheckable(true);

        horizontalLayout_2->addWidget(showMax_pushButton);

        resetMinMax_pushButton = new QPushButton(MBSWtable_Form);
        resetMinMax_pushButton->setObjectName(QString::fromUtf8("resetMinMax_pushButton"));
        sizePolicy.setHeightForWidth(resetMinMax_pushButton->sizePolicy().hasHeightForWidth());
        resetMinMax_pushButton->setSizePolicy(sizePolicy);
        resetMinMax_pushButton->setMinimumSize(QSize(40, 34));
        resetMinMax_pushButton->setMaximumSize(QSize(40, 34));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/freessm/24x24/reset-min-max.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetMinMax_pushButton->setIcon(icon4);
        resetMinMax_pushButton->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(resetMinMax_pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(MBSWtable_Form);

        QMetaObject::connectSlotsByName(MBSWtable_Form);
    } // setupUi

    void retranslateUi(QWidget *MBSWtable_Form)
    {
        MBSWtable_Form->setWindowTitle(QCoreApplication::translate("MBSWtable_Form", "Measuring Blocks", nullptr));
        QTableWidgetItem *___qtablewidgetitem = selectedMBsSWs_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MBSWtable_Form", "Type:", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = selectedMBsSWs_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MBSWtable_Form", "Title:", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = selectedMBsSWs_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MBSWtable_Form", "Min. Value:", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = selectedMBsSWs_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MBSWtable_Form", "Current Value:", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = selectedMBsSWs_tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MBSWtable_Form", "Max. Value:", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = selectedMBsSWs_tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MBSWtable_Form", "Unit:", nullptr));
        mbswmovedown_pushButton->setText(QString());
        mbswmoveup_pushButton->setText(QString());
        showMin_pushButton->setText(QString());
        showMax_pushButton->setText(QString());
        resetMinMax_pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MBSWtable_Form: public Ui_MBSWtable_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUCONTENT_MBSSWS_TABLEVIEW_H
