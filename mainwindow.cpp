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

void MainWindow::on_pushButton_4_clicked()
{
    if(bt_1)return;
    bt_1=1;
    ui->pushButton_4->setText("Submitted");
    long long temp=0,cnt=0;
    temp=ui->lineEdit_28->text().toLongLong();
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cpy.Qs.m[i][j]=(temp&((long long)3<<(cnt*2)))>>(cnt*2);
            cnt++;
        }
    }
    cpy.Step_3();
    cpy.Step_4();
    for(int i=1;i<=10;i++)

    {
        for(int j=1;j<=10;j++)
        {
            if(cpy.key[i][j])
                ui->textBrowser_3->textCursor().insertText("1");
            else
                ui->textBrowser_3->textCursor().insertText("0");
            if(j==10)break;
            ui->textBrowser_3->textCursor().insertText(" ");
        }
        if(i==10)break;
        ui->textBrowser_3->textCursor().insertText("\n");
    }
    return;
}


void MainWindow::on_pushButton_2_clicked()
{
    if(bt_2)return;
    bt_2=1;
    ui->pushButton_2->setText("Submitted");
    int seed;
    seed=ui->lineEdit_26->text().toInt();
    cpy.Step_1(seed);
}

void MainWindow::on_pushButton_3_clicked()
{
    if(bt_3)return;
    bt_3=1;
    ui->pushButton_3->setText("Submitted");
    long long p;
    p=ui->lineEdit_27->text().toLongLong();
    cpy.Step_2(p);
    long long temp=0,cnt=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            temp|=((long long)cpy.Ps.m[i][j]<<(cnt*2));
            cnt++;
        }
    }
    ui->textBrowser_2->textCursor().insertText(QString::number(temp));
}
