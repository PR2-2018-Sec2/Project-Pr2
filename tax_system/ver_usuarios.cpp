#include "ver_usuarios.h"
#include "ui_ver_usuarios.h"

ver_usuarios::ver_usuarios(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ver_usuarios)
{
    ui->setupUi(this);
}

ver_usuarios::~ver_usuarios()
{
    delete ui;
}

void ver_usuarios::on_pushButton_clicked()
{
    this->ui->listWidget->clear();
    QStringList mamalo;
    int size = this->get_user.size();
    for(int i = 0;i < size;i++){
        QString aux = QString::fromStdString(this->get_user[i]);
        mamalo.append(aux);
    }

    this->ui->listWidget->addItems(mamalo);
}
