/*
 * Author   : PT. Rekaindo Global Jasa Engineer Team X Mechatronics PENS
 * Version  : V1.1.1
 * Date     : 13/01/2025
 * Note     : -
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QFile>
#include <QTextStream>
#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

struct Perjalanan{
    QString stasiun;
    QString datang;
    QString berangkat;
    QString toString() const {
        return stasiun + ";" + datang + ";" + berangkat + ";";
    }
}; // struktur untuk data gapeka

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnSave_released();

    void on_btnGenerate_released();

    void on_btnOpenFile_released();

    void on_btnResetList_released();

    void on_btnDelete_released();

    void on_inputArrJam_textChanged(const QString &arg1);

    void on_inputArrMenit_textChanged(const QString &arg1);

    void on_inputArrDetik_textChanged(const QString &arg1);

    void on_inputDepJam_textChanged(const QString &arg1);

    void on_inputDepMenit_textChanged(const QString &arg1);

    void on_inputDepDetik_textChanged(const QString &arg1);

    void on_btnExit_released();

    void on_tableCellClicked(int row, int column);

    bool eventFilter(QObject *obj, QEvent *event);

    void clearSelection();

    void on_btnResetName_released();

private:
    Ui::MainWindow *ui;
    QList<Perjalanan> ListPerjalanan;
    bool isNumber(const QString &input);
    QString periksaKapital(const QString &input);
    void parsingStasiun(const QString &input, QString &city, QString &code);
    int selectedIndex = 0;
};
#endif // MAINWINDOW_H
