#include "declarar_casa.h"
#include "ui_declarar_casa.h"
#include "QDebug"
#include <housing.h>
#include <QMessageBox>
declarar_casa::declarar_casa(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::declarar_casa)
{
    ui->setupUi(this);
}

void declarar_casa::set_user(Ctax_user aux)
{
    this->user_casa = aux;
    qDebug() << "\n" << this->user_casa.get_age();
}

declarar_casa::~declarar_casa()
{
    delete ui;
}

void declarar_casa::on_pushButton_cancelar_clicked()
{
    close();
}

void declarar_casa::on_pushButton_guardar_clicked()
{
    CHousing aux;
//ciudad,dir,precio,tamanio
    QString tipo = this->ui->comboBox_tipo_de_inmueble->currentText();
    QString estado = this->ui->comboBox_estado->currentText();
    QString ciudad = this->ui->lineEdit_ciudad->text();
    QString dir = this->ui->lineEdit_direccion->text();
    float tamanio = this->ui->spinBox_tamanio->value();
    double valor = this->ui->doubleSpinBox_price->value();

    Ctax_user user_h;

    int bandera = 0;

    user_h.set_id(this->user_casa.get_id());

    if( !estado.isEmpty() && !tipo.isEmpty() && !ciudad.isEmpty()
        && !dir.isEmpty() )
    {
        //debug
        /*
            int set_type_housing(const std::string);
            int set_size(const float);
            int set_state(const std::string);
            int set_valuation(const float);
            int set_address(const std::string);
            int set_city(const std::string);
        */
        if(aux.set_type_housing(tipo.toStdString()))
        {
            bandera = 1;
            QMessageBox::warning(this,"Error Inmueble","Error con el tipo de inmueble.");
        }

        if(aux.set_size(tamanio) == 1)
        {
            bandera = 1;
            QMessageBox::warning(this,"Error Tamaño","Tamaño invalido.");
        }

        if(aux.set_state(estado.toStdString()) == 1)
        {
           bandera = 1;
           QMessageBox::warning(this,"Error Estado","Error en el estado.");
        }

        if(aux.set_valuation(valor)== 1)
        {
            bandera = 1;
            QMessageBox::warning(this,"Error Valor","Valor invalido.");
        }

        if(aux.set_address(dir.toStdString()) == 1)
        {
            bandera = 1;
            QMessageBox::warning(this,"Error Direccion","Direccion invalida.");
        }

        if(aux.set_city(ciudad.toStdString()) == 1)
        {
            bandera = 1;
            QMessageBox::warning(this,"Error Ciudad","Ciudad invalida.");
        }

        if(bandera == 0){
            if(user_h.decl_housing(aux))
            {
                QMessageBox::information(this,"Exito","Inmueble Agregado");
            }
            else
            {
                QMessageBox::warning(this,"Error","Inmueble ya agregado");
            }

            ui->lineEdit_ciudad->clear();
            ui->lineEdit_direccion->clear();
            ui->spinBox_tamanio->clear();
            ui->doubleSpinBox_price->clear();
            close();
        }

    }
}
