#ifndef DECLARAR_AUTOMOVIL_H
#define DECLARAR_AUTOMOVIL_H

#include <QWidget>

namespace Ui {
class declarar_automovil;
}

class declarar_automovil : public QWidget
{
    Q_OBJECT

public:
    explicit declarar_automovil(QWidget *parent = 0);
    ~declarar_automovil();

private slots:
    void on_pushButton_cancelar_clicked();

private:
    Ui::declarar_automovil *ui;
};

#endif // DECLARAR_AUTOMOVIL_H
