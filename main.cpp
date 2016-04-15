#include "mainwindow.h"
#include <QApplication>

void connectdb(){
    char *sql = "SELECT * from Person";
    connection con("dbname= user= password= hostaddr=127.0.0.1 port=5432");
    if (con.is_open()) {
       cout << "verbunden" << con.dbname() << endl;
    } else {
        cout << "fehlgeschlagen" << endl;
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
