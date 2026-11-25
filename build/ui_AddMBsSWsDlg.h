/********************************************************************************
** Form generated from reading UI file 'AddMBsSWsDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMBSSWSDLG_H
#define UI_ADDMBSSWSDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddMBsSWs_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *MBsSWs_tableWidget;
    QGridLayout *gridLayout;
    QPushButton *add_pushButton;
    QPushButton *cancel_pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *AddMBsSWs_Dialog)
    {
        if (AddMBsSWs_Dialog->objectName().isEmpty())
            AddMBsSWs_Dialog->setObjectName(QString::fromUtf8("AddMBsSWs_Dialog"));
        AddMBsSWs_Dialog->setWindowModality(Qt::WindowModal);
        AddMBsSWs_Dialog->resize(600, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddMBsSWs_Dialog->sizePolicy().hasHeightForWidth());
        AddMBsSWs_Dialog->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        AddMBsSWs_Dialog->setFont(font);
        verticalLayout_2 = new QVBoxLayout(AddMBsSWs_Dialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        MBsSWs_tableWidget = new QTableWidget(AddMBsSWs_Dialog);
        if (MBsSWs_tableWidget->columnCount() < 3)
            MBsSWs_tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        MBsSWs_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        MBsSWs_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        MBsSWs_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        MBsSWs_tableWidget->setObjectName(QString::fromUtf8("MBsSWs_tableWidget"));
        QFont font1;
        font1.setPointSize(9);
        MBsSWs_tableWidget->setFont(font1);
        MBsSWs_tableWidget->setAlternatingRowColors(true);
        MBsSWs_tableWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        MBsSWs_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        MBsSWs_tableWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        MBsSWs_tableWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        MBsSWs_tableWidget->setSortingEnabled(false);
        MBsSWs_tableWidget->setRowCount(0);
        MBsSWs_tableWidget->horizontalHeader()->setVisible(true);
        MBsSWs_tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        MBsSWs_tableWidget->verticalHeader()->setVisible(true);

        verticalLayout->addWidget(MBsSWs_tableWidget);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        add_pushButton = new QPushButton(AddMBsSWs_Dialog);
        add_pushButton->setObjectName(QString::fromUtf8("add_pushButton"));
        add_pushButton->setMinimumSize(QSize(122, 32));
        add_pushButton->setMaximumSize(QSize(122, 32));
        QFont font2;
        font2.setPointSize(10);
        add_pushButton->setFont(font2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/chrystal/32x32/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_pushButton->setIcon(icon);
        add_pushButton->setIconSize(QSize(24, 24));

        gridLayout->addWidget(add_pushButton, 0, 1, 1, 1);

        cancel_pushButton = new QPushButton(AddMBsSWs_Dialog);
        cancel_pushButton->setObjectName(QString::fromUtf8("cancel_pushButton"));
        cancel_pushButton->setMinimumSize(QSize(122, 32));
        cancel_pushButton->setMaximumSize(QSize(122, 32));
        cancel_pushButton->setFont(font2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/chrystal/32x32/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancel_pushButton->setIcon(icon1);
        cancel_pushButton->setIconSize(QSize(24, 24));

        gridLayout->addWidget(cancel_pushButton, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(AddMBsSWs_Dialog);

        QMetaObject::connectSlotsByName(AddMBsSWs_Dialog);
    } // setupUi

    void retranslateUi(QDialog *AddMBsSWs_Dialog)
    {
        AddMBsSWs_Dialog->setWindowTitle(QCoreApplication::translate("AddMBsSWs_Dialog", "Add Measuring Blocks & Switches", nullptr));
        QTableWidgetItem *___qtablewidgetitem = MBsSWs_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AddMBsSWs_Dialog", "Type:", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = MBsSWs_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AddMBsSWs_Dialog", "Title:", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = MBsSWs_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("AddMBsSWs_Dialog", "Unit:", nullptr));
        add_pushButton->setText(QCoreApplication::translate("AddMBsSWs_Dialog", "       Add        ", nullptr));
        cancel_pushButton->setText(QCoreApplication::translate("AddMBsSWs_Dialog", "    Cancel       ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddMBsSWs_Dialog: public Ui_AddMBsSWs_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMBSSWSDLG_H
