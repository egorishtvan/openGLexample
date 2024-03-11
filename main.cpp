#include "mainwindow.h"
#include"scene.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    scene *scen = new scene(&w);

    w.setCentralWidget(scen);
    w.show();
    return a.exec();
}
