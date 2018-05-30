#include "agregar_cuenta_bancaria.h"
#include "ui_agregar_cuenta_bancaria.h"

agregar_cuenta_bancaria::agregar_cuenta_bancaria(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::agregar_cuenta_bancaria)
{
    ui->setupUi(this);
}

agregar_cuenta_bancaria::~agregar_cuenta_bancaria()
{
    delete ui;
}

void agregar_cuenta_bancaria::on_pushButton_cancelar_clicked()
{
    close();
}
