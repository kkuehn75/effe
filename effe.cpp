 #include <QApplication>
 #include <qwebview.h>
 #include <QPushButton>
 #include <QHBoxLayout> 

int main(int argc, char *argv[])
 {
    QApplication app(argc, argv);

// This is the main window that all the parts of the app. sould be on.  
    QWidget window;
    window.setWindowTitle("Browser App. Effe!!");

// This is the exit button it should be attched to the main window.  
    QPushButton *button = new QPushButton("Exit");
    QObject::connect(button, SIGNAL(clicked()),
		      &app, SLOT(quit()));

// This is the Googles webpage that loads.
    QWebView view;
    view.load(QUrl("http://maps.google.com/maps?hl=en&tab=wl"));

// This should should show all the parts of the app at the same time.     
    button->show();
    window.show();
    view.show();
    return app.exec();
 }
