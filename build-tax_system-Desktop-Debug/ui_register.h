/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_register_2
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_registro;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_cedula;
    QHBoxLayout *horizontalLayout;
    QLabel *label_nombre;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_apellido;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_edad;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_sexo;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_contrasena;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_confirmar;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_cedula;
    QLineEdit *lineEdit_nombre;
    QLineEdit *lineEdit_apellido;
    QSpinBox *spinBox_edad;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *radioButton_femenino;
    QRadioButton *radioButton_masculino;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit_contrasena;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *lineEdit_confirmar;

    void setupUi(QWidget *register_2)
    {
        if (register_2->objectName().isEmpty())
            register_2->setObjectName(QStringLiteral("register_2"));
        register_2->resize(343, 400);
        widget = new QWidget(register_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 20, 261, 241));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_registro = new QLabel(widget);
        label_registro->setObjectName(QStringLiteral("label_registro"));
        label_registro->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_registro);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));

        verticalLayout->addLayout(horizontalLayout_8);

        label_cedula = new QLabel(widget);
        label_cedula->setObjectName(QStringLiteral("label_cedula"));

        verticalLayout->addWidget(label_cedula);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);

        label_nombre = new QLabel(widget);
        label_nombre->setObjectName(QStringLiteral("label_nombre"));

        verticalLayout->addWidget(label_nombre);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));

        verticalLayout->addLayout(horizontalLayout_2);

        label_apellido = new QLabel(widget);
        label_apellido->setObjectName(QStringLiteral("label_apellido"));

        verticalLayout->addWidget(label_apellido);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));

        verticalLayout->addLayout(horizontalLayout_3);

        label_edad = new QLabel(widget);
        label_edad->setObjectName(QStringLiteral("label_edad"));

        verticalLayout->addWidget(label_edad);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));

        verticalLayout->addLayout(horizontalLayout_4);

        label_sexo = new QLabel(widget);
        label_sexo->setObjectName(QStringLiteral("label_sexo"));

        verticalLayout->addWidget(label_sexo);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));

        verticalLayout->addLayout(horizontalLayout_5);

        label_contrasena = new QLabel(widget);
        label_contrasena->setObjectName(QStringLiteral("label_contrasena"));

        verticalLayout->addWidget(label_contrasena);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));

        verticalLayout->addLayout(horizontalLayout_6);

        label_confirmar = new QLabel(widget);
        label_confirmar->setObjectName(QStringLiteral("label_confirmar"));
        label_confirmar->setLayoutDirection(Qt::LeftToRight);
        label_confirmar->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        verticalLayout->addWidget(label_confirmar);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));

        verticalLayout->addLayout(horizontalLayout_7);


        horizontalLayout_12->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lineEdit_cedula = new QLineEdit(widget);
        lineEdit_cedula->setObjectName(QStringLiteral("lineEdit_cedula"));

        verticalLayout_3->addWidget(lineEdit_cedula);

        lineEdit_nombre = new QLineEdit(widget);
        lineEdit_nombre->setObjectName(QStringLiteral("lineEdit_nombre"));

        verticalLayout_3->addWidget(lineEdit_nombre);

        lineEdit_apellido = new QLineEdit(widget);
        lineEdit_apellido->setObjectName(QStringLiteral("lineEdit_apellido"));

        verticalLayout_3->addWidget(lineEdit_apellido);

        spinBox_edad = new QSpinBox(widget);
        spinBox_edad->setObjectName(QStringLiteral("spinBox_edad"));

        verticalLayout_3->addWidget(spinBox_edad);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        radioButton_femenino = new QRadioButton(widget);
        radioButton_femenino->setObjectName(QStringLiteral("radioButton_femenino"));

        horizontalLayout_10->addWidget(radioButton_femenino);

        radioButton_masculino = new QRadioButton(widget);
        radioButton_masculino->setObjectName(QStringLiteral("radioButton_masculino"));

        horizontalLayout_10->addWidget(radioButton_masculino);


        verticalLayout_3->addLayout(horizontalLayout_10);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        lineEdit_contrasena = new QLineEdit(widget);
        lineEdit_contrasena->setObjectName(QStringLiteral("lineEdit_contrasena"));

        verticalLayout_3->addWidget(lineEdit_contrasena);

        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        lineEdit_confirmar = new QLineEdit(widget);
        lineEdit_confirmar->setObjectName(QStringLiteral("lineEdit_confirmar"));

        verticalLayout_3->addWidget(lineEdit_confirmar);


        horizontalLayout_12->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_12);


        retranslateUi(register_2);

        QMetaObject::connectSlotsByName(register_2);
    } // setupUi

    void retranslateUi(QWidget *register_2)
    {
        register_2->setWindowTitle(QApplication::translate("register_2", "Form", 0));
        label_registro->setText(QApplication::translate("register_2", "Registro", 0));
        label_cedula->setText(QApplication::translate("register_2", "Cedula", 0));
        label_nombre->setText(QApplication::translate("register_2", "Nombre", 0));
        label_apellido->setText(QApplication::translate("register_2", "Apellido", 0));
        label_edad->setText(QApplication::translate("register_2", "Edad", 0));
        label_sexo->setText(QApplication::translate("register_2", "Sexo", 0));
        label_contrasena->setText(QApplication::translate("register_2", "Contrase\303\261a", 0));
        label_confirmar->setText(QApplication::translate("register_2", "Confirmar \n"
"Contrase\303\261a", 0));
        radioButton_femenino->setText(QApplication::translate("register_2", "F", 0));
        radioButton_masculino->setText(QApplication::translate("register_2", "M", 0));
    } // retranslateUi

};

namespace Ui {
    class register_2: public Ui_register_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
