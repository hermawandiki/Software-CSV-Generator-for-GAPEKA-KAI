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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
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
    QLabel *labelStasiun;
    QLabel *labelJamDatang;
    QLabel *labelJamBerangkat;
    QPushButton *btnSave;
    QPushButton *btnGenerate;
    QPushButton *btnOpenFile;
    QPushButton *btnResetList;
    QLabel *labelPreview;
    QLabel *delimiter1;
    QLabel *kurung;
    QLabel *strip;
    QLabel *header;
    QLineEdit *inputNomorKA;
    QLineEdit *inputNamaKA;
    QLineEdit *inputRelasiKA1;
    QLineEdit *inputRelasiKA2;
    QLineEdit *inputStasiun1;
    QLineEdit *inputStasiun2;
    QLineEdit *inputArrJam;
    QLineEdit *inputArrMenit;
    QLineEdit *inputArrDetik;
    QLineEdit *inputDepJam;
    QLineEdit *inputDepMenit;
    QLineEdit *inputDepDetik;
    QLabel *delimiter2;
    QLabel *labelJudul;
    QLabel *labelKeterangan;
    QLabel *outputKeterangan;
    QLabel *labelInputEdit;
    QPushButton *btnDelete;
    QLabel *labelInputEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *header_2;
    QLabel *header_3;
    QPushButton *btnExit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QTableWidget *tableWidget;
    QPushButton *btnResetName;
    QLabel *label_11;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1920, 1080);
        MainWindow->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setEnabled(true);
        frame->setGeometry(QRect(0, 0, 1920, 1080));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        frame->setFont(font);
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        labelNomorKA = new QLabel(frame);
        labelNomorKA->setObjectName("labelNomorKA");
        labelNomorKA->setGeometry(QRect(80, 190, 200, 40));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        labelNomorKA->setFont(font1);
        labelNomorKA->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        labelNamaKA = new QLabel(frame);
        labelNamaKA->setObjectName("labelNamaKA");
        labelNamaKA->setGeometry(QRect(80, 250, 200, 40));
        labelNamaKA->setFont(font1);
        labelNamaKA->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        labelRelasiKA = new QLabel(frame);
        labelRelasiKA->setObjectName("labelRelasiKA");
        labelRelasiKA->setGeometry(QRect(80, 310, 200, 40));
        labelRelasiKA->setFont(font1);
        labelRelasiKA->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        labelStasiun = new QLabel(frame);
        labelStasiun->setObjectName("labelStasiun");
        labelStasiun->setGeometry(QRect(320, 470, 221, 41));
        labelStasiun->setFont(font1);
        labelStasiun->setAutoFillBackground(false);
        labelStasiun->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        labelJamDatang = new QLabel(frame);
        labelJamDatang->setObjectName("labelJamDatang");
        labelJamDatang->setGeometry(QRect(170, 590, 121, 41));
        labelJamDatang->setFont(font1);
        labelJamDatang->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        labelJamBerangkat = new QLabel(frame);
        labelJamBerangkat->setObjectName("labelJamBerangkat");
        labelJamBerangkat->setGeometry(QRect(525, 590, 161, 41));
        labelJamBerangkat->setFont(font1);
        labelJamBerangkat->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        btnSave = new QPushButton(frame);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(124, 720, 181, 50));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        btnSave->setFont(font2);
        btnSave->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        btnSave->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid rgb(255,255,255);\n"
"	border-radius:20px;\n"
"	color: black;\n"
"	background-color: rgb(234, 126, 17);\n"
"	text-align: right;\n"
"}\n"
"QPushButton:Hover{\n"
"	background-color: rgb(234, 78, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(170, 255, 0);\n"
"}"));
        btnGenerate = new QPushButton(frame);
        btnGenerate->setObjectName("btnGenerate");
        btnGenerate->setGeometry(QRect(569, 190, 171, 50));
        btnGenerate->setFont(font2);
        btnGenerate->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid rgb(255,255,255);\n"
