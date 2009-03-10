#include "mainwindow.h"
 
#include <QWebView>
#include <QtGui>

MainWindow::MainWindow()
{
    // This is the Googles webpage that loads.
    QWebView *view = new QWebView(this);
    view->load(QUrl("http://maps.google.com/maps?hl=en&tab=wl")); 
    setCentralWidget(view);
}
