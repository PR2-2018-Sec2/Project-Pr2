#include "declarar_casa.h"
#include "ui_declarar_casa.h"
#include "QDebug"
declarar_casa::declarar_casa(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::declarar_casa)
{
    ui->setupUi(this);
}

void declarar_casa::set_user(Ctax_user *aux)
{
    this->user_casa = aux;
    qDebug() << "\n" << this->user_casa->get_age();
}

declarar_casa::~declarar_casa()
{
    delete ui;
}

void declarar_casa::on_pushButton_cancelar_clicked()
{
    close();
}