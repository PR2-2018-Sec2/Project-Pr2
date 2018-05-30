/********************************************************************************
** Form generated from reading UI file 'registro.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRO_H
#define UI_REGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registro
{
public:
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_registro;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_cedula;
    QLabel *label_nombre;
    QLabel *label_apellido;
    QLabel *label_edad;
    QLabel *label_sexo;
    QLabel *label_nombre_2;
    QLabel *label_confirmar;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_9;
    QLineEdit *lineEdit_cedula;
    QSpacerItem *verticalSpacer_8;
    QLineEdit *lineEdit_nombre;
    QSpacerItem *verticalSpacer_7;
    QLineEdit *lineEdit_apellido;
    QSpacerItem *verticalSpacer;
    QSpinBox *spinBox_edad;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_femenino;
    QRadioButton *radioButton_masculino;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *lineEdit_contrasena;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *lineEdit_confirmar;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_entrar;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_salir;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *registro)
    {
        if (registro->objectName().isEmpty())
            registro->setObjectName(QStringLiteral("registro"));
        registro->resize(336, 486);
        horizontalLayout_5 = new QHBoxLayout(registro);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_registro = new QLabel(registro);
        label_registro->setObjectName(QStringLiteral("label_registro"));
        label_registro->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_registro);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_cedula = new QLabel(registro);
        label_cedula->setObjectName(QStringLiteral("label_cedula"));

        verticalLayout->addWidget(label_cedula);

        label_nombre = new QLabel(registro);
        label_nombre->setObjectName(QStringLiteral("label_nombre"));

        verticalLayout->addWidget(label_nombre);

        label_apellido = new QLabel(registro);
        label_apellido->setObjectName(QStringLiteral("label_apellido"));

        verticalLayout->addWidget(label_apellido);

        label_edad = new QLabel(registro);
        label_edad->setObjectName(QStringLiteral("label_edad"));

        verticalLayout->addWidget(label_edad);

        label_sexo = new QLabel(registro);
        label_sexo->setObjectName(QStringLiteral("label_sexo"));

        verticalLayout->addWidget(label_sexo);

        label_nombre_2 = new QLabel(registro);
        label_nombre_2->setObjectName(QStringLiteral("label_nombre_2"));

        verticalLayout->addWidget(label_nombre_2);

        label_confirmar = new QLabel(registro);
        label_confirmar->setObjectName(QStringLiteral("label_confirmar"));

        verticalLayout->addWidget(label_confirmar);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_9 = new QSpacerItem(138, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_9);

        lineEdit_cedula = new QLineEdit(registro);
        lineEdit_cedula->setObjectName(QStringLiteral("lineEdit_cedula"));

        verticalLayout_2->addWidget(lineEdit_cedula);

        verticalSpacer_8 = new QSpacerItem(138, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);

        lineEdit_nombre = new QLineEdit(registro);
        lineEdit_nombre->setObjectName(QStringLiteral("lineEdit_nombre"));

        verticalLayout_2->addWidget(lineEdit_nombre);

        verticalSpacer_7 = new QSpacerItem(138, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        lineEdit_apellido = new QLineEdit(registro);
        lineEdit_apellido->setObjectName(QStringLiteral("lineEdit_apellido"));

        verticalLayout_2->addWidget(lineEdit_apellido);

        verticalSpacer = new QSpacerItem(138, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        spinBox_edad = new QSpinBox(registro);
        spinBox_edad->setObjectName(QStringLiteral("spinBox_edad"));

        verticalLayout_2->addWidget(spinBox_edad);

        verticalSpacer_6 = new QSpacerItem(138, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton_femenino = new QRadioButton(registro);
        radioButton_femenino->setObjectName(QStringLiteral("radioButton_femenino"));

        horizontalLayout->addWidget(radioButton_femenino);

        radioButton_masculino = new QRadioButton(registro);
        radioButton_masculino->setObjectName(QStringLiteral("radioButton_masculino"));

        horizontalLayout->addWidget(radioButton_masculino);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_5 = new QSpacerItem(138, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        lineEdit_contrasena = new QLineEdit(registro);
        lineEdit_contrasena->setObjectName(QStringLiteral("lineEdit_contrasena"));

        verticalLayout_2->addWidget(lineEdit_contrasena);

        verticalSpacer_2 = new QSpacerItem(138, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        lineEdit_confirmar = new QLineEdit(registro);
        lineEdit_confirmar->setObjectName(QStringLiteral("lineEdit_confirmar"));

        verticalLayout_2->addWidget(lineEdit_confirmar);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_10 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_10);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_entrar = new QPushButton(registro);
        pushButton_entrar->setObjectName(QStringLiteral("pushButton_entrar"));

        horizontalLayout_3->addWidget(pushButton_entrar);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_salir = new QPushButton(registro);
        pushButton_salir->setObjectName(QStringLiteral("pushButton_salir"));

        horizontalLayout_3->addWidget(pushButton_salir);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(13, 50, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(17, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        horizontalLayout_5->addLayout(verticalLayout_5);


        retranslateUi(registro);

        QMetaObject::connectSlotsByName(registro);
    } // setupUi

    void retranslateUi(QWidget *registro)
    {
        registro->setWindowTitle(QApplication::translate("registro", "Registro", 0));
        label_registro->setText(QApplication::translate("registro", "Registro", 0));
        label_cedula->setText(QApplication::translate("registro", "Cedula", 0));
        label_nombre->setText(QApplication::translate("registro", "Nombre", 0));
        label_apellido->setText(QApplication::translate("registro", "Apelido", 0));
        label_edad->setText(QApplication::translate("registro", "Edad", 0));
        label_sexo->setText(QApplication::translate("registro", "Sexo", 0));
        label_nombre_2->setText(QApplication::translate("registro", "Contrase\303\261a", 0));
        label_confirmar->setText(QApplication::translate("registro", "Confirmar", 0));
        radioButton_femenino->setText(QApplication::translate("registro", "F", 0));
        radioButton_masculino->setText(QApplication::translate("registro", "M", 0));
        pushButton_entrar->setText(QApplication::translate("registro", "Entrar", 0));
        pushButton_salir->setText(QApplication::translate("registro", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class registro: public Ui_registro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRO_H
