#ifndef AGREGAR_CUENTA_BANCARIA_H
#define AGREGAR_CUENTA_BANCARIA_H

#include <QWidget>

namespace Ui {
class agregar_cuenta_bancaria;
}

class agregar_cuenta_bancaria : public QWidget
{
    Q_OBJECT

public:
    explicit agregar_cuenta_bancaria(QWidget *parent = 0);
    ~agregar_cuenta_bancaria();

private slots:
    void on_pushButton_cancelar_clicked();

private:
    Ui::agregar_cuenta_bancaria *ui;
};

#endif // AGREGAR_CUENTA_BANCARIA_H