"	border-radius:20px;\n"
"	color: black;\n"
"	background-color: rgb(234, 126, 17);\n"
"	text-align: right;\n"
"}\n"
"QPushButton:Hover{\n"
"	background-color: rgb(234, 78, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(170, 255, 0);\n"
"}"));
        btnGenerate->setAutoDefault(false);
        btnGenerate->setFlat(false);
        btnOpenFile = new QPushButton(frame);
        btnOpenFile->setObjectName("btnOpenFile");
        btnOpenFile->setGeometry(QRect(570, 250, 171, 50));
        btnOpenFile->setFont(font2);
        btnOpenFile->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid rgb(255,255,255);\n"
"	border-radius:20px;\n"
"	color: black;\n"
"	background-color: rgb(234, 126, 17);\n"
"	text-align: right;\n"
"}\n"
"QPushButton:Hover{\n"
"	background-color: rgb(234, 78, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(170, 255, 0);\n"
"}"));
        btnResetList = new QPushButton(frame);
        btnResetList->setObjectName("btnResetList");
        btnResetList->setGeometry(QRect(505, 720, 171, 50));
        btnResetList->setFont(font2);
        btnResetList->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid rgb(255,255,255);\n"
"	border-radius:20px;\n"
"	color: black;\n"
"	background-color: rgb(234, 126, 17);\n"
"	text-align: right;\n"
"}\n"
"QPushButton:Hover{\n"
"	background-color: rgb(234, 78, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(170, 255, 0);\n"
"}"));
        labelPreview = new QLabel(frame);
        labelPreview->setObjectName("labelPreview");
        labelPreview->setGeometry(QRect(930, 120, 900, 40));
        labelPreview->setFont(font1);
        labelPreview->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 57, 97);\n"
"color: rgb(255, 255, 255);\n"
"border:1px solid rgb(0,0,0);\n"
"border-radius:20px;"));
        labelPreview->setAlignment(Qt::AlignmentFlag::AlignCenter);
        delimiter1 = new QLabel(frame);
        delimiter1->setObjectName("delimiter1");
        delimiter1->setGeometry(QRect(170, 640, 121, 31));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        delimiter1->setFont(font3);
        delimiter1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        kurung = new QLabel(frame);
        kurung->setObjectName("kurung");
        kurung->setGeometry(QRect(460, 510, 161, 51));
        QFont font4;
        font4.setPointSize(30);
        font4.setBold(true);
        kurung->setFont(font4);
        kurung->setAutoFillBackground(false);
        kurung->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        strip = new QLabel(frame);
        strip->setObjectName("strip");
        strip->setGeometry(QRect(360, 320, 31, 16));
        strip->setFont(font4);
        strip->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        strip->setAlignment(Qt::AlignmentFlag::AlignCenter);
        header = new QLabel(frame);
        header->setObjectName("header");
        header->setGeometry(QRect(200, 0, 1920, 80));
        header->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 57, 97);\n"
