/* Notes is an application for making simple notes.
Copyright JJ Posti <techtimejourney.net> 2018.
Released under GPL v.2. */

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::setWindowFlags(Qt::FramelessWindowHint);
};

MainWindow::~MainWindow()
{
    delete ui;
};


void MainWindow::closeEvent(QCloseEvent *events){
{
      events->ignore();}
};

void MainWindow::on_pushButton_clicked()
{
    qApp->exit();
};
