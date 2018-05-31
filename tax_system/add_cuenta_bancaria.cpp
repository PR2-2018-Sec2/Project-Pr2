#include "add_cuenta_bancaria.h"
#include "ui_add_cuenta_bancaria.h"
#include <QDebug>
#include <tax_system.h>
#include <QMessageBox>
#include "login.h"
#include "ui_login.h"
#include "tax_system.h"
#include "qmessagebox.h"
#include "qdebug.h"
#include "bank.h"

add_cuenta_bancaria::add_cuenta_bancaria(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_cuenta_bancaria)
{
    ui->setupUi(this);
}

add_cuenta_bancaria::~add_cuenta_bancaria()
{
    delete ui;
}

void add_cuenta_bancaria::set_user(Ctax_user aux)
{
    this->user_banco = aux;
    std::string b = this->user_banco.get_id();
    this->id = b;
    QString a = QString::fromStdString(this->id);
    qDebug() << "\n" << a<<"asD";
}

std::__cxx11::string add_cuenta_bancaria::get_cedula() const
{
    return this->id;
}

void add_cuenta_bancaria::on_pushButton_clicked()
{
    Ctax_user user_bank;
    user_bank.set_id(this->get_cedula());

    QString numeroCuenta = ui->lineEdit_numeroCuenta->text();
    std::string numeroCuenta_b = numeroCuenta.toStdString();
    QString tipo = ui->comboBox_tipoCuenta->currentText();
    std::string tipo_b = tipo.toStdString() ;
    QString id = ui->lineEdit_cedula->text();
    std::string id_b = id.toStdString();
    QString banco = ui->comboBox_banco->currentText();
    std::string banco_b = banco.toStdString();
    QString email = ui->lineEdit_email->text();
    std::string email_b = email.toStdString();
    double balance = ui->lineEdit_balance->value();
    //std::string balance_b = balance.toStdString();
    std::string x; // El problema se encuentra en este sitio
    QString rm = QString::fromStdString(this->user_banco.get_id());
    qDebug() << "\n" << rm;
    qDebug() << "A";
    //std::cout << "*"<<rm<<"*";
    qDebug() << "A\n";


    std::string a = (user_banco.get_id());
    int bandera = 0;
    Cbank_account aux;
    QString b;

    a = (user_banco.get_id());

    b = QString::fromStdString(a);

    qDebug() << b << user_banco.get_age();

    if(!numeroCuenta.isEmpty() && !tipo.isEmpty() && !id.isEmpty()
        && !email.isEmpty() && numeroCuenta.size() == 20)
    {
        QString prub = QString::fromStdString(aux.get_id());

        qDebug() << balance << prub;

        if((aux.set_id(id_b) == 1) || (aux.get_id() != user_bank.get_id()))
        {
            bandera = 1;
            QMessageBox::warning(this,"Error Cedula","Cedula no coinciden.");
        }

        if(aux.set_account_number(numeroCuenta_b) == 1)
        {
            bandera = 1;
            QMessageBox::warning(this,"Error N° Cuenta","Numero de cuenta invalido.");
        }

        if((aux.set_account_type(tipo_b)) == 1)
        {
           bandera = 1;
           QMessageBox::warning(this,"Error Tipo de Cuenta","Error en el tipo de cuenta.");
        }

        if(aux.set_email(email_b) == 1)
        {
            bandera = 1;
            QMessageBox::warning(this,"Error Email","Error en el email.");
        }

        if(aux.set_bank(banco_b) == 1)
        {
            bandera = 1;
            QMessageBox::warning(this,"Error Banco","Error en el banco selecciono.");
        }

        if(aux.set_balance(balance) == 1)
        {
            bandera = 1;
            QMessageBox::warning(this,"Error Balance","Error Balance Invalido.");
        }

        if(numeroCuenta.size() != 20)
        {
            bandera = 1;
            QMessageBox::warning(this,"Error","Tamaño de cuenta invalido.");
        }
        if(bandera == 0){
            if(user_bank.add_account(aux))
            {
                QMessageBox::information(this,"Exito","Cuenta Agregada");
            }
            else
            {
                QMessageBox::warning(this,"Error","Cuenta ya agregada");
            }

            ui->lineEdit_balance->clear();
            ui->lineEdit_cedula->clear();
            ui->lineEdit_email->clear();
            ui->lineEdit_numeroCuenta->clear();
            close();
        }

    }
    else
    {

        // Problema al acceder aqui
        //this->user_banco->add_account(this->user_banco);
        QMessageBox::warning(this,"Error","Error en los campos.");
    }









}

void add_cuenta_bancaria::on_pushButton_2_clicked()
{
    close();
}
