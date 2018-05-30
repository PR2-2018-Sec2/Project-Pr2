/********************************************************************************
** Form generated from reading UI file 'declarar_automovil.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECLARAR_AUTOMOVIL_H
#define UI_DECLARAR_AUTOMOVIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_declarar_automovil
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_declarar_automovil;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_guardar;
    QPushButton *pushButton_cancelar;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_marca;
    QLabel *label_modelo;
    QLabel *label_ano;
    QLabel *label_placa;
    QLabel *label_precio;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_marca;
    QLineEdit *lineEdit_modelo;
    QSpinBox *spinBox_ano;
    QLineEdit *lineEdit_placa;
    QLineEdit *lineEdit_precio;

    void setupUi(QWidget *declarar_automovil)
    {
        if (declarar_automovil->objectName().isEmpty())
            declarar_automovil->setObjectName(QStringLiteral("declarar_automovil"));
        declarar_automovil->resize(228, 300);
        widget = new QWidget(declarar_automovil);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 187, 256));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        label_declarar_automovil = new QLabel(widget);
        label_declarar_automovil->setObjectName(QStringLiteral("label_declarar_automovil"));
        label_declarar_automovil->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_declarar_automovil, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_guardar = new QPushButton(widget);
        pushButton_guardar->setObjectName(QStringLiteral("pushButton_guardar"));

        horizontalLayout_2->addWidget(pushButton_guardar);

        pushButton_cancelar = new QPushButton(widget);
        pushButton_cancelar->setObjectName(QStringLiteral("pushButton_cancelar"));

        horizontalLayout_2->addWidget(pushButton_cancelar);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_marca = new QLabel(widget);
        label_marca->setObjectName(QStringLiteral("label_marca"));

        verticalLayout_2->addWidget(label_marca);

        label_modelo = new QLabel(widget);
        label_modelo->setObjectName(QStringLiteral("label_modelo"));

        verticalLayout_2->addWidget(label_modelo);

        label_ano = new QLabel(widget);
        label_ano->setObjectName(QStringLiteral("label_ano"));

        verticalLayout_2->addWidget(label_ano);

        label_placa = new QLabel(widget);
        label_placa->setObjectName(QStringLiteral("label_placa"));

        verticalLayout_2->addWidget(label_placa);

        label_precio = new QLabel(widget);
        label_precio->setObjectName(QStringLiteral("label_precio"));

        verticalLayout_2->addWidget(label_precio);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_marca = new QLineEdit(widget);
        lineEdit_marca->setObjectName(QStringLiteral("lineEdit_marca"));

        verticalLayout->addWidget(lineEdit_marca);

        lineEdit_modelo = new QLineEdit(widget);
        lineEdit_modelo->setObjectName(QStringLiteral("lineEdit_modelo"));

        verticalLayout->addWidget(lineEdit_modelo);

        spinBox_ano = new QSpinBox(widget);
        spinBox_ano->setObjectName(QStringLiteral("spinBox_ano"));
        spinBox_ano->setMinimum(1850);
        spinBox_ano->setMaximum(2018);

        verticalLayout->addWidget(spinBox_ano);

        lineEdit_placa = new QLineEdit(widget);
        lineEdit_placa->setObjectName(QStringLiteral("lineEdit_placa"));

        verticalLayout->addWidget(lineEdit_placa);

        lineEdit_precio = new QLineEdit(widget);
        lineEdit_precio->setObjectName(QStringLiteral("lineEdit_precio"));

        verticalLayout->addWidget(lineEdit_precio);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(declarar_automovil);

        QMetaObject::connectSlotsByName(declarar_automovil);
    } // setupUi

    void retranslateUi(QWidget *declarar_automovil)
    {
        declarar_automovil->setWindowTitle(QApplication::translate("declarar_automovil", "Form", 0));
        label_declarar_automovil->setText(QApplication::translate("declarar_automovil", "DeclararAutomovil", 0));
        pushButton_guardar->setText(QApplication::translate("declarar_automovil", "Guardar", 0));
        pushButton_cancelar->setText(QApplication::translate("declarar_automovil", "Cancelar", 0));
        label_marca->setText(QApplication::translate("declarar_automovil", "Marca", 0));
        label_modelo->setText(QApplication::translate("declarar_automovil", "Modelo", 0));
        label_ano->setText(QApplication::translate("declarar_automovil", "A\303\261o", 0));
        label_placa->setText(QApplication::translate("declarar_automovil", "Placa", 0));
        label_precio->setText(QApplication::translate("declarar_automovil", "Precio", 0));
    } // retranslateUi

};

namespace Ui {
    class declarar_automovil: public Ui_declarar_automovil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECLARAR_AUTOMOVIL_H
