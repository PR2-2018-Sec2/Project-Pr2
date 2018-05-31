#ifndef REGISTRO_ADMIN_H
#define REGISTRO_ADMIN_H

#include <QWidget>

namespace Ui {
class registro_admin;
}

class registro_admin : public QWidget
{
    Q_OBJECT

public:
    explicit registro_admin(QWidget *parent = 0);
    ~registro_admin();

private:
    Ui::registro_admin *ui;
};

#endif // REGISTRO_ADMIN_H
