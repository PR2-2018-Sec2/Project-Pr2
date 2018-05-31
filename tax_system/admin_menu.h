#ifndef ADMIN_MENU_H
#define ADMIN_MENU_H

#include <QWidget>
#include <ver_usuarios.h>
namespace Ui {
class admin_menu;
}

class admin_menu : public QWidget
{
    Q_OBJECT

public:

    explicit admin_menu(QWidget *parent = 0);
    ~admin_menu();
    ver_usuarios *ui_users;
    std::vector<std::string> usuarios;

private slots:
    void on_commandLinkButton_agregar_cuenta_clicked();

    void on_pushButton_clicked();

    void on_pushButton_ver_impuesto_clicked();

private:
    Ui::admin_menu *ui;
};

#endif // ADMIN_MENU_H
