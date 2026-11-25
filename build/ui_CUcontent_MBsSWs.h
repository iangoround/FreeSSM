/********************************************************************************
** Form generated from reading UI file 'CUcontent_MBsSWs.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUCONTENT_MBSSWS_H
#define UI_CUCONTENT_MBSSWS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MBSWcontent_Form
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *MBSWviews_tabWidget;
    QWidget *table_tab;
    QGridLayout *valuesTableView_gridLayout;
    QWidget *curves_tab;
    QGridLayout *curvesView_gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mbswadd_pushButton;
    QPushButton *mbswdelete_pushButton;
    QPushButton *mbswload_pushButton;
    QPushButton *mbswsave_pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *startstopmbreading_pushButton;

    void setupUi(QWidget *MBSWcontent_Form)
    {
        if (MBSWcontent_Form->objectName().isEmpty())
            MBSWcontent_Form->setObjectName(QString::fromUtf8("MBSWcontent_Form"));
        MBSWcontent_Form->resize(500, 400);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MBSWcontent_Form->sizePolicy().hasHeightForWidth());
        MBSWcontent_Form->setSizePolicy(sizePolicy);
        MBSWcontent_Form->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        MBSWcontent_Form->setFont(font);
        verticalLayout = new QVBoxLayout(MBSWcontent_Form);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        MBSWviews_tabWidget = new QTabWidget(MBSWcontent_Form);
        MBSWviews_tabWidget->setObjectName(QString::fromUtf8("MBSWviews_tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(MBSWviews_tabWidget->sizePolicy().hasHeightForWidth());
        MBSWviews_tabWidget->setSizePolicy(sizePolicy1);
        table_tab = new QWidget();
        table_tab->setObjectName(QString::fromUtf8("table_tab"));
        valuesTableView_gridLayout = new QGridLayout(table_tab);
        valuesTableView_gridLayout->setSpacing(11);
        valuesTableView_gridLayout->setContentsMargins(0, 0, 0, 0);
        valuesTableView_gridLayout->setObjectName(QString::fromUtf8("valuesTableView_gridLayout"));
        MBSWviews_tabWidget->addTab(table_tab, QString());
        curves_tab = new QWidget();
        curves_tab->setObjectName(QString::fromUtf8("curves_tab"));
        curvesView_gridLayout = new QGridLayout(curves_tab);
        curvesView_gridLayout->setSpacing(11);
        curvesView_gridLayout->setContentsMargins(0, 0, 0, 0);
        curvesView_gridLayout->setObjectName(QString::fromUtf8("curvesView_gridLayout"));
        MBSWviews_tabWidget->addTab(curves_tab, QString());

        verticalLayout->addWidget(MBSWviews_tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        mbswadd_pushButton = new QPushButton(MBSWcontent_Form);
        mbswadd_pushButton->setObjectName(QString::fromUtf8("mbswadd_pushButton"));
        mbswadd_pushButton->setMinimumSize(QSize(40, 34));
        mbswadd_pushButton->setMaximumSize(QSize(40, 34));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/chrystal/32x32/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        mbswadd_pushButton->setIcon(icon);
        mbswadd_pushButton->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(mbswadd_pushButton);

        mbswdelete_pushButton = new QPushButton(MBSWcontent_Form);
        mbswdelete_pushButton->setObjectName(QString::fromUtf8("mbswdelete_pushButton"));
        mbswdelete_pushButton->setMinimumSize(QSize(40, 34));
        mbswdelete_pushButton->setMaximumSize(QSize(40, 34));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/chrystal/32x32/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        mbswdelete_pushButton->setIcon(icon1);
        mbswdelete_pushButton->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(mbswdelete_pushButton);

        mbswload_pushButton = new QPushButton(MBSWcontent_Form);
        mbswload_pushButton->setObjectName(QString::fromUtf8("mbswload_pushButton"));
        mbswload_pushButton->setMinimumSize(QSize(40, 34));
        mbswload_pushButton->setMaximumSize(QSize(40, 34));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/chrystal/32x32/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        mbswload_pushButton->setIcon(icon2);
        mbswload_pushButton->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(mbswload_pushButton);

        mbswsave_pushButton = new QPushButton(MBSWcontent_Form);
        mbswsave_pushButton->setObjectName(QString::fromUtf8("mbswsave_pushButton"));
        mbswsave_pushButton->setMinimumSize(QSize(40, 34));
        mbswsave_pushButton->setMaximumSize(QSize(40, 34));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/chrystal/32x32/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        mbswsave_pushButton->setIcon(icon3);
        mbswsave_pushButton->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(mbswsave_pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        startstopmbreading_pushButton = new QPushButton(MBSWcontent_Form);
        startstopmbreading_pushButton->setObjectName(QString::fromUtf8("startstopmbreading_pushButton"));
        startstopmbreading_pushButton->setMinimumSize(QSize(72, 34));
        startstopmbreading_pushButton->setMaximumSize(QSize(72, 34));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/chrystal/32x32/player_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        startstopmbreading_pushButton->setIcon(icon4);
        startstopmbreading_pushButton->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(startstopmbreading_pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(MBSWcontent_Form);

        MBSWviews_tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MBSWcontent_Form);
    } // setupUi

    void retranslateUi(QWidget *MBSWcontent_Form)
    {
        MBSWcontent_Form->setWindowTitle(QCoreApplication::translate("MBSWcontent_Form", "Measuring Blocks", nullptr));
        MBSWviews_tabWidget->setTabText(MBSWviews_tabWidget->indexOf(table_tab), QCoreApplication::translate("MBSWcontent_Form", "Values Table", nullptr));
        MBSWviews_tabWidget->setTabText(MBSWviews_tabWidget->indexOf(curves_tab), QCoreApplication::translate("MBSWcontent_Form", "Curve Plots", nullptr));
        mbswadd_pushButton->setText(QString());
        mbswdelete_pushButton->setText(QString());
        mbswload_pushButton->setText(QString());
        mbswsave_pushButton->setText(QString());
        startstopmbreading_pushButton->setText(QCoreApplication::translate("MBSWcontent_Form", " Start  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MBSWcontent_Form: public Ui_MBSWcontent_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUCONTENT_MBSSWS_H
