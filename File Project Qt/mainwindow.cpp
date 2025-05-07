/*
 * Author   : PT. Rekaindo Global Jasa Engineer Team X Mechatronics PENS
 * Version  : V1.1.1
 * Date     : 13/01/2025
 * Note     : -
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QShortcut>
#include <QKeySequence>
#include <QDateTime>
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window |Qt::FramelessWindowHint);
    this->installEventFilter(this);
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &MainWindow::on_tableCellClicked);

    // QShortcut *shortcutSave = new QShortcut(QKeySequence(Qt::Key_PageUp), this);
    // connect(shortcutSave, &QShortcut::activated, this, &MainWindow::on_btnSave_released);

    QShortcut *shortcutSaveReturn = new QShortcut(QKeySequence(Qt::Key_Return), this);
    QShortcut *shortcutSaveEnter = new QShortcut(QKeySequence(Qt::Key_Enter), this);

    connect(shortcutSaveReturn, &QShortcut::activated, this, &MainWindow::on_btnSave_released);
    connect(shortcutSaveEnter, &QShortcut::activated, this, &MainWindow::on_btnSave_released);

    QShortcut *shortcutDelete = new QShortcut(QKeySequence(Qt::Key_Delete), this);
    connect(shortcutDelete, &QShortcut::activated, this, &MainWindow::on_btnDelete_released);

    ui->tableWidget->setColumnWidth(0, 346);
    ui->tableWidget->setColumnWidth(1, 225);
    ui->tableWidget->setColumnWidth(2, 225);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);

    ui->inputStasiun2->setMaxLength(4);
    ui->inputRelasiKA1->setMaxLength(4);
    ui->inputRelasiKA2->setMaxLength(4);
    ui->inputArrJam->setMaxLength(2);
    ui->inputArrMenit->setMaxLength(2);
    ui->inputArrDetik->setMaxLength(2);
    ui->inputDepJam->setMaxLength(2);
    ui->inputDepMenit->setMaxLength(2);
    ui->inputDepDetik->setMaxLength(2);
    selectedIndex = -1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnSave_released() // tombol simpan ke list
{
    QString namaStasiun1  = periksaKapital(ui->inputStasiun1->text());
    QString namaStasiun2  = ui->inputStasiun2->text().toUpper();
    QString jamArr        = ui->inputArrJam->text();
    QString menitArr      = ui->inputArrMenit->text();
    QString detikArr      = ui->inputArrDetik->text();
    QString jamDep        = ui->inputDepJam->text();
    QString menitDep      = ui->inputDepMenit->text();
    QString detikDep      = ui->inputDepDetik->text();

    if (namaStasiun1.isEmpty() || namaStasiun2.isEmpty()) {
        QMessageBox::warning(this, "Input Tidak Lengkap", "Nama Stasiun harus diisi lengkap!");
        return;
    } else if (jamArr.isEmpty() || jamDep.isEmpty()){
        QMessageBox::warning(this, "Input Tidak Lengkap", "Waktu datang dan berangkat harus diisi lengkap!");
        return;
    } else if (!isNumber(jamArr) && jamArr != "Ls" && jamArr != "ls" && jamArr != "-"){
        QMessageBox::warning(this, "Input Tidak Valid", "Waktu datang berupa angka atau huruf tertentu.");
        return;
    } else if (!isNumber(jamDep) && jamDep != "Ls" && jamDep != "ls" && jamDep != "-"){
        QMessageBox::warning(this, "Input Tidak Valid", "Waktu berangkat berupa angka atau huruf tertentu.");
        return;
    } else if (jamArr.toInt() > 23 || jamDep.toInt() > 23){
        QMessageBox::warning(this, "Input Tidak Valid", "Penulisan jam tidak valid");
        return;
    } else if (menitArr.toInt() > 59 || menitDep.toInt() > 59 || detikArr.toInt() > 59 || detikDep.toInt() > 59){
        QMessageBox::warning(this, "Input Tidak Valid", "Penulisan menit/detik tidak valid");
        return;
    } else { }

    for(QChar c : namaStasiun1+namaStasiun2){
        if(c.isNumber()){
            QMessageBox::warning(this, "Input Tidak Valid", "Nama Stasiun hanya boleh mengandung huruf.");
            return;
        }
    }

    // selectedIndex = ui->tableWidget->currentRow();
    qDebug() << selectedIndex;
    if (selectedIndex >= 0) {
        Perjalanan lintas;
        lintas.stasiun = namaStasiun1 + " (" + namaStasiun2 + ")";
        if(!isNumber(jamArr) && jamArr != "-") lintas.datang = jamArr[0].toUpper() + jamArr.mid(1).toLower();
        else if(jamArr == "Ls" || jamArr == "-") lintas.datang = jamArr;
        else {
            // int jam = jamArr.toInt();
            // jamArr = QString::number(jam);
            lintas.datang = jamArr + ':' + menitArr + ':' + detikArr;
        }

        if(jamDep == "-") lintas.berangkat = jamDep;
        else {
            // int jam = jamDep.toInt();
            // jamDep = QString::number(jam);
            lintas.berangkat = jamDep + ':' + menitDep + ':' + detikDep;
        }

        ListPerjalanan[selectedIndex] = lintas;

        ui->tableWidget->setItem(selectedIndex, 0, new QTableWidgetItem(lintas.stasiun));
        ui->tableWidget->setItem(selectedIndex, 1, new QTableWidgetItem(lintas.datang));
        ui->tableWidget->setItem(selectedIndex, 2, new QTableWidgetItem(lintas.berangkat));

        ui->outputKeterangan->setText(QDateTime::currentDateTime().toString("HH:mm:ss") + " : UPDATE DATA " + lintas.stasiun.toUpper() + " " + lintas.datang + " " + lintas.berangkat + " berhasil");
        ui->tableWidget->clearSelection();
        clearSelection();
        selectedIndex = -1;
        // return;
    } else {
        Perjalanan lintas;
        lintas.stasiun = namaStasiun1 + " (" + namaStasiun2 + ")";
        if(!isNumber(jamArr) && jamArr != "-") lintas.datang = jamArr[0].toUpper() + jamArr.mid(1).toLower();
        else if(jamArr == "Ls" || jamArr == "-") lintas.datang = jamArr;
        else {
            // int jam = jamArr.toInt();
            // jamArr = QString::number(jam);
            lintas.datang = jamArr + ':' + menitArr + ':' + detikArr;
        }

        if(jamDep == "-") lintas.berangkat = jamDep;
        else {
            // int jam = jamDep.toInt();
            // jamDep = QString::number(jam);
            lintas.berangkat = jamDep + ':' + menitDep + ':' + detikDep;
        }

        ListPerjalanan.append(lintas);

        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);
        // qDebug() << row;
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(lintas.stasiun));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(lintas.datang));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(lintas.berangkat));

        ui->outputKeterangan->setText(QDateTime::currentDateTime().toString("HH:mm:ss") + " : ENTRY DATA " + lintas.stasiun.toUpper() + " " + lintas.datang + " " + lintas.berangkat + " berhasil");
        clearSelection();
    }
    ui->inputStasiun1->setFocus();
    ui->inputStasiun1->selectAll();
}

void MainWindow::on_btnGenerate_released() // tombol generate csv
{
    if (ui->tableWidget->rowCount() == 0) {
        QMessageBox::warning(this, "Data kosong", "Tidak ada data untuk di-generate.");
        return;
    }

    QString nomorKA    = ui->inputNomorKA->text().toUpper();
    QString namaKA     = periksaKapital(ui->inputNamaKA->text());
    QString relasiKA1  = ui->inputRelasiKA1->text().toUpper();
    QString relasiKA2  = ui->inputRelasiKA2->text().toUpper();
    QString relasiKA   = relasiKA1 + "-" + relasiKA2;
    QString folderPath = "C:/Hasil File GAPEKA/";

    QString filePath = folderPath + "KA " + nomorKA + ',' + namaKA + ',' + relasiKA + ".csv";

    if (nomorKA.isEmpty() || namaKA.isEmpty() || relasiKA1.isEmpty() || relasiKA2.isEmpty()) {
        QMessageBox::warning(this, "Input Tidak Lengkap", "Nomor, Nama, atau Relasi Kereta tidak boleh kosong!");
        return;
    }
    for(QChar c : nomorKA){
        if(!c.isLetterOrNumber()){
            QMessageBox::warning(this, "Input Tidak Valid", "Nomor Kereta hanya berisi angka atau dengan huruf.");
            return;
        }
    }
    for(QChar c : namaKA){
        if(!c.isLetterOrNumber() && c != " "){
            QMessageBox::warning(this, "Input Tidak Valid", "Nama Kereta hanya berisi huruf atau dengan angka.");
            return;
        }
    }
    for(QChar c : relasiKA){
        if(!c.isLetterOrNumber() && c != "-"){
            QMessageBox::warning(this, "Input Tidak Valid", "Relasi Kereta hanya berisi huruf.");
            return;
        } else if(c.isNumber()){
            QMessageBox::warning(this, "Input Tidak Valid", "Relasi Kereta hanya berisi huruf.");
            return;
        }
    }

    QDir dir;
    if (!dir.exists(folderPath)) {
        if (!dir.mkpath(folderPath)) {
            QMessageBox::critical(this, "Error", "Tidak dapat membuat folder!");
            return;
        }
    }

    if (QFile::exists(filePath)) {
        int ret = QMessageBox::question(this, "Konfirmasi", "File dengan nama ini sudah ada. Apakah Anda ingin menggantinya?",
                                        QMessageBox::Yes | QMessageBox::No);
        if (ret == QMessageBox::No) {
            return;
        }
    }

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Tidak dapat membuka file untuk ditulis!");
        return;
    }

    QTextStream out(&file);
    out << "Stasiun dan Perhentian;Datang;Berangkat;\n";
    for (const Perjalanan &lintas : ListPerjalanan) {
        out << lintas.stasiun   << ";"
            << lintas.datang    << ";"
            << lintas.berangkat << ";\n";
    }

    file.close();
    QMessageBox::information(this, "Sukses", "File CSV tersimpan di " + filePath);
}

void MainWindow::on_tableCellClicked(int row, int column) // index terpilih dari tabel
{
    selectedIndex = row;
    if (row >= 0) {
        Perjalanan lintasNow = ListPerjalanan[row];
        // qDebug() << row;

        QString stasiun = lintasNow.stasiun;
        QString kota;
        QString kode;

        parsingStasiun(stasiun, kota, kode);

        ui->inputStasiun1->setText(kota);
        ui->inputStasiun2->setText(kode);

        QStringList arr = lintasNow.datang.split(':');
        if (arr.size() == 3){
            ui->inputArrJam->setText(arr[0]);
            ui->inputArrMenit->setText(arr[1]);
            ui->inputArrDetik->setText(arr[2]);
        } else{
            ui->inputArrJam->setText(lintasNow.datang);
            ui->inputArrMenit->setText("");
            ui->inputArrDetik->setText("");
        }

        QStringList dep = lintasNow.berangkat.split(':');
        if (dep.size() == 3){
            ui->inputDepJam->setText(dep[0]);
            ui->inputDepMenit->setText(dep[1]);
            ui->inputDepDetik->setText(dep[2]);
        } else{
            ui->inputDepJam->setText(lintasNow.berangkat);
            ui->inputDepMenit->setText("");
            ui->inputDepDetik->setText("");
        }
    }
    ui->outputKeterangan->setText(QDateTime::currentDateTime().toString("HH:mm:ss") + " : Indeks terpilih = " + QString::number(selectedIndex+1));
}

void MainWindow::on_btnOpenFile_released() // tombol browse file
{
    QString filePath = QFileDialog::getOpenFileName(this, "Pilih File CSV", "C:/Hasil File GAPEKA", "CSV Files (*.csv);;All Files (*)");
    if (filePath.isEmpty()) {
        ui->outputKeterangan->setText(QDateTime::currentDateTime().toString("HH:mm:ss") + " : Tidak ada file yang dipilih.");
        return;
    }

    QFileInfo fileInfo(filePath);
    QString fileName = fileInfo.baseName();

    QStringList fileParts = fileName.split(',');
    if (fileParts.size() == 3) {
        QString nomorKA  = fileParts[0].mid(2).trimmed();
        QString namaKA   = fileParts[1].trimmed();
        QString relasiKA = fileParts[2].trimmed();

        // Update nilai di input field
        ui->inputNomorKA->setText(nomorKA);
        ui->inputNamaKA->setText(namaKA);
        QStringList parts = relasiKA.split('-');
        ui->inputRelasiKA1->setText(parts[0]);
        ui->inputRelasiKA2->setText(parts[1]);
    }

    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);

        ListPerjalanan.clear();

        in.readLine();

        ui->tableWidget->setRowCount(0);
        int row = 0;

        while (!in.atEnd()) {
            QString line = in.readLine().trimmed();
            QStringList fields = line.split(';');

            if (fields.size() > 3) {
                QString namaStasiun  = fields[0];
                QString jamDatang    = fields[1];
                QString jamBerangkat = fields[2];

                Perjalanan lintas;
                lintas.stasiun   = namaStasiun;
                lintas.datang    = jamDatang;
                lintas.berangkat = jamBerangkat;
                ListPerjalanan.append(lintas);

                ui->tableWidget->insertRow(row);

                for (int col = 0; col < fields.size(); ++col) {
                    QTableWidgetItem *item = new QTableWidgetItem(fields[col].trimmed());
                    ui->tableWidget->setItem(row, col, item);
                }
                row++;
            }
        }
    }
    ui->outputKeterangan->setText(QDateTime::currentDateTime().toString("HH:mm:ss") + " : File " + fileName +".csv berhasil dibuka.");
    file.close();
}

void MainWindow::on_btnResetList_released() // tombol reset list
{
    ListPerjalanan.clear();
    ui->inputStasiun1->clear();
    ui->inputStasiun2->clear();
    ui->inputArrJam->clear();
    ui->inputArrMenit->clear();
    ui->inputArrDetik->clear();
    ui->inputDepJam->clear();
    ui->inputDepMenit->clear();
    ui->inputDepDetik->clear();

    ui->tableWidget->setRowCount(0);
}

bool MainWindow::isNumber(const QString &input) // fungsi untuk cek number
{
    for (int i = 0; i < input.length(); ++i) {
        QChar ch = input[i];
        if (!ch.isNumber()) {
            return false;
        }
    }
    return true;
}

QString MainWindow::periksaKapital(const QString &input) // fungsi untuk cek kapital
{
    QStringList words = input.split(' ', Qt::SkipEmptyParts);
    for (int i = 0; i < words.size(); ++i) {
        if (!words[i].isEmpty()) {
            words[i][0] = words[i][0].toUpper();
            words[i] = words[i].toLower();
            words[i][0] = words[i][0].toUpper();
        }
    }
    return words.join(' ');
}

void MainWindow::parsingStasiun(const QString &input, QString &city, QString &code) // fungsi untuk pisah data nama & kode stasiun
{
    int startIndex = input.indexOf('(');
    int endIndex = input.indexOf(')');

    if (startIndex != -1 && endIndex != -1 && endIndex > startIndex) {
        city = input.left(startIndex).trimmed();
        code = input.mid(startIndex + 1, endIndex - startIndex - 1).trimmed();
    }
}

void MainWindow::on_btnDelete_released() // tombol delete list
{
    if (ui->tableWidget->rowCount() == 0) {
        QMessageBox::warning(this, "Data kosong", "Tidak ada data untuk dihapus.");
        return;
    }

    if (selectedIndex >= 0){
        if (selectedIndex >= ui->tableWidget->rowCount()) {
            selectedIndex = ui->tableWidget->rowCount() - 1;
        }

        QString delStasiun = ui->tableWidget->item(selectedIndex, 0)->text().toUpper();
        QString delDatang = ui->tableWidget->item(selectedIndex, 1)->text();
        QString delBerangkat = ui->tableWidget->item(selectedIndex, 2)->text();

        ListPerjalanan.removeAt(selectedIndex);

        ui->tableWidget->removeRow(selectedIndex);

        ui->outputKeterangan->setText(QDateTime::currentDateTime().toString("HH:mm:ss") + " : DELETE DATA " + delStasiun + " " + delDatang + " " + delBerangkat + " berhasil");

        clearSelection();
    } else {
        QMessageBox::warning(this, "Indeks tidak valid", "Pilih data yang akan dihapus!");
        return;
    }
}

void MainWindow::on_inputArrJam_textChanged(const QString &arg1) // focus input jam
{
    if(arg1 == "-" || arg1 == "Ls" || arg1 == "ls") {
        ui->inputDepJam->setFocus();
        ui->inputDepJam->selectAll();
    } else if(arg1.length() == 2) {
        ui->inputArrMenit->setFocus();
        ui->inputArrMenit->selectAll();
    }
}

void MainWindow::on_inputArrMenit_textChanged(const QString &arg1) // focus input menit
{
    if(arg1.length() == 2) {
        ui->inputArrDetik->setFocus();
        ui->inputArrDetik->selectAll();
    }
    // else if (arg1.isEmpty()) ui->inputArrJam->setFocus();
}

void MainWindow::on_inputArrDetik_textChanged(const QString &arg1) // focus input detik
{
    if(arg1.length() == 2) {
        ui->inputDepJam->setFocus();
        ui->inputDepJam->selectAll();
    }
    // else if (arg1.isEmpty()) ui->inputArrMenit->setFocus();
}

void MainWindow::on_inputDepJam_textChanged(const QString &arg1) // focus input jam
{
    if (arg1 == "-" || arg1 == "Ls" || arg1 == "ls") ui->btnSave->setFocus();
    else if(arg1.length() == 2) {
        ui->inputDepMenit->setFocus();
        ui->inputDepMenit->selectAll();
    }
    // else if (arg1.isEmpty()) ui->inputArrDetik->setFocus();
}

void MainWindow::on_inputDepMenit_textChanged(const QString &arg1)  // focus input menit
{
    if(arg1.length() == 2) {
        ui->inputDepDetik->setFocus();
        ui->inputDepDetik->selectAll();
    }
    // else if (arg1.isEmpty()) ui->inputDepJam->setFocus();
}

void MainWindow::on_inputDepDetik_textChanged(const QString &arg1) // focus input detik
{
    if(arg1.length() == 2) {
        ui->inputStasiun1->setFocus();
        ui->inputStasiun1->selectAll();
    }
    // else if (arg1.isEmpty()) ui->inputDepMenit->setFocus();
}

void MainWindow::on_btnExit_released() // tombol exit
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Keluar", "Anda yakin keluar aplikasi?",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QApplication::quit();
    }
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event) // klik luar tabel
{
    if (event->type() == QEvent::MouseButtonPress) {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);

        if (!ui->tableWidget->geometry().contains(mouseEvent->pos())) {
            ui->tableWidget->clearSelection();
            clearSelection();
            selectedIndex = -1;
            ui->outputKeterangan->setText(QDateTime::currentDateTime().toString("HH:mm:ss") + " : Siap menulis data baru.");
        }
    }
    return QMainWindow::eventFilter(obj, event);
}

void MainWindow::clearSelection() // hapus input data
{
    ui->inputStasiun1->clear();
    ui->inputStasiun2->clear();
    ui->inputArrJam->clear();
    ui->inputArrMenit->clear();
    ui->inputArrDetik->clear();
    ui->inputDepJam->clear();
    ui->inputDepMenit->clear();
    ui->inputDepDetik->clear();
}

void MainWindow::on_btnResetName_released() // hapus konfigurasi nama file
{
    ui->inputNomorKA->clear();
    ui->inputNamaKA->clear();
    ui->inputRelasiKA1->clear();
    ui->inputRelasiKA2->clear();
}

