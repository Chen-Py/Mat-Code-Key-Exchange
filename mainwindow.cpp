#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "main_algorithm.h"
CPY cpy;
bool bt_1=0,bt_2=0,bt_3=0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(bt_1)return;
    bt_1=1;
    ui->pushButton->setText("Submitted");
    int m[6][6];

    cpy.Qs.m[1][1]=ui->lineEdit->text().toInt();
    cpy.Qs.m[1][2]=ui->lineEdit_2->text().toInt();
    cpy.Qs.m[1][3]=ui->lineEdit_3->text().toInt();
    cpy.Qs.m[1][4]=ui->lineEdit_4->text().toInt();
    cpy.Qs.m[1][5]=ui->lineEdit_5->text().toInt();

    cpy.Qs.m[2][1]=ui->lineEdit_6->text().toInt();
    cpy.Qs.m[2][2]=ui->lineEdit_7->text().toInt();
    cpy.Qs.m[2][3]=ui->lineEdit_8->text().toInt();
    cpy.Qs.m[2][4]=ui->lineEdit_9->text().toInt();
    cpy.Qs.m[2][5]=ui->lineEdit_10->text().toInt();

    cpy.Qs.m[3][1]=ui->lineEdit_11->text().toInt();
    cpy.Qs.m[3][2]=ui->lineEdit_12->text().toInt();
    cpy.Qs.m[3][3]=ui->lineEdit_13->text().toInt();
    cpy.Qs.m[3][4]=ui->lineEdit_14->text().toInt();
    cpy.Qs.m[3][5]=ui->lineEdit_15->text().toInt();

    cpy.Qs.m[4][1]=ui->lineEdit_16->text().toInt();
    cpy.Qs.m[4][2]=ui->lineEdit_17->text().toInt();
    cpy.Qs.m[4][3]=ui->lineEdit_18->text().toInt();
    cpy.Qs.m[4][4]=ui->lineEdit_19->text().toInt();
    cpy.Qs.m[4][5]=ui->lineEdit_20->text().toInt();

    cpy.Qs.m[5][1]=ui->lineEdit_21->text().toInt();
    cpy.Qs.m[5][2]=ui->lineEdit_22->text().toInt();
    cpy.Qs.m[5][3]=ui->lineEdit_23->text().toInt();
    cpy.Qs.m[5][4]=ui->lineEdit_24->text().toInt();
    cpy.Qs.m[5][5]=ui->lineEdit_25->text().toInt();

    cpy.Step_3();
    cpy.Step_4();
    for(int i=1;i<=10;i++)

    {
        for(int j=1;j<=10;j++)
        {
            ui->textBrowser_3->textCursor().insertText(QString::number(cpy.key[i][j]));
            if(j==10)break;
            ui->textBrowser_3->textCursor().insertText(" ");
        }
        if(i==10)break;
        ui->textBrowser_3->textCursor().insertText("\n");
    }
    return;
}

void MainWindow::on_lineEdit_inputRejected()
{
    ui->lineEdit_2->setFocus();
}

void MainWindow::on_lineEdit_2_inputRejected()
{
    ui->lineEdit_3->setFocus();
}

void MainWindow::on_lineEdit_3_inputRejected()
{
    ui->lineEdit_4->setFocus();
}

void MainWindow::on_lineEdit_4_inputRejected()
{
    ui->lineEdit_5->setFocus();
}

void MainWindow::on_lineEdit_5_inputRejected()
{
    ui->lineEdit_6->setFocus();
}

void MainWindow::on_lineEdit_6_inputRejected()
{
    ui->lineEdit_7->setFocus();
}

void MainWindow::on_lineEdit_7_inputRejected()
{
    ui->lineEdit_8->setFocus();
}

void MainWindow::on_lineEdit_8_inputRejected()
{
    ui->lineEdit_9->setFocus();
}

void MainWindow::on_lineEdit_9_inputRejected()
{
    ui->lineEdit_10->setFocus();
}

void MainWindow::on_lineEdit_10_inputRejected()
{
    ui->lineEdit_11->setFocus();
}

void MainWindow::on_lineEdit_11_inputRejected()
{
    ui->lineEdit_12->setFocus();
}

void MainWindow::on_lineEdit_12_inputRejected()
{
    ui->lineEdit_13->setFocus();
}

void MainWindow::on_lineEdit_13_inputRejected()
{
    ui->lineEdit_14->setFocus();
}

void MainWindow::on_lineEdit_14_inputRejected()
{
    ui->lineEdit_15->setFocus();
}

void MainWindow::on_lineEdit_15_inputRejected()
{
    ui->lineEdit_16->setFocus();
}

void MainWindow::on_lineEdit_16_inputRejected()
{
    ui->lineEdit_17->setFocus();
}

void MainWindow::on_lineEdit_17_inputRejected()
{
    ui->lineEdit_18->setFocus();
}

void MainWindow::on_lineEdit_18_inputRejected()
{
    ui->lineEdit_19->setFocus();
}

void MainWindow::on_lineEdit_19_inputRejected()
{
    ui->lineEdit_20->setFocus();
}

void MainWindow::on_lineEdit_20_inputRejected()
{
    ui->lineEdit_21->setFocus();
}

void MainWindow::on_lineEdit_21_inputRejected()
{
    ui->lineEdit_22->setFocus();
}

void MainWindow::on_lineEdit_22_inputRejected()
{
    ui->lineEdit_23->setFocus();
}

void MainWindow::on_lineEdit_23_inputRejected()
{
    ui->lineEdit_24->setFocus();
}

void MainWindow::on_lineEdit_24_inputRejected()
{
    ui->lineEdit_25->setFocus();
}

void MainWindow::on_lineEdit_25_inputRejected()
{
    ui->lineEdit->setFocus();
}


void MainWindow::on_pushButton_2_clicked()
{
    if(bt_2)return;
    bt_2=1;
    ui->pushButton_2->setText("Submitted");
    int p;
    p=ui->lineEdit_26->text().toInt();
    cpy.Step_1(p);
}

void MainWindow::on_pushButton_3_clicked()
{
    if(bt_3)return;
    bt_3=1;
    ui->pushButton_3->setText("Submitted");
    int p;
    p=ui->lineEdit_27->text().toInt();
    cpy.Step_2(p);
    for(int i=1;i<=5;i++)

    {
        for(int j=1;j<=5;j++)
        {
            ui->textBrowser_2->textCursor().insertText(QString::number(cpy.Ps.m[i][j]));
            if(j==5)break;
            ui->textBrowser_2->textCursor().insertText(" ");
        }
        if(i==5)break;
        ui->textBrowser_2->textCursor().insertText("\n");
    }
}
