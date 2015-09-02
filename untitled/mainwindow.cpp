#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>

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

void MainWindow::on_action_Otworz_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this,tr("Open File"),"/home/"," Text file (*.txt)");

    //QMessageBox::information(this, tr("Open"),filename);

    QFile file(filename);
    if(!file.exists()){
        qDebug()<< "NO.existe";
    }
    else {
        qDebug() << filename << "aaaaa";
    }

    QString line;
    ui->textEdit->clear();

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream stream(&file);
        while(!stream.atEnd()){
            line = stream.readLine();
            ui->textEdit->setText(ui->textEdit->toPlainText()+line+"\n");
            qDebug() << "linea; "<< line;
        }
    }

    file.close();


}

void MainWindow::on_action_Zamknij_triggered()
{
    QApplication::exit();
}
