#include "agregar_cuenta_bancaria.h"
#include "ui_agregar_cuenta_bancaria.h"
#include "login.h"
#include "usuario_menu.h"
#include "qdebug.h"
#include <tax_system.h>

agregar_cuenta_bancaria::agregar_cuenta_bancaria(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::agregar_cuenta_bancaria)
{
    ui->setupUi(this);
}

void agregar_cuenta_bancaria::set_user(Ctax_user *aux)
{
    this->user_banco = aux;
    qDebug() << "\n" << this->user_banco->get_age();

}

agregar_cuenta_bancaria::~agregar_cuenta_bancaria()
{
    delete ui;
}

void agregar_cuenta_bancaria::on_pushButton_cancelar_clicked()
{
    close();
}


void agregar_cuenta_bancaria::on_pushButton_clicked()
{
    Cbank_account ban;
    Ctax_system a;
    QString cuenta = ui->lineEdit_numeroCuenta->text();
    //std::string cuenta_c = toStdString(cuenta);



    //a.cl.add_account();
}


