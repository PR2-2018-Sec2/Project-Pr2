#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <registro.h>
#include <usuario_menu.h>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_pushButton_salir_clicked();

    void on_pushButton_registrar_clicked();

    void on_pushButton_entrar_clicked();

private:
    Ui::Login *ui;
    registro *ui_2;
    usuario_menu *ui_3;

};

#endif // LOGIN_H
