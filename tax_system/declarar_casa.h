#ifndef DECLARAR_CASA_H
#define DECLARAR_CASA_H

#include <QWidget>
#include <tax_user.h>
//#include "usuario_menu.h"

namespace Ui {
class declarar_casa;
}

class declarar_casa : public QWidget
{
    Q_OBJECT

public:
    explicit declarar_casa(QWidget *parent = 0);
    void set_user(Ctax_user);
    ~declarar_casa();

private slots:
    void on_pushButton_cancelar_clicked();

    void on_pushButton_guardar_clicked();

private:
    Ui::declarar_casa *ui;
    Ctax_user user_casa;
};

#endif // DECLARAR_CASA_H
