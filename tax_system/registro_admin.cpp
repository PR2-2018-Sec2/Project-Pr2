#include "registro_admin.h"
#include "ui_registro_admin.h"

registro_admin::registro_admin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registro_admin)
{
    ui->setupUi(this);
}

registro_admin::~registro_admin()
{
    delete ui;
}
