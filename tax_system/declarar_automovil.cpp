#include "declarar_automovil.h"
#include "ui_declarar_automovil.h"
#include "QDebug"
#include <tax_user.h>
#include <QMessageBox>

declarar_automovil::declarar_automovil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::declarar_automovil)
{
    ui->setupUi(this);
}

void declarar_automovil::set_user(Ctax_user aux)
{
    this->user_auto = aux;
    qDebug() << "\n" << this->user_auto.get_age();
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
    QString marca = ui->lineEdit_marca->text();
    QString modelo = ui->lineEdit_modelo->text();
    int ano = ui->spinBox_ano->value();
    QString placa = ui->lineEdit_placa->text();
    float precio = ui->lineEdit_precio->value();

    std::string marca_a = marca.toStdString();
    std::string modelo_a = modelo.toStdString();
    std::string placa_a  = placa.toStdString();

    Ctax_user user_a;
    int band = 0;
    Cautomobile aux;
    if (aux.set_lin_plate(placa_a) == 1){
        QMessageBox::warning(this,"Error Placa","La Placa debe tener 7 caracteres.");
        band = 1;
    }
    if (band == 0){
        placa = QString::fromStdString(placa_a);
        qDebug() << placa;
        user_a.set_id(this->user_auto.get_id());
        aux.set_brand(marca_a);
        aux.set_year(ano);
        aux.set_price(precio);
        aux.set_model(modelo_a);
        user_a.decl_automobile(aux);
        QMessageBox::information(this,"Informacion","Se declaro el carro.");

        ui->lineEdit_marca->clear();
        ui->lineEdit_modelo->clear();
        ui->lineEdit_placa->clear();
        close();
    }

}
