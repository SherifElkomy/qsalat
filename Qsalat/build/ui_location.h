/********************************************************************************
** Form generated from reading ui file 'location.ui'
**
** Created: Fri Dec 5 12:08:36 2008
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_LOCATION_H
#define UI_LOCATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_Location
{
public:
    QLabel *label;
    QLineEdit *locationLineEdit;
    QPushButton *searchButton;
    QWebView *webView;
    QLabel *latLabel;
    QLabel *lngLabel;
    QPushButton *applyButton;

    void setupUi(QDialog *Location)
    {
    if (Location->objectName().isEmpty())
        Location->setObjectName(QString::fromUtf8("Location"));
    Location->resize(301, 421);
    Location->setMinimumSize(QSize(301, 421));
    Location->setMaximumSize(QSize(301, 421));
    label = new QLabel(Location);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(10, 10, 54, 31));
    locationLineEdit = new QLineEdit(Location);
    locationLineEdit->setObjectName(QString::fromUtf8("locationLineEdit"));
    locationLineEdit->setGeometry(QRect(60, 10, 181, 28));
    searchButton = new QPushButton(Location);
    searchButton->setObjectName(QString::fromUtf8("searchButton"));
    searchButton->setGeometry(QRect(250, 10, 41, 28));
    webView = new QWebView(Location);
    webView->setObjectName(QString::fromUtf8("webView"));
    webView->setGeometry(QRect(10, 49, 281, 281));
    webView->setUrl(QUrl("http://www.skanderjabouzi.com/qpray/"));
    latLabel = new QLabel(Location);
    latLabel->setObjectName(QString::fromUtf8("latLabel"));
    latLabel->setGeometry(QRect(10, 350, 141, 20));
    lngLabel = new QLabel(Location);
    lngLabel->setObjectName(QString::fromUtf8("lngLabel"));
    lngLabel->setGeometry(QRect(160, 350, 131, 20));
    applyButton = new QPushButton(Location);
    applyButton->setObjectName(QString::fromUtf8("applyButton"));
    applyButton->setGeometry(QRect(229, 390, 61, 28));

    retranslateUi(Location);

    QMetaObject::connectSlotsByName(Location);
    } // setupUi

    void retranslateUi(QDialog *Location)
    {
    Location->setWindowTitle(QApplication::translate("Location", "Qsalat - location", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Location", "Location", 0, QApplication::UnicodeUTF8));
    searchButton->setText(QApplication::translate("Location", "Search", 0, QApplication::UnicodeUTF8));
    latLabel->setText(QApplication::translate("Location", "0.0", 0, QApplication::UnicodeUTF8));
    lngLabel->setText(QApplication::translate("Location", "0.0", 0, QApplication::UnicodeUTF8));
    applyButton->setText(QApplication::translate("Location", "Apply", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Location);
    } // retranslateUi

};

namespace Ui {
    class Location: public Ui_Location {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCATION_H