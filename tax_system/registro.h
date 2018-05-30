#ifndef REGISTRO_H
#define REGISTRO_H

#include <QWidget>

namespace Ui {
class registro;
}

class registro : public QWidget
{
    Q_OBJECT

public:
    explicit registro(QWidget *parent = 0);
    ~registro();

private slots:


    void on_pushButton_salir_clicked();

    void on_pushButton_entrar_clicked();

private:
    Ui::registro *ui;
};

#endif // REGISTRO_H
