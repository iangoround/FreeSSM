/********************************************************************************
** Form generated from reading UI file 'About.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_about_Dialog
{
public:
    QLabel *progversion_label;
    QPushButton *close_pushButton;
    QTabWidget *main_tabWidget;
    QWidget *about_tab;
    QLabel *aboutcontent_label;
    QWidget *features_tab;
    QLabel *models_label;
    QLabel *modelstitle_label;
    QLabel *controlunits_label;
    QLabel *dtcsinfo_label;
    QLabel *nrofActuatortests_label;
    QLabel *nrofadjustmentvalues_label;
    QLabel *systemtestsinfo_label;
    QLabel *adjustmentsinfo_label;
    QLabel *controlunitstitle_label;
    QLabel *systemteststitle_label;
    QLabel *nrofsupportedDTCs_label;
    QLabel *dtcstitle_label;
    QLabel *adjustmentstitle_label;
    QLabel *mbsswsinfo_label;
    QLabel *nrofsupportedMBsSWs_label;
    QLabel *mbstitle_label;
    QLabel *infoobd2_label;
    QLabel *languagestitle_label;
    QLabel *languages_label;
    QLabel *supportedOStitle_label;
    QLabel *supportedOS_label;
    QWidget *credits_tab;
    QLabel *author_label;
    QLabel *homepageURL_label;
    QLabel *homepagetitle_label;
    QLabel *qt4credits_label;
    QLabel *iconcredits_label;
    QLabel *fontcredits_label;
    QLabel *contributors_label;
    QLabel *contributorslist_label;
    QLabel *tinyxmlcredits_label;
    QWidget *licenses_tab;
    QLabel *qt4license_label;
    QLabel *fontlicense_label;
    QLabel *gplinfo_label;
    QLabel *crystaliconslicense_label;
    QLabel *oxygeniconslicense_label;
    QLabel *tinyxmllicense_label;
    QLabel *fontlicensedoc_label;
    QLabel *oxygeniconslicensedoc_label;
    QLabel *qt4licensedoc_label;
    QLabel *tinyxmllicensedoc_label;
    QLabel *crystaliconslicensedoc_label;
    QLabel *thirdpartylicenses_label;
    QPushButton *showlicense_pushButton;
    QWidget *changelog_tab;
    QTextBrowser *changelog_textBrowser;
    QLabel *subtitle_label;
    QLabel *trademarksInfo_label;

    void setupUi(QDialog *about_Dialog)
    {
        if (about_Dialog->objectName().isEmpty())
            about_Dialog->setObjectName(QString::fromUtf8("about_Dialog"));
        about_Dialog->setWindowModality(Qt::WindowModal);
        about_Dialog->resize(600, 545);
        about_Dialog->setMinimumSize(QSize(600, 545));
        about_Dialog->setMaximumSize(QSize(600, 545));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        about_Dialog->setFont(font);
        progversion_label = new QLabel(about_Dialog);
        progversion_label->setObjectName(QString::fromUtf8("progversion_label"));
        progversion_label->setGeometry(QRect(20, 7, 400, 34));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        progversion_label->setFont(font1);
        progversion_label->setText(QString::fromUtf8("FreeSSM"));
        close_pushButton = new QPushButton(about_Dialog);
        close_pushButton->setObjectName(QString::fromUtf8("close_pushButton"));
        close_pushButton->setGeometry(QRect(229, 502, 141, 31));
        QFont font2;
        font2.setPointSize(10);
        close_pushButton->setFont(font2);
        main_tabWidget = new QTabWidget(about_Dialog);
        main_tabWidget->setObjectName(QString::fromUtf8("main_tabWidget"));
        main_tabWidget->setGeometry(QRect(30, 80, 540, 394));
        QFont font3;
        font3.setPointSize(12);
        main_tabWidget->setFont(font3);
        main_tabWidget->setAutoFillBackground(true);
        main_tabWidget->setTabShape(QTabWidget::Rounded);
        about_tab = new QWidget();
        about_tab->setObjectName(QString::fromUtf8("about_tab"));
        about_tab->setFont(font2);
        aboutcontent_label = new QLabel(about_tab);
        aboutcontent_label->setObjectName(QString::fromUtf8("aboutcontent_label"));
        aboutcontent_label->setGeometry(QRect(15, 12, 502, 344));
        aboutcontent_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        aboutcontent_label->setWordWrap(true);
        main_tabWidget->addTab(about_tab, QString());
        features_tab = new QWidget();
        features_tab->setObjectName(QString::fromUtf8("features_tab"));
        features_tab->setFont(font2);
        models_label = new QLabel(features_tab);
        models_label->setObjectName(QString::fromUtf8("models_label"));
        models_label->setGeometry(QRect(220, 19, 295, 34));
        models_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        models_label->setWordWrap(true);
        modelstitle_label = new QLabel(features_tab);
        modelstitle_label->setObjectName(QString::fromUtf8("modelstitle_label"));
        modelstitle_label->setGeometry(QRect(20, 18, 161, 18));
        QFont font4;
        font4.setBold(true);
        font4.setUnderline(true);
        font4.setWeight(75);
        modelstitle_label->setFont(font4);
        controlunits_label = new QLabel(features_tab);
        controlunits_label->setObjectName(QString::fromUtf8("controlunits_label"));
        controlunits_label->setGeometry(QRect(220, 64, 300, 18));
        dtcsinfo_label = new QLabel(features_tab);
        dtcsinfo_label->setObjectName(QString::fromUtf8("dtcsinfo_label"));
        dtcsinfo_label->setGeometry(QRect(308, 96, 201, 18));
        nrofActuatortests_label = new QLabel(features_tab);
        nrofActuatortests_label->setObjectName(QString::fromUtf8("nrofActuatortests_label"));
        nrofActuatortests_label->setGeometry(QRect(220, 192, 45, 18));
        nrofadjustmentvalues_label = new QLabel(features_tab);
        nrofadjustmentvalues_label->setObjectName(QString::fromUtf8("nrofadjustmentvalues_label"));
        nrofadjustmentvalues_label->setGeometry(QRect(220, 160, 45, 18));
        systemtestsinfo_label = new QLabel(features_tab);
        systemtestsinfo_label->setObjectName(QString::fromUtf8("systemtestsinfo_label"));
        systemtestsinfo_label->setGeometry(QRect(270, 192, 241, 18));
        adjustmentsinfo_label = new QLabel(features_tab);
        adjustmentsinfo_label->setObjectName(QString::fromUtf8("adjustmentsinfo_label"));
        adjustmentsinfo_label->setGeometry(QRect(270, 160, 241, 18));
        controlunitstitle_label = new QLabel(features_tab);
        controlunitstitle_label->setObjectName(QString::fromUtf8("controlunitstitle_label"));
        controlunitstitle_label->setGeometry(QRect(20, 64, 161, 18));
        controlunitstitle_label->setFont(font4);
        systemteststitle_label = new QLabel(features_tab);
        systemteststitle_label->setObjectName(QString::fromUtf8("systemteststitle_label"));
        systemteststitle_label->setGeometry(QRect(20, 192, 161, 18));
        systemteststitle_label->setFont(font4);
        nrofsupportedDTCs_label = new QLabel(features_tab);
        nrofsupportedDTCs_label->setObjectName(QString::fromUtf8("nrofsupportedDTCs_label"));
        nrofsupportedDTCs_label->setGeometry(QRect(220, 96, 85, 18));
        dtcstitle_label = new QLabel(features_tab);
        dtcstitle_label->setObjectName(QString::fromUtf8("dtcstitle_label"));
        dtcstitle_label->setGeometry(QRect(20, 96, 161, 18));
        dtcstitle_label->setFont(font4);
        adjustmentstitle_label = new QLabel(features_tab);
        adjustmentstitle_label->setObjectName(QString::fromUtf8("adjustmentstitle_label"));
        adjustmentstitle_label->setGeometry(QRect(20, 160, 161, 18));
        adjustmentstitle_label->setFont(font4);
        mbsswsinfo_label = new QLabel(features_tab);
        mbsswsinfo_label->setObjectName(QString::fromUtf8("mbsswsinfo_label"));
        mbsswsinfo_label->setGeometry(QRect(308, 128, 201, 18));
        nrofsupportedMBsSWs_label = new QLabel(features_tab);
        nrofsupportedMBsSWs_label->setObjectName(QString::fromUtf8("nrofsupportedMBsSWs_label"));
        nrofsupportedMBsSWs_label->setGeometry(QRect(220, 128, 54, 18));
        mbstitle_label = new QLabel(features_tab);
        mbstitle_label->setObjectName(QString::fromUtf8("mbstitle_label"));
        mbstitle_label->setGeometry(QRect(20, 128, 161, 18));
        mbstitle_label->setFont(font4);
        infoobd2_label = new QLabel(features_tab);
        infoobd2_label->setObjectName(QString::fromUtf8("infoobd2_label"));
        infoobd2_label->setGeometry(QRect(20, 330, 481, 20));
        infoobd2_label->setFont(font3);
        languagestitle_label = new QLabel(features_tab);
        languagestitle_label->setObjectName(QString::fromUtf8("languagestitle_label"));
        languagestitle_label->setGeometry(QRect(20, 224, 161, 18));
        languagestitle_label->setFont(font4);
        languages_label = new QLabel(features_tab);
        languages_label->setObjectName(QString::fromUtf8("languages_label"));
        languages_label->setGeometry(QRect(220, 224, 291, 18));
        supportedOStitle_label = new QLabel(features_tab);
        supportedOStitle_label->setObjectName(QString::fromUtf8("supportedOStitle_label"));
        supportedOStitle_label->setGeometry(QRect(20, 256, 161, 18));
        supportedOStitle_label->setFont(font4);
        supportedOS_label = new QLabel(features_tab);
        supportedOS_label->setObjectName(QString::fromUtf8("supportedOS_label"));
        supportedOS_label->setGeometry(QRect(220, 256, 291, 18));
        main_tabWidget->addTab(features_tab, QString());
        credits_tab = new QWidget();
        credits_tab->setObjectName(QString::fromUtf8("credits_tab"));
        credits_tab->setFont(font3);
        author_label = new QLabel(credits_tab);
        author_label->setObjectName(QString::fromUtf8("author_label"));
        author_label->setGeometry(QRect(10, 20, 500, 20));
        author_label->setOpenExternalLinks(true);
        author_label->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);
        homepageURL_label = new QLabel(credits_tab);
        homepageURL_label->setObjectName(QString::fromUtf8("homepageURL_label"));
        homepageURL_label->setGeometry(QRect(170, 320, 330, 20));
        homepageURL_label->setText(QString::fromUtf8("<a href=\"https://github.com/Comer352L/FreeSSM\">https://github.com/Comer352L/FreeSSM</a>"));
        homepageURL_label->setOpenExternalLinks(true);
        homepageURL_label->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);
        homepagetitle_label = new QLabel(credits_tab);
        homepagetitle_label->setObjectName(QString::fromUtf8("homepagetitle_label"));
        homepagetitle_label->setGeometry(QRect(10, 320, 150, 20));
        qt4credits_label = new QLabel(credits_tab);
        qt4credits_label->setObjectName(QString::fromUtf8("qt4credits_label"));
        qt4credits_label->setGeometry(QRect(10, 170, 511, 20));
        qt4credits_label->setOpenExternalLinks(true);
        iconcredits_label = new QLabel(credits_tab);
        iconcredits_label->setObjectName(QString::fromUtf8("iconcredits_label"));
        iconcredits_label->setGeometry(QRect(10, 230, 511, 20));
        iconcredits_label->setOpenExternalLinks(true);
        fontcredits_label = new QLabel(credits_tab);
        fontcredits_label->setObjectName(QString::fromUtf8("fontcredits_label"));
        fontcredits_label->setGeometry(QRect(10, 260, 511, 20));
        fontcredits_label->setOpenExternalLinks(true);
        contributors_label = new QLabel(credits_tab);
        contributors_label->setObjectName(QString::fromUtf8("contributors_label"));
        contributors_label->setGeometry(QRect(10, 50, 131, 20));
        contributors_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        contributorslist_label = new QLabel(credits_tab);
        contributorslist_label->setObjectName(QString::fromUtf8("contributorslist_label"));
        contributorslist_label->setGeometry(QRect(140, 50, 380, 111));
        contributorslist_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        tinyxmlcredits_label = new QLabel(credits_tab);
        tinyxmlcredits_label->setObjectName(QString::fromUtf8("tinyxmlcredits_label"));
        tinyxmlcredits_label->setGeometry(QRect(10, 200, 511, 20));
        tinyxmlcredits_label->setOpenExternalLinks(true);
        main_tabWidget->addTab(credits_tab, QString());
        licenses_tab = new QWidget();
        licenses_tab->setObjectName(QString::fromUtf8("licenses_tab"));
        qt4license_label = new QLabel(licenses_tab);
        qt4license_label->setObjectName(QString::fromUtf8("qt4license_label"));
        qt4license_label->setGeometry(QRect(10, 205, 161, 20));
        QFont font5;
        font5.setPointSize(11);
        qt4license_label->setFont(font5);
        qt4license_label->setText(QString::fromUtf8("Qt-Framework:"));
        qt4license_label->setWordWrap(true);
        qt4license_label->setOpenExternalLinks(true);
        fontlicense_label = new QLabel(licenses_tab);
        fontlicense_label->setObjectName(QString::fromUtf8("fontlicense_label"));
        fontlicense_label->setGeometry(QRect(10, 325, 241, 20));
        fontlicense_label->setFont(font5);
        fontlicense_label->setWordWrap(true);
        fontlicense_label->setOpenExternalLinks(true);
        gplinfo_label = new QLabel(licenses_tab);
        gplinfo_label->setObjectName(QString::fromUtf8("gplinfo_label"));
        gplinfo_label->setGeometry(QRect(10, 10, 511, 121));
        gplinfo_label->setFont(font3);
        gplinfo_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gplinfo_label->setWordWrap(true);
        crystaliconslicense_label = new QLabel(licenses_tab);
        crystaliconslicense_label->setObjectName(QString::fromUtf8("crystaliconslicense_label"));
        crystaliconslicense_label->setGeometry(QRect(10, 295, 221, 20));
        crystaliconslicense_label->setFont(font5);
        crystaliconslicense_label->setWordWrap(true);
        crystaliconslicense_label->setOpenExternalLinks(true);
        oxygeniconslicense_label = new QLabel(licenses_tab);
        oxygeniconslicense_label->setObjectName(QString::fromUtf8("oxygeniconslicense_label"));
        oxygeniconslicense_label->setGeometry(QRect(10, 265, 181, 20));
        oxygeniconslicense_label->setFont(font5);
        oxygeniconslicense_label->setWordWrap(true);
        oxygeniconslicense_label->setOpenExternalLinks(true);
        tinyxmllicense_label = new QLabel(licenses_tab);
        tinyxmllicense_label->setObjectName(QString::fromUtf8("tinyxmllicense_label"));
        tinyxmllicense_label->setGeometry(QRect(10, 235, 161, 20));
        tinyxmllicense_label->setFont(font5);
        tinyxmllicense_label->setText(QString::fromUtf8("TinyXML2:"));
        tinyxmllicense_label->setOpenExternalLinks(true);
        fontlicensedoc_label = new QLabel(licenses_tab);
        fontlicensedoc_label->setObjectName(QString::fromUtf8("fontlicensedoc_label"));
        fontlicensedoc_label->setGeometry(QRect(280, 325, 241, 20));
        fontlicensedoc_label->setFont(font5);
        fontlicensedoc_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        fontlicensedoc_label->setWordWrap(true);
        fontlicensedoc_label->setOpenExternalLinks(true);
        oxygeniconslicensedoc_label = new QLabel(licenses_tab);
        oxygeniconslicensedoc_label->setObjectName(QString::fromUtf8("oxygeniconslicensedoc_label"));
        oxygeniconslicensedoc_label->setGeometry(QRect(220, 265, 301, 20));
        oxygeniconslicensedoc_label->setFont(font5);
        oxygeniconslicensedoc_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        oxygeniconslicensedoc_label->setWordWrap(true);
        oxygeniconslicensedoc_label->setOpenExternalLinks(true);
        qt4licensedoc_label = new QLabel(licenses_tab);
        qt4licensedoc_label->setObjectName(QString::fromUtf8("qt4licensedoc_label"));
        qt4licensedoc_label->setGeometry(QRect(200, 205, 321, 20));
        qt4licensedoc_label->setFont(font5);
        qt4licensedoc_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qt4licensedoc_label->setWordWrap(true);
        qt4licensedoc_label->setOpenExternalLinks(true);
        tinyxmllicensedoc_label = new QLabel(licenses_tab);
        tinyxmllicensedoc_label->setObjectName(QString::fromUtf8("tinyxmllicensedoc_label"));
        tinyxmllicensedoc_label->setGeometry(QRect(200, 235, 321, 20));
        tinyxmllicensedoc_label->setFont(font5);
        tinyxmllicensedoc_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tinyxmllicensedoc_label->setOpenExternalLinks(true);
        crystaliconslicensedoc_label = new QLabel(licenses_tab);
        crystaliconslicensedoc_label->setObjectName(QString::fromUtf8("crystaliconslicensedoc_label"));
        crystaliconslicensedoc_label->setGeometry(QRect(270, 295, 251, 20));
        crystaliconslicensedoc_label->setFont(font5);
        crystaliconslicensedoc_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        crystaliconslicensedoc_label->setWordWrap(true);
        crystaliconslicensedoc_label->setOpenExternalLinks(true);
        thirdpartylicenses_label = new QLabel(licenses_tab);
        thirdpartylicenses_label->setObjectName(QString::fromUtf8("thirdpartylicenses_label"));
        thirdpartylicenses_label->setGeometry(QRect(10, 175, 500, 20));
        thirdpartylicenses_label->setFont(font5);
        thirdpartylicenses_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        thirdpartylicenses_label->setWordWrap(true);
        thirdpartylicenses_label->setOpenExternalLinks(true);
        showlicense_pushButton = new QPushButton(licenses_tab);
        showlicense_pushButton->setObjectName(QString::fromUtf8("showlicense_pushButton"));
        showlicense_pushButton->setGeometry(QRect(10, 125, 251, 31));
        showlicense_pushButton->setFont(font3);
        main_tabWidget->addTab(licenses_tab, QString());
        changelog_tab = new QWidget();
        changelog_tab->setObjectName(QString::fromUtf8("changelog_tab"));
        changelog_tab->setFont(font2);
        changelog_textBrowser = new QTextBrowser(changelog_tab);
        changelog_textBrowser->setObjectName(QString::fromUtf8("changelog_textBrowser"));
        changelog_textBrowser->setGeometry(QRect(10, 10, 512, 345));
        changelog_textBrowser->setLineWrapColumnOrWidth(0);
        changelog_textBrowser->setOverwriteMode(false);
        changelog_textBrowser->setTextInteractionFlags(Qt::TextSelectableByMouse);
        changelog_textBrowser->setOpenLinks(false);
        main_tabWidget->addTab(changelog_tab, QString());
        subtitle_label = new QLabel(about_Dialog);
        subtitle_label->setObjectName(QString::fromUtf8("subtitle_label"));
        subtitle_label->setGeometry(QRect(30, 48, 511, 21));
        subtitle_label->setFont(font3);
        subtitle_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        subtitle_label->setWordWrap(true);
        trademarksInfo_label = new QLabel(about_Dialog);
        trademarksInfo_label->setObjectName(QString::fromUtf8("trademarksInfo_label"));
        trademarksInfo_label->setGeometry(QRect(30, 480, 540, 16));
        QFont font6;
        font6.setPointSize(8);
        trademarksInfo_label->setFont(font6);
        QWidget::setTabOrder(main_tabWidget, close_pushButton);
        QWidget::setTabOrder(close_pushButton, changelog_textBrowser);

        retranslateUi(about_Dialog);

        main_tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(about_Dialog);
    } // setupUi

    void retranslateUi(QDialog *about_Dialog)
    {
        about_Dialog->setWindowTitle(QCoreApplication::translate("about_Dialog", "About FreeSSM", nullptr));
        close_pushButton->setText(QCoreApplication::translate("about_Dialog", "Clos&e", nullptr));
        aboutcontent_label->setText(QCoreApplication::translate("about_Dialog", "FreeSSM is a free and easy to use diagnostic and adjustment tool for SUBARU\302\256 vehicles. It currently supports the models LEGACY\302\256, LIBERTY\302\256, OUTBACK\302\256, BAJA\302\256, IMPREZA\302\256, FORESTER\302\256, TRIBECA\302\256 and EXIGA\302\256 starting with model year 1999 and provides access to the engine and transmission control units.\n"
"\n"
"The use of this program is AT YOUR OWN RISK. The author is NOT LIABLE FOR ANY EFFECTS caused by usage, including UNEXPECTED VEHICLE BEHAVIOR or DAMAGES.\n"
"This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of FUNCTIONALITY ON YOUR VEHICLE, MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.\n"
"\n"
"PLEASE NOTE:\n"
"This program is NOT A PRODUCT OF FUJI HEAVY INDUSTRIES LTD. OR ANY SUBARU\302\256-ASSOCIATED COMPANY. It is a free reengineering project which is not contributed, provided or supported by any company in any way.", nullptr));
        main_tabWidget->setTabText(main_tabWidget->indexOf(about_tab), QCoreApplication::translate("about_Dialog", "&About", nullptr));
        models_label->setText(QCoreApplication::translate("about_Dialog", "LEGACY\302\256 / LIBERTY\302\256, OUTBACK\302\256, BAJA\302\256, IMPREZA\302\256, FORESTER\302\256, TRIBECA\302\256, EXIGA\302\256", nullptr));
        modelstitle_label->setText(QCoreApplication::translate("about_Dialog", "Models (since MY1999):", nullptr));
        controlunits_label->setText(QCoreApplication::translate("about_Dialog", "Engine, Transmission", nullptr));
        dtcsinfo_label->setText(QCoreApplication::translate("about_Dialog", "(Non-OBD / OBD2 / CC)", nullptr));
        nrofActuatortests_label->setText(QString());
        nrofadjustmentvalues_label->setText(QString());
        systemtestsinfo_label->setText(QCoreApplication::translate("about_Dialog", "(Actuators / Others) (Engine only)", nullptr));
        adjustmentsinfo_label->setText(QCoreApplication::translate("about_Dialog", "(Engine / Transmission)", nullptr));
        controlunitstitle_label->setText(QCoreApplication::translate("about_Dialog", "Control Units:", nullptr));
        systemteststitle_label->setText(QCoreApplication::translate("about_Dialog", "System Tests:", nullptr));
        nrofsupportedDTCs_label->setText(QString());
        dtcstitle_label->setText(QCoreApplication::translate("about_Dialog", "Data Trouble Codes:", nullptr));
        adjustmentstitle_label->setText(QCoreApplication::translate("about_Dialog", "Adjustment Values:", nullptr));
        mbsswsinfo_label->setText(QCoreApplication::translate("about_Dialog", "(Data / Switches)", nullptr));
        nrofsupportedMBsSWs_label->setText(QString());
        mbstitle_label->setText(QCoreApplication::translate("about_Dialog", "Measuring Blocks:", nullptr));
        infoobd2_label->setText(QCoreApplication::translate("about_Dialog", "FreeSSM is NO OBD-2 scan tool !", nullptr));
        languagestitle_label->setText(QCoreApplication::translate("about_Dialog", "Program languages:", nullptr));
        languages_label->setText(QString());
        supportedOStitle_label->setText(QCoreApplication::translate("about_Dialog", "Operating Systems:", nullptr));
        supportedOS_label->setText(QCoreApplication::translate("about_Dialog", "Linux/X11, Windows", nullptr));
        main_tabWidget->setTabText(main_tabWidget->indexOf(features_tab), QCoreApplication::translate("about_Dialog", "&Features", nullptr));
        author_label->setText(QCoreApplication::translate("about_Dialog", "Written by <a href=\"mailto:comer352l@googlemail.com\">Comer352L</a> (Copyright \302\251 2008-2014)", nullptr));
        homepagetitle_label->setText(QCoreApplication::translate("about_Dialog", "Project homepage:", nullptr));
        qt4credits_label->setText(QCoreApplication::translate("about_Dialog", "Based on the <a href=\"http://qt-project.org\">Qt-Framework</a> (Copyright \302\251 Digia Plc).", nullptr));
        iconcredits_label->setText(QCoreApplication::translate("about_Dialog", "Many icons are taken from the <a href=\"http://web.archive.org/web/20120914230906/http://www.oxygen-icons.org/\">Oxygen</a> and <a href=\"http://web.archive.org/web/20121010063705/http://everaldo.com/crystal/\">Crystal</a> icon themes.", nullptr));
        fontcredits_label->setText(QCoreApplication::translate("about_Dialog", "Truetype font \"<a href=\"https://fedorahosted.org/liberation-fonts/\">Liberation Sans</a>\" Copyright \302\251 Red Hat, Inc.", nullptr));
        contributors_label->setText(QCoreApplication::translate("about_Dialog", "Contributors:", nullptr));
        contributorslist_label->setText(QCoreApplication::translate("about_Dialog", "<html><head/><body><p>L1800Turbo (SSM1 ECU definitions, testing)<br/>MartinX (SSM2 definitions, bugfix)<br/>Antoine Gini\303\250s (background picture, Copyright \302\251)<br/>Honza \305\240olc (SSM1 ECU investigations, testing)<br/>Nikolay Marinov (UI for small screen resolutions)<br/>madanadam (Turkish translation)</p></body></html>", nullptr));
        tinyxmlcredits_label->setText(QCoreApplication::translate("about_Dialog", "<a href=\"http://www.grinninglizard.com/tinyxml2/\">TinyXML2</a> (Copyright \302\251 Lee Thomason, Yves Berquin, Andrew Ellerton)", nullptr));
        main_tabWidget->setTabText(main_tabWidget->indexOf(credits_tab), QCoreApplication::translate("about_Dialog", "&Credits", nullptr));
        fontlicense_label->setText(QCoreApplication::translate("about_Dialog", "Truetype font \"Liberation Sans\":", nullptr));
        gplinfo_label->setText(QCoreApplication::translate("about_Dialog", "<html><head/><body><p><span style=\" font-weight:600;\">This program is free software:<br>You can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.<br>The source code must always be provided.</span></p></body></html>", nullptr));
        crystaliconslicense_label->setText(QCoreApplication::translate("about_Dialog", "Crystal icon theme:", nullptr));
        oxygeniconslicense_label->setText(QCoreApplication::translate("about_Dialog", "Oxygen icon theme:", nullptr));
        fontlicensedoc_label->setText(QCoreApplication::translate("about_Dialog", "<a href=\"./licenses-3rd-party/liberation-fonts-LICENSE.txt\">SIL Open Font License v1.1</a>", nullptr));
        oxygeniconslicensedoc_label->setText(QCoreApplication::translate("about_Dialog", "<a href=\"./licenses-3rd-party/Oxygen-icons/LGPL-LICENSE.txt\">LGPL v3</a> and <a href=\"./licenses-3rd-party/Oxygen-icons/CC-BY-SA-3.0-LICENSE.txt\">CC-BY-SA-3.0 license</a>", nullptr));
        qt4licensedoc_label->setText(QCoreApplication::translate("about_Dialog", "<a href=\"./licenses-3rd-party/Qt4/LICENSE.GPL3.txt\">GPL v3</a> and (since Qt 4.5) also the <a href=\"./licenses-3rd-party/Qt4/LICENSE.LGPL.txt\">LGPL v2.1</a>", nullptr));
        tinyxmllicensedoc_label->setText(QCoreApplication::translate("about_Dialog", "<a href=\"./licenses-3rd-party/tinyXML2-LICENSE.txt\">ZLIB license</a>", nullptr));
        crystaliconslicensedoc_label->setText(QCoreApplication::translate("about_Dialog", "<a href=\"./licenses-3rd-party/crystal-icons-LICENSE.txt\">LGPL v3</a>", nullptr));
        thirdpartylicenses_label->setText(QCoreApplication::translate("about_Dialog", "<html><head/><body><p><span style=\" font-weight:600; text-decoration: underline;\">Licenses of 3rd party software and icons:</span></p></body></html>", nullptr));
        showlicense_pushButton->setText(QCoreApplication::translate("about_Dialog", "Read the full license document", nullptr));
        main_tabWidget->setTabText(main_tabWidget->indexOf(licenses_tab), QCoreApplication::translate("about_Dialog", "&Licenses", nullptr));
        main_tabWidget->setTabText(main_tabWidget->indexOf(changelog_tab), QCoreApplication::translate("about_Dialog", "Change&log", nullptr));
        subtitle_label->setText(QCoreApplication::translate("about_Dialog", "A free diagnostic and adjustment tool for SUBARU\302\256 vehicles", nullptr));
        trademarksInfo_label->setText(QCoreApplication::translate("about_Dialog", "All trademarks are property of Fuji Heavy Industries Ltd. or their respective owners.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about_Dialog: public Ui_about_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
