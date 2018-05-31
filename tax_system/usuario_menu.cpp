#include "usuario_menu.h"
#include "ui_usuario_menu.h"
#include "tax_user.h"
#include "QDebug"
#include "QMessageBox"
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

void usuario_menu::set_user(Ctax_user aux)
{
    this->user_menu = aux;
    qDebug() << "\n" << this->user_menu.get_age();
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
    cuenta->show();
}

void usuario_menu::on_commandLinkButton_declarar_inmueble_clicked()
{
    declcasa->show();
}

void usuario_menu::on_commandLinkButton_declarar_automovil_clicked()
{
    declauto->show();
}

void usuario_menu::on_pushButton_ver_impuesto_clicked()
{
    Ctax_user a;
    a.set_id(this->user_menu.get_id());
    float tax = a.get_tax();
    std::string ref = std::to_string(tax);
    ref = ref.substr(0,ref.size()-3);
    QString ref_q = "Su impuesto total es: ";
    ref_q += QString::fromStdString(ref);
    ref_q += " $";
    QMessageBox::information(this,"Impuesto",ref_q);
}
