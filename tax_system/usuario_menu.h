#ifndef USUARIO_MENU_H
#define USUARIO_MENU_H

#include <QWidget>
#include <add_cuenta_bancaria.h>
#include <declarar_automovil.h>
#include <declarar_casa.h>
#include "tax_user.h"

namespace Ui {
class usuario_menu;
}

class usuario_menu : public QWidget
{
    Q_OBJECT

public:
    explicit usuario_menu(QWidget *parent = 0);
    ~usuario_menu();
   // Ctax_user* get_user()const;
    void set_user(Ctax_user*);

private slots:
    void on_pushButton_clicked();

    void on_commandLinkButton_agregar_cuenta_clicked();

    void on_commandLinkButton_declarar_inmueble_clicked();

    void on_commandLinkButton_declarar_automovil_clicked();

    void on_pushButton_ver_impuesto_clicked();


private:

    Ui::usuario_menu *ui;
    Ctax_user *user_menu;
    add_cuenta_bancaria *cuenta;
    declarar_automovil *declauto;
    declarar_casa *declcasa;
};

#endif // USUARIO_MENU_H
