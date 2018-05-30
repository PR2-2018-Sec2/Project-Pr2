#ifndef USUARIO_MENU_H
#define USUARIO_MENU_H

#include <QWidget>
#include <agregar_cuenta_bancaria.h>
#include <declarar_automovil.h>
#include <declarar_casa.h>
namespace Ui {
class usuario_menu;
}

class usuario_menu : public QWidget
{
    Q_OBJECT

public:
    explicit usuario_menu(QWidget *parent = 0);
    ~usuario_menu();

private slots:
    void on_pushButton_clicked();

    void on_commandLinkButton_agregar_cuenta_clicked();

    void on_commandLinkButton_declarar_inmueble_clicked();

    void on_commandLinkButton_declarar_automovil_clicked();

private:
    Ui::usuario_menu *ui;
    agregar_cuenta_bancaria *cuenta;
    declarar_automovil *declauto;
    declarar_casa *declcasa;
};

#endif // USUARIO_MENU_H
