/********************************************************************************
** Form generated from reading UI file 'declarar_casa.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECLARAR_CASA_H
#define UI_DECLARAR_CASA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_declarar_casa
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox_tipo_de_inmueble;
    QLineEdit *lineEdit_tamano;
    QComboBox *comboBox_estado;
    QLineEdit *lineEdit_ciudad;
    QLineEdit *lineEdit_direccion;
    QLineEdit *lineEdit_precio;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_guardar;
    QPushButton *pushButton_cancelar;

    void setupUi(QWidget *declarar_casa)
    {
        if (declarar_casa->objectName().isEmpty())
            declarar_casa->setObjectName(QStringLiteral("declarar_casa"));
        declarar_casa->resize(259, 273);
        widget = new QWidget(declarar_casa);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 20, 200, 234));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        comboBox_tipo_de_inmueble = new QComboBox(widget);
        comboBox_tipo_de_inmueble->setObjectName(QStringLiteral("comboBox_tipo_de_inmueble"));

        verticalLayout_2->addWidget(comboBox_tipo_de_inmueble);

        lineEdit_tamano = new QLineEdit(widget);
        lineEdit_tamano->setObjectName(QStringLiteral("lineEdit_tamano"));

        verticalLayout_2->addWidget(lineEdit_tamano);

        comboBox_estado = new QComboBox(widget);
        comboBox_estado->setObjectName(QStringLiteral("comboBox_estado"));

        verticalLayout_2->addWidget(comboBox_estado);

        lineEdit_ciudad = new QLineEdit(widget);
        lineEdit_ciudad->setObjectName(QStringLiteral("lineEdit_ciudad"));

        verticalLayout_2->addWidget(lineEdit_ciudad);

        lineEdit_direccion = new QLineEdit(widget);
        lineEdit_direccion->setObjectName(QStringLiteral("lineEdit_direccion"));

        verticalLayout_2->addWidget(lineEdit_direccion);

        lineEdit_precio = new QLineEdit(widget);
        lineEdit_precio->setObjectName(QStringLiteral("lineEdit_precio"));

        verticalLayout_2->addWidget(lineEdit_precio);


        horizontalLayout_2->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_guardar = new QPushButton(widget);
        pushButton_guardar->setObjectName(QStringLiteral("pushButton_guardar"));

        horizontalLayout->addWidget(pushButton_guardar);

        pushButton_cancelar = new QPushButton(widget);
        pushButton_cancelar->setObjectName(QStringLiteral("pushButton_cancelar"));

        horizontalLayout->addWidget(pushButton_cancelar);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(declarar_casa);

        QMetaObject::connectSlotsByName(declarar_casa);
    } // setupUi

    void retranslateUi(QWidget *declarar_casa)
    {
        declarar_casa->setWindowTitle(QApplication::translate("declarar_casa", "Form", 0));
        label_7->setText(QApplication::translate("declarar_casa", "Declarar de Inmueble", 0));
        label->setText(QApplication::translate("declarar_casa", "Tipo de\n"
"Inmueble", 0));
        label_2->setText(QApplication::translate("declarar_casa", "Tama\303\261o", 0));
        label_4->setText(QApplication::translate("declarar_casa", "Estado", 0));
        label_3->setText(QApplication::translate("declarar_casa", "Ciudad", 0));
        label_5->setText(QApplication::translate("declarar_casa", "Direccion", 0));
        label_6->setText(QApplication::translate("declarar_casa", "Precio", 0));
        comboBox_tipo_de_inmueble->clear();
        comboBox_tipo_de_inmueble->insertItems(0, QStringList()
         << QApplication::translate("declarar_casa", "Casa", 0)
         << QApplication::translate("declarar_casa", "Apartamento", 0)
         << QApplication::translate("declarar_casa", "Townhouse", 0)
         << QApplication::translate("declarar_casa", "Quinta", 0)
         << QApplication::translate("declarar_casa", "Finca", 0)
         << QApplication::translate("declarar_casa", "Rancho con DIrecTV", 0)
         << QApplication::translate("declarar_casa", "Rancho sin DirecTV", 0)
        );
        comboBox_estado->clear();
        comboBox_estado->insertItems(0, QStringList()
         << QApplication::translate("declarar_casa", "Amazonas", 0)
         << QApplication::translate("declarar_casa", "Anzoategui", 0)
         << QApplication::translate("declarar_casa", "Apure", 0)
         << QApplication::translate("declarar_casa", "Aragua", 0)
         << QApplication::translate("declarar_casa", "Barinas", 0)
         << QApplication::translate("declarar_casa", "Bolivar", 0)
         << QApplication::translate("declarar_casa", "Carabobo", 0)
         << QApplication::translate("declarar_casa", "Cojedes", 0)
         << QApplication::translate("declarar_casa", "Delta Amacuro", 0)
         << QApplication::translate("declarar_casa", "Distrito Capital", 0)
         << QApplication::translate("declarar_casa", "Falcon", 0)
         << QApplication::translate("declarar_casa", "Guarico", 0)
         << QApplication::translate("declarar_casa", "Lara", 0)
         << QApplication::translate("declarar_casa", "Merida", 0)
         << QApplication::translate("declarar_casa", "Miranda", 0)
         << QApplication::translate("declarar_casa", "Monagas", 0)
         << QApplication::translate("declarar_casa", "Nueva Esparta", 0)
         << QApplication::translate("declarar_casa", "Portuguesa", 0)
         << QApplication::translate("declarar_casa", "Sucre", 0)
         << QApplication::translate("declarar_casa", "Tachira", 0)
         << QApplication::translate("declarar_casa", "Trujillo", 0)
         << QApplication::translate("declarar_casa", "Vargas", 0)
         << QApplication::translate("declarar_casa", "Yaracuy", 0)
         << QApplication::translate("declarar_casa", "Zulia", 0)
        );
        pushButton_guardar->setText(QApplication::translate("declarar_casa", "Guardar", 0));
        pushButton_cancelar->setText(QApplication::translate("declarar_casa", "Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class declarar_casa: public Ui_declarar_casa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECLARAR_CASA_H
