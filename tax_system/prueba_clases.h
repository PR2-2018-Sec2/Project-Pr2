#ifndef PRUEBA_CLASES_H
#define PRUEBA_CLASES_H

#include <QWidget>

namespace Ui {
class Prueba_clases;
}

class Prueba_clases : public QWidget
{
    Q_OBJECT

public:
    explicit Prueba_clases(QWidget *parent = 0);
    ~Prueba_clases();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Prueba_clases *ui;
};

#endif // PRUEBA_CLASES_H
