#ifndef ADD_CUENTA_BANCARIA_H
#define ADD_CUENTA_BANCARIA_H

#include <QWidget>
#include <tax_user.h>
namespace Ui {
class add_cuenta_bancaria;
}

class add_cuenta_bancaria : public QWidget
{
    Q_OBJECT

public:
    explicit add_cuenta_bancaria(QWidget *parent = 0);
    ~add_cuenta_bancaria();
    void set_user(Ctax_user);
    std::string get_cedula()const;


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::add_cuenta_bancaria *ui;
    Ctax_user user_banco;
    std::string id;

};

#endif // ADD_CUENTA_BANCARIA_H
