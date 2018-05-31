#include "registro.h"
#include "ui_registro.h"
#include "qmessagebox.h"
#include "tax_user.h"
#include "tax_system.h"
#include "administrator.h"
#include "qdebug.h"

registro::registro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registro)
{
    ui->setupUi(this);
}

registro::~registro()
{
    delete ui;
}


void registro::on_pushButton_salir_clicked()
{
    close();
}

void registro::on_pushButton_entrar_clicked()
{
    QString cedula = ui->lineEdit_cedula->text();
    QString apellido = ui->lineEdit_apellido->text();
    QString nombre = ui->lineEdit_nombre->text();
    QString contrasena = ui->lineEdit_contrasena->text();
    QString confirmar = ui->lineEdit_confirmar->text();

    int edad = ui->spinBox_edad->value();
    QString sex = ui->comboBox_sexo->currentText();
    std::string sexi = sex.toStdString();

    Ctax_user aux;
    Cadministrator admin;
    Ctax_system create;

    int i = 0;

    if(cedula.isEmpty() || nombre.isEmpty() || apellido.isEmpty() || contrasena.isEmpty() || confirmar.isEmpty() ){
        i = 1;
        QMessageBox::warning(this,"Error","Campos Faltantes");
    }else{

        if(contrasena != confirmar){
            i = 1;
            QMessageBox::warning(this,"Error","Datos ingresados no coinciden.\n Revise la contraseña.");
        }

        if(cedula[0]=='V')
        {

            if(admin.set_id(cedula.toStdString()) == 1){
                i = 1;
                QMessageBox::warning(this,"Error","Cedula invalida.");
            }

            if(admin.set_password(contrasena.toStdString()) != 0)
            {
                i = 1;
                QMessageBox::warning(this,"Error","El password debe tener 8 caracteres.\nDebe poseer una letra mayuscula.\nDebe poseer un caracter espeecial que no sea espacio");
            }
               if(admin.set_age(edad) != 0)
               {
                   i = 1;
                   QMessageBox::warning(this,"Error","Edad erronea.");
               }
            if(admin.set_sex(sexi[0]) != 0)
            {
                i = 1;
                QMessageBox::warning(this,"Error","Sexo erroneo.");
            }
            if(admin.set_name(nombre.toStdString()) != 0)
            {
                i = 1;
                QMessageBox::warning(this,"Error","Nombre erroneo.");
            }
            if(admin.set_lname(apellido.toStdString()) != 0)
            {
                i = 1;
                QMessageBox::warning(this,"Error","Apellido erroneo.");
            }

            if(i == 0)
            {
                if(create.register_adm(admin))
                {
                    i = QMessageBox::information(this,"Registro","Se creo el administrador sastifactoriamente");
                }else{
                    i = QMessageBox::warning(this,"Error","El administrador ya se encuentra registrado");

                }
                if(i != 0) this->on_pushButton_salir_clicked();
            }


        }
        else
        {
            if(aux.set_id(cedula.toStdString()) == -1){
                i = 1;
                QMessageBox::warning(this,"Error","Cedula invalida.");
            }
            if(aux.set_password(contrasena.toStdString()) != 0)
            {
                i = 1;
                QMessageBox::warning(this,"Error","El password debe tener 8 caracteres.\nDebe poseer una letra mayuscula.\nDebe poseer un caracter espeecial que no sea espacio");
            }
               if(aux.set_age(edad) != 0)
               {
                   i = 1;
                   QMessageBox::warning(this,"Error","Edad erronea.");
               }
            if(aux.set_sex(sexi[0]) != 0)
            {
                i = 1;
                QMessageBox::warning(this,"Error","Sexo erroneo.");
            }
            if(aux.set_name(nombre.toStdString()) != 0)
            {
                i = 1;
                QMessageBox::warning(this,"Error","Nombre erroneo.");
            }
            if(aux.set_lname(apellido.toStdString()) != 0)
            {
                i = 1;
                QMessageBox::warning(this,"Error","Apellido erroneo.");
            }
            if(i == 0){
                if(create.register_cl(aux))
                {
                    i = QMessageBox::information(this,"Registro","Se creo el usuario sastifactoriamente");
                }else{
                    i = QMessageBox::warning(this,"Error","El usuario ya se encuentra registrado");

                }
                if(i != 0) this->on_pushButton_salir_clicked();
            }
        }
    }




}
