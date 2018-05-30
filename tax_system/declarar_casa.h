#ifndef DECLARAR_CASA_H
#define DECLARAR_CASA_H

#include <QWidget>

namespace Ui {
class declarar_casa;
}

class declarar_casa : public QWidget
{
    Q_OBJECT

public:
    explicit declarar_casa(QWidget *parent = 0);
    ~declarar_casa();

private slots:
    void on_pushButton_cancelar_clicked();

private:
    Ui::declarar_casa *ui;
};

#endif // DECLARAR_CASA_H
