#include "my_window.h"
#include "ui_mywindow.h"

MyWindow::MyWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyWindow)
{
    ui->setupUi(this);
}

MyWindow::~MyWindow()
{
    delete ui;
}


void MyWindow::on_pushButton_clicked()
{
    ui -> label->setText("button is clicked just now");
}

