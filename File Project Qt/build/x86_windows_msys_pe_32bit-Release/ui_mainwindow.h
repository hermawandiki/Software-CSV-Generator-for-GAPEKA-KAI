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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
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
    QLabel *labelPreview;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setEnabled(true);
        frame->setGeometry(QRect(0, 0, 800, 600));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        frame->setFont(font);
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 61);"));
        labelNomorKA = new QLabel(frame);
        labelNomorKA->setObjectName("labelNomorKA");
        labelNomorKA->setGeometry(QRect(40, 19, 121, 21));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        labelNomorKA->setFont(font1);
        labelNamaKA = new QLabel(frame);
        labelNamaKA->setObjectName("labelNamaKA");
        labelNamaKA->setGeometry(QRect(40, 65, 121, 21));
        labelNamaKA->setFont(font1);
        labelRelasiKA = new QLabel(frame);
        labelRelasiKA->setObjectName("labelRelasiKA");
        labelRelasiKA->setGeometry(QRect(40, 115, 121, 21));
        labelRelasiKA->setFont(font1);
        inputNomorKA = new QLineEdit(frame);
        inputNomorKA->setObjectName("inputNomorKA");
        inputNomorKA->setGeometry(QRect(170, 13, 221, 31));
        inputNomorKA->setFont(font1);
        inputNomorKA->setAutoFillBackground(false);
        inputNomorKA->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 38, 38);\n"
"color: rgb(255, 255, 255);\n"
"border:1px solid rgb(255,255,255);\n"
"border-radius:10px;"));
        inputNomorKA->setAlignment(Qt::AlignmentFlag::AlignCenter);
        labelStasiun = new QLabel(frame);
        labelStasiun->setObjectName("labelStasiun");
        labelStasiun->setGeometry(QRect(40, 170, 221, 21));
        labelStasiun->setFont(font1);
        labelStasiun->setAutoFillBackground(false);
        labelJamDatang = new QLabel(frame);
        labelJamDatang->setObjectName("labelJamDatang");
        labelJamDatang->setGeometry(QRect(310, 170, 121, 21));
        labelJamDatang->setFont(font1);
        inputNamaKA = new QLineEdit(frame);
        inputNamaKA->setObjectName("inputNamaKA");
        inputNamaKA->setGeometry(QRect(170, 60, 221, 31));
        inputNamaKA->setFont(font1);
        inputNamaKA->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 38, 38);\n"
"color: rgb(255, 255, 255);\n"
"border:1px solid rgb(255,255,255);\n"
"border-radius:10px;"));
        inputNamaKA->setAlignment(Qt::AlignmentFlag::AlignCenter);
        inputRelasiKA = new QLineEdit(frame);
        inputRelasiKA->setObjectName("inputRelasiKA");
        inputRelasiKA->setGeometry(QRect(170, 110, 221, 31));
        inputRelasiKA->setFont(font1);
        inputRelasiKA->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 38, 38);\n"
"color: rgb(255, 255, 255);\n"
"border:1px solid rgb(255,255,255);\n"
"border-radius:10px;"));
        inputRelasiKA->setAlignment(Qt::AlignmentFlag::AlignCenter);
        labelJamBerangkat = new QLabel(frame);
        labelJamBerangkat->setObjectName("labelJamBerangkat");
        labelJamBerangkat->setGeometry(QRect(460, 170, 121, 21));
        labelJamBerangkat->setFont(font1);
        inputStasiun = new QLineEdit(frame);
        inputStasiun->setObjectName("inputStasiun");
        inputStasiun->setGeometry(QRect(40, 200, 241, 31));
        inputStasiun->setFont(font1);
        inputStasiun->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 38, 38);\n"
"color: rgb(255, 255, 255);\n"
"border:1px solid rgb(255,255,255);\n"
"border-radius:10px;"));
        inputStasiun->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btnSave = new QPushButton(frame);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(610, 200, 111, 31));
        btnSave->setFont(font1);
        btnSave->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        btnSave->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid rgb(255,255,255);\n"
"	border-radius:10px;\n"
"	color: black;\n"
"	background-color: rgb(0, 255, 0);\n"
"}\n"
"QPushButton:Hover{\n"
"	background-color: rgb(0, 170, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(170, 255, 0);\n"
"}"));
        btnGenerate = new QPushButton(frame);
        btnGenerate->setObjectName("btnGenerate");
        btnGenerate->setGeometry(QRect(420, 10, 131, 31));
        btnGenerate->setFont(font1);
        btnGenerate->setAutoDefault(false);
        btnGenerate->setFlat(false);
        listDataSaved = new QListWidget(frame);
        listDataSaved->setObjectName("listDataSaved");
        listDataSaved->setGeometry(QRect(40, 280, 721, 271));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(12);
        font2.setBold(false);
        listDataSaved->setFont(font2);
        listDataSaved->setAcceptDrops(false);
        listDataSaved->setAutoFillBackground(false);
        listDataSaved->setStyleSheet(QString::fromUtf8("border:1px solid rgb(255,255,255);"));
        listDataSaved->setTabKeyNavigation(false);
        listDataSaved->setDragEnabled(false);
        listDataSaved->setSortingEnabled(false);
        btnOpenFile = new QPushButton(frame);
        btnOpenFile->setObjectName("btnOpenFile");
        btnOpenFile->setGeometry(QRect(420, 60, 131, 31));
        btnOpenFile->setFont(font1);
        btnResetList = new QPushButton(frame);
        btnResetList->setObjectName("btnResetList");
        btnResetList->setGeometry(QRect(420, 110, 131, 31));
        btnResetList->setFont(font1);
        inputJamDatang = new QLineEdit(frame);
        inputJamDatang->setObjectName("inputJamDatang");
        inputJamDatang->setGeometry(QRect(310, 200, 121, 31));
        inputJamDatang->setFont(font1);
        inputJamDatang->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 38, 38);\n"
"color: rgb(255, 255, 255);\n"
"border:1px solid rgb(255,255,255);\n"
"border-radius:10px;"));
        inputJamDatang->setAlignment(Qt::AlignmentFlag::AlignCenter);
        inputJamBerangkat = new QLineEdit(frame);
        inputJamBerangkat->setObjectName("inputJamBerangkat");
        inputJamBerangkat->setGeometry(QRect(460, 200, 121, 31));
        inputJamBerangkat->setFont(font1);
        inputJamBerangkat->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 38, 38);\n"
"color: rgb(255, 255, 255);\n"
"border:1px solid rgb(255,255,255);\n"
"border-radius:10px;"));
        inputJamBerangkat->setAlignment(Qt::AlignmentFlag::AlignCenter);
        labelPreview = new QLabel(frame);
        labelPreview->setObjectName("labelPreview");
        labelPreview->setGeometry(QRect(40, 249, 721, 21));
        labelPreview->setFont(font1);
        labelPreview->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        labelPreview->setAlignment(Qt::AlignmentFlag::AlignCenter);
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
        labelPreview->raise();
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        btnGenerate->setDefault(true);
        btnOpenFile->setDefault(true);
        btnResetList->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CSV Generator GAPEKA", nullptr));
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
        labelPreview->setText(QCoreApplication::translate("MainWindow", "Preview GAPEKA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
