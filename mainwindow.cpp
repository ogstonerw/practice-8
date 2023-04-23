
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_Chebupel_clicked()
{
    Dialog window;
    window.setModal(true);
    window.exec();
}


void MainWindow::on_pushButton_clicked()
{
    QString login = ui -> login -> text();
    QString password = ui -> pass -> text();

    if (login == "user" && password == "user") {
        QMessageBox::information(this,"heh", "Successful");
    } else {
        QMessageBox::warning(this,"heeh", "Unsuccessful");
    }

}



