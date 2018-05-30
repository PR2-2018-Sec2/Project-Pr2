#include "declarar_casa.h"
#include "ui_declarar_casa.h"

declarar_casa::declarar_casa(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::declarar_casa)
{
    ui->setupUi(this);
}

declarar_casa::~declarar_casa()
{
    delete ui;
}

void declarar_casa::on_pushButton_cancelar_clicked()
{
    close();
}