"color: rgb(255, 255, 255);\n"
"border:1px solid rgb(0,0,0);\n"
"border-radius:40px;"));
        inputNomorKA = new QLineEdit(frame);
        inputNomorKA->setObjectName("inputNomorKA");
        inputNomorKA->setGeometry(QRect(250, 190, 111, 40));
        QFont font5;
        font5.setPointSize(15);
        font5.setBold(true);
        inputNomorKA->setFont(font5);
        inputNomorKA->setStyleSheet(QString::fromUtf8("border:3px solid;\n"
"border-radius:10px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(129, 129, 129);\n"
"color: rgb(60, 60, 60);"));
        inputNomorKA->setAlignment(Qt::AlignmentFlag::AlignCenter);
        inputNamaKA = new QLineEdit(frame);
        inputNamaKA->setObjectName("inputNamaKA");
        inputNamaKA->setGeometry(QRect(250, 250, 250, 40));
        inputNamaKA->setFont(font5);
        inputNamaKA->setStyleSheet(QString::fromUtf8("border:3px solid;\n"
"border-radius:10px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(129, 129, 129);\n"
"color: rgb(60, 60, 60);"));
        inputNamaKA->setAlignment(Qt::AlignmentFlag::AlignCenter);
        inputRelasiKA1 = new QLineEdit(frame);
        inputRelasiKA1->setObjectName("inputRelasiKA1");
        inputRelasiKA1->setGeometry(QRect(250, 310, 111, 40));
        inputRelasiKA1->setFont(font5);
        inputRelasiKA1->setStyleSheet(QString::fromUtf8("border:3px solid;\n"
"border-radius:10px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(129, 129, 129);\n"
"color: rgb(60, 60, 60);"));
        inputRelasiKA1->setFrame(true);
        inputRelasiKA1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        inputRelasiKA1->setDragEnabled(false);
        inputRelasiKA2 = new QLineEdit(frame);
        inputRelasiKA2->setObjectName("inputRelasiKA2");
        inputRelasiKA2->setGeometry(QRect(390, 310, 111, 40));
        inputRelasiKA2->setFont(font5);
        inputRelasiKA2->setStyleSheet(QString::fromUtf8("border:3px solid;\n"
"border-radius:10px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(129, 129, 129);\n"
"color: rgb(60, 60, 60);"));
        inputRelasiKA2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        inputStasiun1 = new QLineEdit(frame);
        inputStasiun1->setObjectName("inputStasiun1");
        inputStasiun1->setGeometry(QRect(220, 520, 231, 40));
        inputStasiun1->setFont(font5);
        inputStasiun1->setStyleSheet(QString::fromUtf8("border:3px solid;\n"
"border-radius:10px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(129, 129, 129);\n"
"color: rgb(60, 60, 60);"));
        inputStasiun1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        inputStasiun2 = new QLineEdit(frame);
        inputStasiun2->setObjectName("inputStasiun2");
        inputStasiun2->setGeometry(QRect(480, 520, 91, 40));
        inputStasiun2->setFont(font5);
        inputStasiun2->setStyleSheet(QString::fromUtf8("border:3px solid;\n"
"border-radius:10px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(129, 129, 129);\n"
"color: rgb(60, 60, 60);"));
        inputStasiun2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        inputArrJam = new QLineEdit(frame);
        inputArrJam->setObjectName("inputArrJam");
        inputArrJam->setGeometry(QRect(110, 640, 51, 40));
        inputArrJam->setFont(font5);
        inputArrJam->setStyleSheet(QString::fromUtf8("border:3px solid;\n"
"border-radius:10px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(129, 129, 129);\n"
"color: rgb(60, 60, 60);"));
        inputArrJam->setAlignment(Qt::AlignmentFlag::AlignCenter);
        inputArrMenit = new QLineEdit(frame);
        inputArrMenit->setObjectName("inputArrMenit");
        inputArrMenit->setGeometry(QRect(190, 640, 51, 40));
        inputArrMenit->setFont(font5);
        inputArrMenit->setStyleSheet(QString::fromUtf8("border:3px solid;\n"
"border-radius:10px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(129, 129, 129);\n"
"color: rgb(60, 60, 60);"));
        inputArrMenit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        inputArrDetik = new QLineEdit(frame);
        inputArrDetik->setObjectName("inputArrDetik");
        inputArrDetik->setGeometry(QRect(270, 640, 51, 40));
        inputArrDetik->setFont(font5);
        inputArrDetik->setStyleSheet(QString::fromUtf8("border:3px solid;\n"
"border-radius:10px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(129, 129, 129);\n"
"color: rgb(60, 60, 60);"));
        inputArrDetik->setAlignment(Qt::AlignmentFlag::AlignCenter);
        inputDepJam = new QLineEdit(frame);
        inputDepJam->setObjectName("inputDepJam");
        inputDepJam->setGeometry(QRect(480, 640, 51, 40));
        inputDepJam->setFont(font5);
        inputDepJam->setStyleSheet(QString::fromUtf8("border:3px solid;\n"
"border-radius:10px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(129, 129, 129);\n"
"color: rgb(60, 60, 60);"));
        inputDepJam->setAlignment(Qt::AlignmentFlag::AlignCenter);
        inputDepMenit = new QLineEdit(frame);
        inputDepMenit->setObjectName("inputDepMenit");
        inputDepMenit->setGeometry(QRect(560, 640, 51, 40));
        inputDepMenit->setFont(font5);
        inputDepMenit->setStyleSheet(QString::fromUtf8("border:3px solid;\n"
"border-radius:10px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(129, 129, 129);\n"
"color: rgb(60, 60, 60);"));
        inputDepMenit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        inputDepDetik = new QLineEdit(frame);
        inputDepDetik->setObjectName("inputDepDetik");
        inputDepDetik->setGeometry(QRect(640, 640, 51, 40));
        inputDepDetik->setFont(font5);
        inputDepDetik->setStyleSheet(QString::fromUtf8("border:3px solid;\n"
"border-radius:10px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(129, 129, 129);\n"
"color: rgb(60, 60, 60);"));
        inputDepDetik->setAlignment(Qt::AlignmentFlag::AlignCenter);
        delimiter2 = new QLabel(frame);
        delimiter2->setObjectName("delimiter2");
        delimiter2->setGeometry(QRect(540, 640, 121, 31));
        delimiter2->setFont(font3);
        delimiter2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        labelJudul = new QLabel(frame);
        labelJudul->setObjectName("labelJudul");
        labelJudul->setGeometry(QRect(230, 10, 361, 61));
        QFont font6;
        font6.setPointSize(15);
        font6.setBold(true);
        font6.setKerning(false);
        labelJudul->setFont(font6);
        labelJudul->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 57, 97);\n"
