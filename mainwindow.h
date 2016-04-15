#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_bestaetigen_button_clicked();

    void on_abbrechen_button_clicked();

    void on_bearbeiten_button_clicked();

    void on_verbinden_button_clicked();

    void on_status_connection_linkActivated(const QString &link);

    void on_anzeige_clicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
