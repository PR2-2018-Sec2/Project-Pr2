#include "usuario_menu.h"
#include "ui_usuario_menu.h"

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

void usuario_menu::on_commandLinkButton_agregar_cuenta_clicked()
{
    cuenta = new agregar_cuenta_bancaria;
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
