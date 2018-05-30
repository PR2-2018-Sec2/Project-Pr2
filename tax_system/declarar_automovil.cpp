#include "declarar_automovil.h"
#include "ui_declarar_automovil.h"
#include "QDebug"
declarar_automovil::declarar_automovil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::declarar_automovil)
{
    ui->setupUi(this);
}

void declarar_automovil::set_user(Ctax_user *aux)
{
    this->user_auto = aux;
    qDebug() << "\n" << this->user_auto->get_age();
}

declarar_automovil::~declarar_automovil()
{
    delete ui;
}

void declarar_automovil::on_pushButton_cancelar_clicked()
{
    close();
}

void declarar_automovil::on_pushButton_guardar_clicked()
{

}
