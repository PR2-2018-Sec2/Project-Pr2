#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_salir_clicked()
{
    close();
}

void Login::on_pushButton_registrar_clicked()
{
    registro *reg;

    reg = new registro;

    reg->show();
}

void Login::on_pushButton_entrar_clicked()
{
    usuario_menu *reg;

    reg = new usuario_menu;

    reg->show();

}