"color: rgb(255, 255, 255);"));
        labelJudul->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        labelKeterangan = new QLabel(frame);
        labelKeterangan->setObjectName("labelKeterangan");
        labelKeterangan->setGeometry(QRect(80, 800, 200, 40));
        labelKeterangan->setFont(font1);
        labelKeterangan->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        outputKeterangan = new QLabel(frame);
        outputKeterangan->setObjectName("outputKeterangan");
        outputKeterangan->setGeometry(QRect(80, 840, 631, 131));
        outputKeterangan->setFont(font1);
        outputKeterangan->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 0, 0);\n"
"border:2px solid rgb(0,0,0);\n"
"border-radius:10px;"));
        outputKeterangan->setScaledContents(true);
        outputKeterangan->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        outputKeterangan->setWordWrap(true);
        labelInputEdit = new QLabel(frame);
        labelInputEdit->setObjectName("labelInputEdit");
        labelInputEdit->setGeometry(QRect(50, 120, 700, 40));
        labelInputEdit->setFont(font1);
        labelInputEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 57, 97);\n"
"color: rgb(255, 255, 255);\n"
"border:1px solid rgb(0,0,0);\n"
"border-radius:20px;"));
        labelInputEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btnDelete = new QPushButton(frame);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setGeometry(QRect(315, 720, 181, 50));
        btnDelete->setFont(font2);
        btnDelete->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        btnDelete->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid rgb(255,255,255);\n"
"	border-radius:20px;\n"
"	color: black;\n"
"	background-color: rgb(234, 126, 17);\n"
"	text-align: right;\n"
"}\n"
"QPushButton:Hover{\n"
"	background-color: rgb(234, 78, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(170, 255, 0);\n"
"}"));
        labelInputEdit_2 = new QLabel(frame);
        labelInputEdit_2->setObjectName("labelInputEdit_2");
        labelInputEdit_2->setGeometry(QRect(50, 410, 700, 40));
        labelInputEdit_2->setFont(font1);
        labelInputEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 57, 97);\n"
