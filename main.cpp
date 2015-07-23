#include "mainwindow.h"
#include "dialog1.h"
#include <QApplication>
#include "stdio.h"
#include "iostream"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Dialog1 my1;
    if( my1.exec()==QDialog::Accepted ){
        w.show();
        return a.exec();
    }
    else{
        cout<<"no good"<<endl;
        return 0;
    }
}
