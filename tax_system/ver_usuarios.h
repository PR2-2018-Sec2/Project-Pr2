#ifndef VER_USUARIOS_H
#define VER_USUARIOS_H

#include <QWidget>
#include <vector>
#include <iostream>
namespace Ui {
class ver_usuarios;
}

class ver_usuarios : public QWidget
{
    Q_OBJECT

public:
    explicit ver_usuarios(QWidget *parent = 0);
    ~ver_usuarios();
    std::vector<std::string> get_user;

private slots:
    void on_pushButton_clicked();

private:
    Ui::ver_usuarios *ui;
};

#endif // VER_USUARIOS_H
