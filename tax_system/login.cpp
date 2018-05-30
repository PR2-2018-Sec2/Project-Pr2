#include "login.h"
#include "ui_login.h"
#include "tax_system.h"
#include "qmessagebox.h"
#include "qdebug.h"


Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    Ctax_system data;
    data.create_database();
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}
std::string eliminarEspacios(std::string cad){
       for(int i = cad.size()-1;i > 0 ; i--){
               if(cad[i] != ' '){
                   cad = cad.substr(0,i+1);
                   break;
               }
       }
       return cad;
}
void Login::setUserTemporal(std::string cad)
{
    std::string cedula = cad.substr(4,8);
    std::string nombre = cad.substr(52,16);
    nombre = eliminarEspacios(nombre);
    std::string contra = cad.substr(20,8);
    std::string apellido = cad.substr(68,16);
    apellido = eliminarEspacios(apellido);
    std::string edad_s = cad.substr(84,2);
    std::string tax_s = cad.substr(100,16);
    tax_s = eliminarEspacios(tax_s);
    std::string sexo = cad.substr(36,1);
    int edad = atoi(edad_s.c_str());
    std::string::size_type sz;
    float tax = std::stof(tax_s,&sz);
    this->userTemporal = new Ctax_user();
    this->userTemporal->set_age(edad);
    this->userTemporal->set_id(cedula);
    this->userTemporal->set_lname(apellido);
    this->userTemporal->set_password(contra);
    this->userTemporal->set_name(nombre);
    this->userTemporal->set_sex(sexo[0]);
    this->userTemporal->set_tax(tax);
    this->ui_3 = new usuario_menu;
    this->ui_3->set_user(this->userTemporal);

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

    QString password = ui->lineEdit_password->text();
    QString id = ui->line_Edit_cedula->text();

    std::hash<std::string> ar;
    std::string asr = id.toStdString();
    int pos = ar(asr) % 10000;
    std::string clave;

    std::fstream arch;
    arch.open("../database/tax_users.txt");
    if (!arch.is_open())
    {
        arch.close();
        this->on_pushButton_salir_clicked();
    }

    arch.seekp((pos - 1) * 118, std::ios::beg);

    if (arch.peek() == '0')
    {
        std::getline(arch,clave,'\n');

        qDebug() << QString::fromStdString(clave.substr(4,8)) << QString::fromStdString(clave.substr(20,8))
                 << id << password;



        if(clave.substr(4,8) == id.toStdString() && clave.substr(20,8) == password.toStdString())
        {
            arch.close();

             this->setUserTemporal(clave);
            //this->ui_3 ->set_contenedor(clave);
            this->ui_3 -> show();

            QMessageBox::information(this,"Registro","Ingreso Exitoso");

            this->on_pushButton_salir_clicked();

        }
        else
        {
            QMessageBox::information(this,"Registro","Usuario o clave invalida");
            arch.close();
        }

        arch.close();

    }
    else
    {
        arch.close();
        QMessageBox::information(this,"Informacion","Usuario no registrado");
    }










}
