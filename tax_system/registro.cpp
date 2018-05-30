#include "registro.h"
#include "ui_registro.h"

registro::registro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registro)
{
    ui->setupUi(this);
}

registro::~registro()
{
    delete ui;
}


void registro::on_pushButton_salir_clicked()
{
    close();
}
