/********************************************************************************
** Form generated from reading UI file 'CUcontent_DCs_engine.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUCONTENT_DCS_ENGINE_H
#define UI_CUCONTENT_DCS_ENGINE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_engineDCcontent_Form
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *DCgroups_tabWidget;
    QWidget *engineDTCs_tab;
    QVBoxLayout *engineDTCsTab_verticalLayout;
    QLabel *currOrTempDTCsTitle_label;
    QTableWidget *currOrTempDTCs_tableWidget;
    QLabel *histOrMemDTCsTitle_label;
    QTableWidget *histOrMemDTCs_tableWidget;
    QWidget *CCCCs_tab;
    QVBoxLayout *CCCCsTab_verticalLayout;
    QLabel *latestCCCCsTitle_label;
    QTableWidget *latestCCCCs_tableWidget;
    QLabel *memorizedCCCCsTitle_label;
    QTableWidget *memorizedCCCCs_tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *DCclearingInfo_label;
    QPushButton *printDClist_pushButton;

    void setupUi(QWidget *engineDCcontent_Form)
    {
        if (engineDCcontent_Form->objectName().isEmpty())
            engineDCcontent_Form->setObjectName(QString::fromUtf8("engineDCcontent_Form"));
        engineDCcontent_Form->resize(515, 400);
        engineDCcontent_Form->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setBold(false);
        font.setWeight(50);
        engineDCcontent_Form->setFont(font);
        verticalLayout = new QVBoxLayout(engineDCcontent_Form);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        DCgroups_tabWidget = new QTabWidget(engineDCcontent_Form);
        DCgroups_tabWidget->setObjectName(QString::fromUtf8("DCgroups_tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DCgroups_tabWidget->sizePolicy().hasHeightForWidth());
        DCgroups_tabWidget->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        DCgroups_tabWidget->setFont(font1);
        engineDTCs_tab = new QWidget();
        engineDTCs_tab->setObjectName(QString::fromUtf8("engineDTCs_tab"));
        QFont font2;
        font2.setPointSize(9);
        engineDTCs_tab->setFont(font2);
        engineDTCsTab_verticalLayout = new QVBoxLayout(engineDTCs_tab);
        engineDTCsTab_verticalLayout->setSpacing(4);
        engineDTCsTab_verticalLayout->setObjectName(QString::fromUtf8("engineDTCsTab_verticalLayout"));
        currOrTempDTCsTitle_label = new QLabel(engineDTCs_tab);
        currOrTempDTCsTitle_label->setObjectName(QString::fromUtf8("currOrTempDTCsTitle_label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(currOrTempDTCsTitle_label->sizePolicy().hasHeightForWidth());
        currOrTempDTCsTitle_label->setSizePolicy(sizePolicy1);
        currOrTempDTCsTitle_label->setMinimumSize(QSize(0, 20));
        currOrTempDTCsTitle_label->setMaximumSize(QSize(16777215, 20));
        QFont font3;
        font3.setUnderline(true);
        currOrTempDTCsTitle_label->setFont(font3);
        currOrTempDTCsTitle_label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        engineDTCsTab_verticalLayout->addWidget(currOrTempDTCsTitle_label);

        currOrTempDTCs_tableWidget = new QTableWidget(engineDTCs_tab);
        if (currOrTempDTCs_tableWidget->columnCount() < 2)
            currOrTempDTCs_tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        currOrTempDTCs_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        currOrTempDTCs_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        currOrTempDTCs_tableWidget->setObjectName(QString::fromUtf8("currOrTempDTCs_tableWidget"));
        currOrTempDTCs_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        currOrTempDTCs_tableWidget->setAlternatingRowColors(true);

        engineDTCsTab_verticalLayout->addWidget(currOrTempDTCs_tableWidget);

        histOrMemDTCsTitle_label = new QLabel(engineDTCs_tab);
        histOrMemDTCsTitle_label->setObjectName(QString::fromUtf8("histOrMemDTCsTitle_label"));
        sizePolicy1.setHeightForWidth(histOrMemDTCsTitle_label->sizePolicy().hasHeightForWidth());
        histOrMemDTCsTitle_label->setSizePolicy(sizePolicy1);
        histOrMemDTCsTitle_label->setMinimumSize(QSize(0, 25));
        histOrMemDTCsTitle_label->setMaximumSize(QSize(16777215, 20));
        histOrMemDTCsTitle_label->setFont(font3);
        histOrMemDTCsTitle_label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        engineDTCsTab_verticalLayout->addWidget(histOrMemDTCsTitle_label);

        histOrMemDTCs_tableWidget = new QTableWidget(engineDTCs_tab);
        if (histOrMemDTCs_tableWidget->columnCount() < 2)
            histOrMemDTCs_tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        histOrMemDTCs_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        histOrMemDTCs_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        histOrMemDTCs_tableWidget->setObjectName(QString::fromUtf8("histOrMemDTCs_tableWidget"));
        histOrMemDTCs_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        histOrMemDTCs_tableWidget->setAlternatingRowColors(true);

        engineDTCsTab_verticalLayout->addWidget(histOrMemDTCs_tableWidget);

        DCgroups_tabWidget->addTab(engineDTCs_tab, QString());
        CCCCs_tab = new QWidget();
        CCCCs_tab->setObjectName(QString::fromUtf8("CCCCs_tab"));
        CCCCs_tab->setFont(font2);
        CCCCsTab_verticalLayout = new QVBoxLayout(CCCCs_tab);
        CCCCsTab_verticalLayout->setSpacing(4);
        CCCCsTab_verticalLayout->setObjectName(QString::fromUtf8("CCCCsTab_verticalLayout"));
        latestCCCCsTitle_label = new QLabel(CCCCs_tab);
        latestCCCCsTitle_label->setObjectName(QString::fromUtf8("latestCCCCsTitle_label"));
        sizePolicy1.setHeightForWidth(latestCCCCsTitle_label->sizePolicy().hasHeightForWidth());
        latestCCCCsTitle_label->setSizePolicy(sizePolicy1);
        latestCCCCsTitle_label->setMinimumSize(QSize(0, 20));
        latestCCCCsTitle_label->setMaximumSize(QSize(16777215, 20));
        latestCCCCsTitle_label->setFont(font3);
        latestCCCCsTitle_label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        CCCCsTab_verticalLayout->addWidget(latestCCCCsTitle_label);

        latestCCCCs_tableWidget = new QTableWidget(CCCCs_tab);
        if (latestCCCCs_tableWidget->columnCount() < 2)
            latestCCCCs_tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        latestCCCCs_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        latestCCCCs_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        latestCCCCs_tableWidget->setObjectName(QString::fromUtf8("latestCCCCs_tableWidget"));
        latestCCCCs_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        latestCCCCs_tableWidget->setAlternatingRowColors(true);

        CCCCsTab_verticalLayout->addWidget(latestCCCCs_tableWidget);

        memorizedCCCCsTitle_label = new QLabel(CCCCs_tab);
        memorizedCCCCsTitle_label->setObjectName(QString::fromUtf8("memorizedCCCCsTitle_label"));
        sizePolicy1.setHeightForWidth(memorizedCCCCsTitle_label->sizePolicy().hasHeightForWidth());
        memorizedCCCCsTitle_label->setSizePolicy(sizePolicy1);
        memorizedCCCCsTitle_label->setMinimumSize(QSize(0, 25));
        memorizedCCCCsTitle_label->setMaximumSize(QSize(16777215, 20));
        memorizedCCCCsTitle_label->setFont(font3);
        memorizedCCCCsTitle_label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        CCCCsTab_verticalLayout->addWidget(memorizedCCCCsTitle_label);

        memorizedCCCCs_tableWidget = new QTableWidget(CCCCs_tab);
        if (memorizedCCCCs_tableWidget->columnCount() < 2)
            memorizedCCCCs_tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        memorizedCCCCs_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        memorizedCCCCs_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        memorizedCCCCs_tableWidget->setObjectName(QString::fromUtf8("memorizedCCCCs_tableWidget"));
        memorizedCCCCs_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        memorizedCCCCs_tableWidget->setAlternatingRowColors(true);

        CCCCsTab_verticalLayout->addWidget(memorizedCCCCs_tableWidget);

        DCgroups_tabWidget->addTab(CCCCs_tab, QString());

        verticalLayout->addWidget(DCgroups_tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        DCclearingInfo_label = new QLabel(engineDCcontent_Form);
        DCclearingInfo_label->setObjectName(QString::fromUtf8("DCclearingInfo_label"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(DCclearingInfo_label->sizePolicy().hasHeightForWidth());
        DCclearingInfo_label->setSizePolicy(sizePolicy2);
        DCclearingInfo_label->setFont(font2);

        horizontalLayout->addWidget(DCclearingInfo_label);

        printDClist_pushButton = new QPushButton(engineDCcontent_Form);
        printDClist_pushButton->setObjectName(QString::fromUtf8("printDClist_pushButton"));
        printDClist_pushButton->setMinimumSize(QSize(90, 34));
        printDClist_pushButton->setMaximumSize(QSize(90, 34));
        printDClist_pushButton->setFont(font2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/chrystal/32x32/fileprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        printDClist_pushButton->setIcon(icon);
        printDClist_pushButton->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(printDClist_pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(engineDCcontent_Form);

        DCgroups_tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(engineDCcontent_Form);
    } // setupUi

    void retranslateUi(QWidget *engineDCcontent_Form)
    {
        engineDCcontent_Form->setWindowTitle(QCoreApplication::translate("engineDCcontent_Form", "Diagnostic Codes", nullptr));
        currOrTempDTCsTitle_label->setText(QCoreApplication::translate("engineDCcontent_Form", "Current/Temporary Diagnostic Trouble Code(s):", nullptr));
        QTableWidgetItem *___qtablewidgetitem = currOrTempDTCs_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("engineDCcontent_Form", "Code:", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = currOrTempDTCs_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("engineDCcontent_Form", "Description:", nullptr));
        histOrMemDTCsTitle_label->setText(QCoreApplication::translate("engineDCcontent_Form", "Historic/Memorized Diagnostic Trouble Code(s):", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = histOrMemDTCs_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("engineDCcontent_Form", "Code:", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = histOrMemDTCs_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("engineDCcontent_Form", "Description:", nullptr));
        DCgroups_tabWidget->setTabText(DCgroups_tabWidget->indexOf(engineDTCs_tab), QCoreApplication::translate("engineDCcontent_Form", "Engine", nullptr));
        latestCCCCsTitle_label->setText(QCoreApplication::translate("engineDCcontent_Form", "Latest Cancel Code(s):", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = latestCCCCs_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("engineDCcontent_Form", "Code:", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = latestCCCCs_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("engineDCcontent_Form", "Description:", nullptr));
        memorizedCCCCsTitle_label->setText(QCoreApplication::translate("engineDCcontent_Form", "Memorized Cancel Code(s):", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = memorizedCCCCs_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("engineDCcontent_Form", "Code:", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = memorizedCCCCs_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("engineDCcontent_Form", "Description:", nullptr));
        DCgroups_tabWidget->setTabText(DCgroups_tabWidget->indexOf(CCCCs_tab), QCoreApplication::translate("engineDCcontent_Form", "Cruise Control", nullptr));
        DCclearingInfo_label->setText(QCoreApplication::translate("engineDCcontent_Form", "=> Call ''Clear Memory'' from the ''Selection'' menu to erease all DTCs.", nullptr));
        printDClist_pushButton->setText(QCoreApplication::translate("engineDCcontent_Form", "    Print    ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class engineDCcontent_Form: public Ui_engineDCcontent_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUCONTENT_DCS_ENGINE_H
