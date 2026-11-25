/********************************************************************************
** Form generated from reading UI file 'ControlUnitDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLUNITDIALOG_H
#define UI_CONTROLUNITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ControlUnit_Dialog
{
public:
    QVBoxLayout *main_verticalLayout;
    QLabel *title_label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *left_verticalLayout;
    QGroupBox *information_groupBox;
    QGroupBox *selection_groupBox;
    QHBoxLayout *selection_horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *selButtons_verticalLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *exit_pushButton;
    QGroupBox *content_groupBox;
    QGridLayout *content_gridLayout;

    void setupUi(QDialog *ControlUnit_Dialog)
    {
        if (ControlUnit_Dialog->objectName().isEmpty())
            ControlUnit_Dialog->setObjectName(QString::fromUtf8("ControlUnit_Dialog"));
        ControlUnit_Dialog->setWindowModality(Qt::ApplicationModal);
        ControlUnit_Dialog->resize(600, 414);
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        ControlUnit_Dialog->setFont(font);
        main_verticalLayout = new QVBoxLayout(ControlUnit_Dialog);
        main_verticalLayout->setObjectName(QString::fromUtf8("main_verticalLayout"));
        title_label = new QLabel(ControlUnit_Dialog);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setMinimumSize(QSize(500, 32));
        title_label->setMaximumSize(QSize(16777215, 32));
        QFont font1;
        font1.setPointSize(22);
        title_label->setFont(font1);

        main_verticalLayout->addWidget(title_label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        left_verticalLayout = new QVBoxLayout();
        left_verticalLayout->setObjectName(QString::fromUtf8("left_verticalLayout"));
        left_verticalLayout->setContentsMargins(-1, -1, 0, -1);
        information_groupBox = new QGroupBox(ControlUnit_Dialog);
        information_groupBox->setObjectName(QString::fromUtf8("information_groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(information_groupBox->sizePolicy().hasHeightForWidth());
        information_groupBox->setSizePolicy(sizePolicy);
        information_groupBox->setMinimumSize(QSize(192, 0));
        information_groupBox->setMaximumSize(QSize(192, 16777215));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        information_groupBox->setFont(font2);

        left_verticalLayout->addWidget(information_groupBox);

        selection_groupBox = new QGroupBox(ControlUnit_Dialog);
        selection_groupBox->setObjectName(QString::fromUtf8("selection_groupBox"));
        sizePolicy.setHeightForWidth(selection_groupBox->sizePolicy().hasHeightForWidth());
        selection_groupBox->setSizePolicy(sizePolicy);
        selection_groupBox->setMinimumSize(QSize(192, 0));
        selection_groupBox->setMaximumSize(QSize(192, 16777215));
        selection_groupBox->setFont(font2);
        selection_groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        selection_horizontalLayout = new QHBoxLayout(selection_groupBox);
        selection_horizontalLayout->setSpacing(0);
        selection_horizontalLayout->setObjectName(QString::fromUtf8("selection_horizontalLayout"));
        selection_horizontalLayout->setContentsMargins(0, 0, 0, 10);
        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        selection_horizontalLayout->addItem(horizontalSpacer);

        selButtons_verticalLayout = new QVBoxLayout();
        selButtons_verticalLayout->setSpacing(6);
        selButtons_verticalLayout->setObjectName(QString::fromUtf8("selButtons_verticalLayout"));
        selButtons_verticalLayout->setContentsMargins(0, -1, 0, 0);
        verticalSpacer = new QSpacerItem(100, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        selButtons_verticalLayout->addItem(verticalSpacer);


        selection_horizontalLayout->addLayout(selButtons_verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        selection_horizontalLayout->addItem(horizontalSpacer_2);


        left_verticalLayout->addWidget(selection_groupBox);

        exit_pushButton = new QPushButton(ControlUnit_Dialog);
        exit_pushButton->setObjectName(QString::fromUtf8("exit_pushButton"));
        exit_pushButton->setMinimumSize(QSize(191, 32));
        exit_pushButton->setMaximumSize(QSize(192, 32));
        QFont font3;
        font3.setPointSize(10);
        exit_pushButton->setFont(font3);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/oxygen/32x32/system-shutdown.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit_pushButton->setIcon(icon);
        exit_pushButton->setIconSize(QSize(32, 32));

        left_verticalLayout->addWidget(exit_pushButton);


        horizontalLayout->addLayout(left_verticalLayout);

        content_groupBox = new QGroupBox(ControlUnit_Dialog);
        content_groupBox->setObjectName(QString::fromUtf8("content_groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(content_groupBox->sizePolicy().hasHeightForWidth());
        content_groupBox->setSizePolicy(sizePolicy1);
        content_groupBox->setMinimumSize(QSize(0, 0));
        content_groupBox->setFont(font2);
        content_gridLayout = new QGridLayout(content_groupBox);
        content_gridLayout->setContentsMargins(0, 0, 0, 0);
        content_gridLayout->setObjectName(QString::fromUtf8("content_gridLayout"));

        horizontalLayout->addWidget(content_groupBox);


        main_verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ControlUnit_Dialog);

        QMetaObject::connectSlotsByName(ControlUnit_Dialog);
    } // setupUi

    void retranslateUi(QDialog *ControlUnit_Dialog)
    {
        ControlUnit_Dialog->setWindowTitle(QCoreApplication::translate("ControlUnit_Dialog", "Control Unit", nullptr));
        title_label->setText(QCoreApplication::translate("ControlUnit_Dialog", "Control Unit", nullptr));
        information_groupBox->setTitle(QCoreApplication::translate("ControlUnit_Dialog", "Information:", nullptr));
        selection_groupBox->setTitle(QCoreApplication::translate("ControlUnit_Dialog", "Selection:", nullptr));
        exit_pushButton->setText(QCoreApplication::translate("ControlUnit_Dialog", "       &Exit Control Unit        ", nullptr));
        content_groupBox->setTitle(QCoreApplication::translate("ControlUnit_Dialog", "Content Title:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlUnit_Dialog: public Ui_ControlUnit_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLUNITDIALOG_H
