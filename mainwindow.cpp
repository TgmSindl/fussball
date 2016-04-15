#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_verbinden_button_clicked()
{

}

void MainWindow::on_bearbeiten_button_clicked()
{

}

void MainWindow::on_bestaetigen_button_clicked()
{

}

void MainWindow::on_abbrechen_button_clicked()
{

}

void MainWindow::on_status_connection_linkActivated(const QString &link)
{

}

void MainWindow::on_anzeige_clicked(const QModelIndex &index)
{

}
