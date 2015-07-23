#include "dialog1.h"
#include "ui_dialog1.h"
#include "stdio.h"
#include "iostream"
#include "QMessageBox"
#include "QLineEdit"

using namespace std;


Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
    //ui->lineEdit_2->setEchoMode(QLineEdit::Password);
}

Dialog1::~Dialog1()
{
    delete ui;
}


void Dialog1::on_pushButton_clicked()
{
    if( ui->lineEdit->text()=="root" &&
            ui->lineEdit_2->text()=="1"){
        accept();
    }
    else{
        QMessageBox::warning(this, tr("Warning"), tr("Username or Password Error!"),QMessageBox::Yes);
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit->setFocus();
    }
}
