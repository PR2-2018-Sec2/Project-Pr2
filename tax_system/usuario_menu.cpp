#include "usuario_menu.h"
#include "ui_usuario_menu.h"
#include "tax_user.h"
#include "QDebug"

usuario_menu::usuario_menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::usuario_menu)
{
    ui->setupUi(this);
}

usuario_menu::~usuario_menu()
{
    delete ui;
}

void usuario_menu::on_pushButton_clicked()
{
    close();
}

void usuario_menu::set_user(Ctax_user *aux)
{
    this->user_menu = aux;
    qDebug() << "\n" << this->user_menu->get_age();
    this->cuenta = new add_cuenta_bancaria;
    this->cuenta->set_user(aux);
    this->declauto = new declarar_automovil;
    this->declauto->set_user(aux);
    this->declcasa = new declarar_casa;
    this->declcasa->set_user(aux);
}
/*
Ctax_user* usuario_menu::get_user()const{
   //return this->ui_3;
}
*/

void usuario_menu::on_commandLinkButton_agregar_cuenta_clicked()
{
    cuenta = new add_cuenta_bancaria;
    cuenta->show();
}

void usuario_menu::on_commandLinkButton_declarar_inmueble_clicked()
{
    declcasa = new declarar_casa;
    declcasa->show();
}

void usuario_menu::on_commandLinkButton_declarar_automovil_clicked()
{
    declauto = new declarar_automovil;
    declauto->show();
}

void usuario_menu::on_pushButton_ver_impuesto_clicked()
{

}
