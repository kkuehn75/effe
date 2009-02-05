 #include <QApplication>
 #include <qwebview.h>

 int main(int argc, char *argv[])
 {
     QApplication app(argc, argv);
     QWebView view;
     view.load(QUrl("http://maps.google.com/maps?hl=en&tab=wl"));
     view.show();
     return app.exec();
 }