#ifndef DECLARAR_AUTOMOVIL_H
#define DECLARAR_AUTOMOVIL_H
#include <tax_user.h>
#include <QWidget>
//#include "usuario_menu.h"

namespace Ui {
class declarar_automovil;
}

class declarar_automovil : public QWidget
{
    Q_OBJECT

public:
    explicit declarar_automovil(QWidget *parent = 0);
    void set_user(Ctax_user);
    ~declarar_automovil();

private slots:
    void on_pushButton_cancelar_clicked();

    void on_pushButton_guardar_clicked();

private:
    Ui::declarar_automovil *ui;
    Ctax_user user_auto;
};

#endif // DECLARAR_AUTOMOVIL_H
