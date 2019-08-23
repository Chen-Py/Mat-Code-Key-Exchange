#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_inputRejected();

    void on_lineEdit_2_inputRejected();

    void on_lineEdit_3_inputRejected();

    void on_lineEdit_4_inputRejected();

    void on_lineEdit_5_inputRejected();

    void on_lineEdit_6_inputRejected();

    void on_lineEdit_7_inputRejected();

    void on_lineEdit_8_inputRejected();

    void on_lineEdit_9_inputRejected();

    void on_lineEdit_10_inputRejected();

    void on_lineEdit_11_inputRejected();

    void on_lineEdit_12_inputRejected();

    void on_lineEdit_13_inputRejected();

    void on_lineEdit_14_inputRejected();

    void on_lineEdit_15_inputRejected();

    void on_lineEdit_16_inputRejected();

    void on_lineEdit_17_inputRejected();

    void on_lineEdit_18_inputRejected();

    void on_lineEdit_19_inputRejected();

    void on_lineEdit_20_inputRejected();

    void on_lineEdit_21_inputRejected();

    void on_lineEdit_22_inputRejected();

    void on_lineEdit_23_inputRejected();

    void on_lineEdit_24_inputRejected();

    void on_lineEdit_25_inputRejected();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
