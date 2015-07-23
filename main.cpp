#include "mainwindow.h"
#include "dialog1.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Dialog1 my1;
    if( my1.exec()==QDialog::Accepted ){
        w.show();
        return a.exec();
    }
    else
        return 0;
}
