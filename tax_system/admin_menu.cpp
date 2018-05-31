#include "admin_menu.h"
#include "ui_admin_menu.h"
#include "QDebug"
#include "qmessagebox.h"

admin_menu::admin_menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admin_menu)
{
    ui->setupUi(this);
}
admin_menu::~admin_menu()
{
    delete ui;
}

void admin_menu::on_commandLinkButton_agregar_cuenta_clicked()
{

    qDebug() << "Hola";//QString::fromStdString(this->ui_users->get_user[0]);

    qDebug() << ui_users->get_user.data();
    //connect(this,SIGNAL(on_commandLinkButton_agregar_cuenta_clicked()),
    this->ui_users->show();
}

void admin_menu::on_pushButton_clicked()
{
    close();
}

void admin_menu::on_pushButton_ver_impuesto_clicked()
{
    float total_tax = 0,k=0;
    std::string tax_s;
    for(unsigned int i = 0;i < this->usuarios.size() ; i++)
    {
        for(unsigned int j = this->usuarios[i].size() - 1; j > 0 ; j--)
        {
            k++;
            if(this->usuarios[i][j] != ' ')
            {
                tax_s = this->usuarios[i].substr(j,j+1);
                break;
            }
        }

        //qDebug() << QString::fromStdString(tax_s) << "\n";

        std::string::size_type sz;
        double tax = std::stof(tax_s,&sz);
        total_tax += tax;
    }

   //qDebug() << total_tax << "\n";
    tax_s = "El valor recaudado en los impuestos es: ";
    tax_s += std::to_string(total_tax);
    tax_s = "$";

    QMessageBox::information(this,"Recaudado",QString::fromStdString(tax_s));

}
