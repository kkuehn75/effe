 #include <QApplication>
 #include <QLabel>

 int main(int argc, char *argv[])
 {
     QApplication app(argc, argv);
     QLabel label("This is the start!");
     label.show();
     return app.exec();
 }