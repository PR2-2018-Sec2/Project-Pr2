#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <registro.h>
#include <usuario_menu.h>
#include <tax_user.h>
#include <admin_menu.h>
#include <ver_usuarios.h>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();
    void setUserTemporal(std::string);


private slots:
    void on_pushButton_salir_clicked();

    void on_pushButton_registrar_clicked();

    void on_pushButton_entrar_clicked();

private:
    Ui::Login *ui;
    registro *ui_2;
    usuario_menu *ui_3;
    Ctax_user userTemporal;
    admin_menu *ui_4;
};

#endif // LOGIN_H