"color: rgb(255, 255, 255);\n"
"border:1px solid rgb(0,0,0);\n"
"border-radius:20px;"));
        labelInputEdit_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 1000, 351, 61));
        QFont font7;
        font7.setPointSize(10);
        label->setFont(font7);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 57, 97);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 161, 70));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/img/Logo-REKA--1536x530.png);\n"
"background-color: rgb(255,255,255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);
        header_2 = new QLabel(frame);
        header_2->setObjectName("header_2");
        header_2->setGeometry(QRect(0, 1000, 1920, 80));
        header_2->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 57, 97);"));
        header_3 = new QLabel(frame);
        header_3->setObjectName("header_3");
        header_3->setGeometry(QRect(-60, 0, 281, 80));
        header_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);\n"
"color: rgb(255, 255, 255);\n"
"border:1px solid rgb(255,255,255);\n"
"border-radius:40px;"));
        btnExit = new QPushButton(frame);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(1850, 20, 40, 40));
        btnExit->setStyleSheet(QString::fromUtf8("image: url(:/img/exit.png);\n"
"background-color: rgb(255, 0, 0);"));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(585, 200, 31, 31));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/img/generate.png);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(525, 730, 31, 31));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/img/reset.png);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(585, 260, 31, 31));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/img/browse.png);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(145, 730, 27, 27));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/img/save.png);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(325, 725, 35, 40));
        label_7->setStyleSheet(QString::fromUtf8("image: url(:/img/delete.png);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(280, 475, 31, 31));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/img/station.png);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(135, 600, 31, 25));
        label_9->setStyleSheet(QString::fromUtf8("image: url(:/img/time.png);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(490, 600, 31, 25));
        label_10->setStyleSheet(QString::fromUtf8("image: url(:/img/time.png);\n"
"background-color: rgba(255, 255, 255, 0);"));
        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font5);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font5);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font5);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 1000)
            tableWidget->setRowCount(1000);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(980, 189, 800, 775));
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setFont(font5);
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"	color:black;\n"
"	gridline-color:black;\n"
"	selection-background-color:blue;\n"
"	border:2px solid black;\n"
"}\n"
"QTableWidget::item::selected{\n"
"	color:black;\n"
"	background-color: rgb(0, 170, 255);\n"
"}\n"
"QHeaderView{\n"
"	background-color:white;\n"
"	color:black;\n"
"}\n"
"QHeaderView::section{\n"
"	background-color:orange;\n"
"	color:black;\n"
"	border:1px solid black;\n"
"}"));
        tableWidget->setFrameShape(QFrame::Shape::NoFrame);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        tableWidget->setAutoScrollMargin(1);
        tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidget->setRowCount(1000);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget->verticalHeader()->setVisible(false);
        btnResetName = new QPushButton(frame);
        btnResetName->setObjectName("btnResetName");
        btnResetName->setGeometry(QRect(570, 310, 171, 50));
        btnResetName->setFont(font2);
        btnResetName->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid rgb(255,255,255);\n"
