#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout> 

#include <qwebview.h>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
     QApplication app(argc, argv);
     MainWindow window;
     window.show();
     return app.exec();
}
