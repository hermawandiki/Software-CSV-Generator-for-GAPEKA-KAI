/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QLabel *labelNomorKA;
    QLabel *labelNamaKA;
    QLabel *labelRelasiKA;
    QLineEdit *inputNomorKA;
    QLabel *labelStasiun;
    QLabel *labelJamDatang;
    QLineEdit *inputNamaKA;
    QLineEdit *inputRelasiKA;
    QLabel *labelJamBerangkat;
    QLineEdit *inputStasiun;
    QPushButton *btnSave;
    QPushButton *btnGenerate;
    QListWidget *listDataSaved;
    QPushButton *btnOpenFile;
    QPushButton *btnResetList;
    QLineEdit *inputJamDatang;
    QLineEdit *inputJamBerangkat;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 800, 600));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        tabWidget->setFont(font);
        tabWidget->setAutoFillBackground(true);
        tab_1 = new QWidget();
        tab_1->setObjectName("tab_1");
        labelNomorKA = new QLabel(tab_1);
        labelNomorKA->setObjectName("labelNomorKA");
        labelNomorKA->setGeometry(QRect(40, 19, 121, 21));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        labelNomorKA->setFont(font1);
        labelNamaKA = new QLabel(tab_1);
        labelNamaKA->setObjectName("labelNamaKA");
        labelNamaKA->setGeometry(QRect(40, 65, 121, 21));
        labelNamaKA->setFont(font1);
        labelRelasiKA = new QLabel(tab_1);
        labelRelasiKA->setObjectName("labelRelasiKA");
        labelRelasiKA->setGeometry(QRect(40, 115, 121, 21));
        labelRelasiKA->setFont(font1);
        inputNomorKA = new QLineEdit(tab_1);
        inputNomorKA->setObjectName("inputNomorKA");
        inputNomorKA->setGeometry(QRect(170, 13, 221, 31));
        inputNomorKA->setFont(font1);
        inputNomorKA->setAutoFillBackground(false);
        inputNomorKA->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 116, 116);"));
        inputNomorKA->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        labelStasiun = new QLabel(tab_1);
        labelStasiun->setObjectName("labelStasiun");
        labelStasiun->setGeometry(QRect(40, 170, 221, 21));
        labelStasiun->setFont(font1);
        labelStasiun->setAutoFillBackground(false);
        labelJamDatang = new QLabel(tab_1);
        labelJamDatang->setObjectName("labelJamDatang");
        labelJamDatang->setGeometry(QRect(310, 170, 121, 21));
        labelJamDatang->setFont(font1);
        inputNamaKA = new QLineEdit(tab_1);
        inputNamaKA->setObjectName("inputNamaKA");
        inputNamaKA->setGeometry(QRect(170, 60, 221, 31));
        inputNamaKA->setFont(font1);
        inputNamaKA->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 116, 116);"));
        inputRelasiKA = new QLineEdit(tab_1);
        inputRelasiKA->setObjectName("inputRelasiKA");
        inputRelasiKA->setGeometry(QRect(170, 110, 221, 31));
        inputRelasiKA->setFont(font1);
        inputRelasiKA->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 116, 116);"));
        labelJamBerangkat = new QLabel(tab_1);
        labelJamBerangkat->setObjectName("labelJamBerangkat");
        labelJamBerangkat->setGeometry(QRect(460, 170, 121, 21));
        labelJamBerangkat->setFont(font1);
        inputStasiun = new QLineEdit(tab_1);
        inputStasiun->setObjectName("inputStasiun");
        inputStasiun->setGeometry(QRect(40, 200, 241, 31));
        inputStasiun->setFont(font1);
        btnSave = new QPushButton(tab_1);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(610, 200, 81, 31));
        btnSave->setFont(font1);
        btnGenerate = new QPushButton(tab_1);
        btnGenerate->setObjectName("btnGenerate");
        btnGenerate->setGeometry(QRect(420, 10, 131, 31));
        btnGenerate->setFont(font1);
        listDataSaved = new QListWidget(tab_1);
        listDataSaved->setObjectName("listDataSaved");
        listDataSaved->setGeometry(QRect(40, 260, 721, 271));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(12);
        font2.setBold(false);
        listDataSaved->setFont(font2);
        btnOpenFile = new QPushButton(tab_1);
        btnOpenFile->setObjectName("btnOpenFile");
        btnOpenFile->setGeometry(QRect(420, 60, 131, 31));
        btnOpenFile->setFont(font1);
        btnResetList = new QPushButton(tab_1);
        btnResetList->setObjectName("btnResetList");
        btnResetList->setGeometry(QRect(420, 110, 131, 31));
        btnResetList->setFont(font1);
        inputJamDatang = new QLineEdit(tab_1);
        inputJamDatang->setObjectName("inputJamDatang");
        inputJamDatang->setGeometry(QRect(310, 200, 121, 31));
        inputJamDatang->setFont(font1);
        inputJamBerangkat = new QLineEdit(tab_1);
        inputJamBerangkat->setObjectName("inputJamBerangkat");
        inputJamBerangkat->setGeometry(QRect(460, 200, 121, 31));
        inputJamBerangkat->setFont(font1);
        tabWidget->addTab(tab_1, QString());
        labelJamDatang->raise();
        inputJamDatang->raise();
        inputNomorKA->raise();
        labelJamBerangkat->raise();
        btnSave->raise();
        inputJamBerangkat->raise();
        labelNamaKA->raise();
        labelRelasiKA->raise();
        inputRelasiKA->raise();
        labelNomorKA->raise();
        btnGenerate->raise();
        labelStasiun->raise();
        btnResetList->raise();
        btnOpenFile->raise();
        inputNamaKA->raise();
        inputStasiun->raise();
        listDataSaved->raise();
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelNomorKA->setText(QCoreApplication::translate("MainWindow", "Nomor Kereta :", nullptr));
        labelNamaKA->setText(QCoreApplication::translate("MainWindow", "Nama Kereta :", nullptr));
        labelRelasiKA->setText(QCoreApplication::translate("MainWindow", "Relasi Kereta :", nullptr));
        labelStasiun->setText(QCoreApplication::translate("MainWindow", "Stasiun & Perhentian :", nullptr));
        labelJamDatang->setText(QCoreApplication::translate("MainWindow", "Jam Datang :", nullptr));
        labelJamBerangkat->setText(QCoreApplication::translate("MainWindow", "Jam Berangkat :", nullptr));
        btnSave->setText(QCoreApplication::translate("MainWindow", "Simpan", nullptr));
        btnGenerate->setText(QCoreApplication::translate("MainWindow", "Generate CSV", nullptr));
        btnOpenFile->setText(QCoreApplication::translate("MainWindow", "Browse File", nullptr));
        btnResetList->setText(QCoreApplication::translate("MainWindow", "Reset List", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "Entry && Edit Data GAPEKA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
