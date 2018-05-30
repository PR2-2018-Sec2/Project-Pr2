#include "prueba_clases.h"
#include "ui_prueba_clases.h"
#include "automobile.h"

Prueba_clases::Prueba_clases(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Prueba_clases)
{
    ui->setupUi(this);
}

Prueba_clases::~Prueba_clases()
{
    delete ui;
}

void Prueba_clases::on_pushButton_clicked()
{
    QString prueba;

    prueba = ui->lineEdit->text();

    std::string prueba_2 = prueba.toStdString();

    ui->listWidget->addItem(prueba);


}
