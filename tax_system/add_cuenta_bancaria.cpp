#include "add_cuenta_bancaria.h"
#include "ui_add_cuenta_bancaria.h"
#include <QDebug>

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

void add_cuenta_bancaria::set_user(Ctax_user *aux)
{
    this->user_banco = aux;
    qDebug() << "\n" << this->user_banco->get_age();
}

void add_cuenta_bancaria::on_pushButton_clicked()
{

}

void add_cuenta_bancaria::on_pushButton_2_clicked()
{
    close();
}
