#include "sqlwindow.h"
#include "ui_sqlwindow.h"

SQLWindow::SQLWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SQLWindow)
{
    ui->setupUi(this);
}

SQLWindow::~SQLWindow()
{
    delete ui;
}
