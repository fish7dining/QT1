#include "mainwindow.h"
#include "dialog1.h"
#include <QApplication>
#include "stdio.h"
#include "iostream"
#include "QtGui"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Dialog1 my1;
    if( my1.exec()==QDialog::Accepted ){
        w.show();
        cout<<"enter mainWindow.";
        return a.exec();
    }
    else{
        cout<<"error."<<endl;
        return 0;
    }
}
