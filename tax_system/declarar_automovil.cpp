#include "declarar_automovil.h"
#include "ui_declarar_automovil.h"

declarar_automovil::declarar_automovil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::declarar_automovil)
{
    ui->setupUi(this);
}

declarar_automovil::~declarar_automovil()
{
    delete ui;
}

void declarar_automovil::on_pushButton_cancelar_clicked()
{
    close();
}