"	border-radius:20px;\n"
"	color: black;\n"
"	background-color: rgb(234, 126, 17);\n"
"	text-align: right;\n"
"}\n"
"QPushButton:Hover{\n"
"	background-color: rgb(234, 78, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(170, 255, 0);\n"
"}"));
        label_11 = new QLabel(frame);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(585, 320, 31, 31));
        label_11->setStyleSheet(QString::fromUtf8("image: url(:/img/reset.png);\n"
"background-color: rgba(255, 255, 255, 0);"));
        header_3->raise();
        header_2->raise();
        delimiter2->raise();
        labelJamBerangkat->raise();
        labelJamDatang->raise();
        strip->raise();
        labelStasiun->raise();
        labelRelasiKA->raise();
        labelNomorKA->raise();
        labelNamaKA->raise();
        kurung->raise();
        delimiter1->raise();
        btnSave->raise();
        btnGenerate->raise();
        btnResetList->raise();
        btnOpenFile->raise();
        labelPreview->raise();
        header->raise();
        inputNomorKA->raise();
        inputNamaKA->raise();
        inputRelasiKA1->raise();
        inputRelasiKA2->raise();
        inputStasiun1->raise();
        inputStasiun2->raise();
        inputArrJam->raise();
        inputArrMenit->raise();
        inputArrDetik->raise();
        inputDepJam->raise();
        inputDepMenit->raise();
        inputDepDetik->raise();
        labelJudul->raise();
        labelKeterangan->raise();
        outputKeterangan->raise();
        labelInputEdit->raise();
        btnDelete->raise();
        labelInputEdit_2->raise();
        label->raise();
        label_2->raise();
        btnExit->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        tableWidget->raise();
        btnResetName->raise();
        label_11->raise();
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        btnGenerate->setDefault(true);
        btnOpenFile->setDefault(true);
        btnResetList->setDefault(true);
        btnResetName->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "GAPEKA Generate", nullptr));
        labelNomorKA->setText(QCoreApplication::translate("MainWindow", "Nomor Kereta :", nullptr));
        labelNamaKA->setText(QCoreApplication::translate("MainWindow", "Nama Kereta   :", nullptr));
        labelRelasiKA->setText(QCoreApplication::translate("MainWindow", "Relasi Kereta   :", nullptr));
        labelStasiun->setText(QCoreApplication::translate("MainWindow", "Stasiun & Perhentian", nullptr));
        labelJamDatang->setText(QCoreApplication::translate("MainWindow", "Jam Datang", nullptr));
        labelJamBerangkat->setText(QCoreApplication::translate("MainWindow", "Jam Berangkat", nullptr));
        btnSave->setText(QCoreApplication::translate("MainWindow", "Save to List       ", nullptr));
        btnGenerate->setText(QCoreApplication::translate("MainWindow", "Generate CSV   ", nullptr));
        btnOpenFile->setText(QCoreApplication::translate("MainWindow", "Browse File    ", nullptr));
        btnResetList->setText(QCoreApplication::translate("MainWindow", "Reset List      ", nullptr));
        labelPreview->setText(QCoreApplication::translate("MainWindow", "Data Preview", nullptr));
        delimiter1->setText(QCoreApplication::translate("MainWindow", ":           :", nullptr));
        kurung->setText(QCoreApplication::translate("MainWindow", "(         )", nullptr));
        strip->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        header->setText(QString());
        inputNomorKA->setText(QString());
        inputRelasiKA1->setText(QString());
        inputRelasiKA2->setText(QString());
        inputStasiun1->setText(QString());
        inputStasiun2->setText(QString());
        inputArrJam->setText(QString());
        inputArrMenit->setText(QString());
        inputArrDetik->setText(QString());
        inputDepJam->setText(QString());
        inputDepMenit->setText(QString());
        inputDepDetik->setText(QString());
        delimiter2->setText(QCoreApplication::translate("MainWindow", ":           :", nullptr));
        labelJudul->setText(QCoreApplication::translate("MainWindow", "SOFTWARE GAPEKA GENERATE\n"
"V1.1.1", nullptr));
        labelKeterangan->setText(QCoreApplication::translate("MainWindow", "KETERANGAN :", nullptr));
        outputKeterangan->setText(QString());
        labelInputEdit->setText(QCoreApplication::translate("MainWindow", "Output File Name", nullptr));
        btnDelete->setText(QCoreApplication::translate("MainWindow", "Delete from List   ", nullptr));
        labelInputEdit_2->setText(QCoreApplication::translate("MainWindow", "Entry and Edit Data", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Software GAPEKA Generate V1.1.1 Copyright \302\2512025\n"
"PT. Rekaindo Global Jasa (INKA Group) Engineer Team", nullptr));
        label_2->setText(QString());
        header_2->setText(QString());
        header_3->setText(QString());
        btnExit->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Stasiun & Perhentian", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Jam Datang", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Jam Berangkat", nullptr));
        btnResetName->setText(QCoreApplication::translate("MainWindow", "Reset Name    ", nullptr));
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
