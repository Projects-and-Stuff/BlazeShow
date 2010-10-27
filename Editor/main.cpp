#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    MainWindow mainWin;
    mainWin.setGeometry(50,100,1200,800);
    mainWin.show();

    return application.exec();
}
