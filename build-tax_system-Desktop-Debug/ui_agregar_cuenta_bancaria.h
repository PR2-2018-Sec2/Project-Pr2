/********************************************************************************
** Form generated from reading UI file 'agregar_cuenta_bancaria.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGAR_CUENTA_BANCARIA_H
#define UI_AGREGAR_CUENTA_BANCARIA_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_agregar_cuenta_bancaria
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_numero_de_cuenta;
    QLabel *label_tipo_de_cuenta;
    QLabel *label_cedula;
    QLabel *label_email;
    QLabel *label_banco;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_numero_de_cuenta;
    QComboBox *comboBox_tipo_de_cuenta;
    QLineEdit *lineEdit_cedula;
    QLineEdit *lineEdit_email;
    QComboBox *comboBox_banco;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_guardar;
    QPushButton *pushButton_cancelar;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *agregar_cuenta_bancaria)
    {
        if (agregar_cuenta_bancaria->objectName().isEmpty())
            agregar_cuenta_bancaria->setObjectName(QStringLiteral("agregar_cuenta_bancaria"));
        agregar_cuenta_bancaria->resize(252, 300);
        widget = new QWidget(agregar_cuenta_bancaria);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 210, 282));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_numero_de_cuenta = new QLabel(widget);
        label_numero_de_cuenta->setObjectName(QStringLiteral("label_numero_de_cuenta"));

        verticalLayout_2->addWidget(label_numero_de_cuenta);

        label_tipo_de_cuenta = new QLabel(widget);
        label_tipo_de_cuenta->setObjectName(QStringLiteral("label_tipo_de_cuenta"));

        verticalLayout_2->addWidget(label_tipo_de_cuenta);

        label_cedula = new QLabel(widget);
        label_cedula->setObjectName(QStringLiteral("label_cedula"));

        verticalLayout_2->addWidget(label_cedula);

        label_email = new QLabel(widget);
        label_email->setObjectName(QStringLiteral("label_email"));

        verticalLayout_2->addWidget(label_email);

        label_banco = new QLabel(widget);
        label_banco->setObjectName(QStringLiteral("label_banco"));

        verticalLayout_2->addWidget(label_banco);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_numero_de_cuenta = new QLineEdit(widget);
        lineEdit_numero_de_cuenta->setObjectName(QStringLiteral("lineEdit_numero_de_cuenta"));

        verticalLayout->addWidget(lineEdit_numero_de_cuenta);

        comboBox_tipo_de_cuenta = new QComboBox(widget);
        comboBox_tipo_de_cuenta->setObjectName(QStringLiteral("comboBox_tipo_de_cuenta"));

        verticalLayout->addWidget(comboBox_tipo_de_cuenta);

        lineEdit_cedula = new QLineEdit(widget);
        lineEdit_cedula->setObjectName(QStringLiteral("lineEdit_cedula"));

        verticalLayout->addWidget(lineEdit_cedula);

        lineEdit_email = new QLineEdit(widget);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));

        verticalLayout->addWidget(lineEdit_email);

        comboBox_banco = new QComboBox(widget);
        comboBox_banco->setObjectName(QStringLiteral("comboBox_banco"));

        verticalLayout->addWidget(comboBox_banco);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_guardar = new QPushButton(widget);
        pushButton_guardar->setObjectName(QStringLiteral("pushButton_guardar"));

        horizontalLayout_2->addWidget(pushButton_guardar);

        pushButton_cancelar = new QPushButton(widget);
        pushButton_cancelar->setObjectName(QStringLiteral("pushButton_cancelar"));

        horizontalLayout_2->addWidget(pushButton_cancelar);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 5, 0, 1, 1);


        retranslateUi(agregar_cuenta_bancaria);

        QMetaObject::connectSlotsByName(agregar_cuenta_bancaria);
    } // setupUi

    void retranslateUi(QWidget *agregar_cuenta_bancaria)
    {
        agregar_cuenta_bancaria->setWindowTitle(QApplication::translate("agregar_cuenta_bancaria", "Form", 0));
        label->setText(QApplication::translate("agregar_cuenta_bancaria", "Agregar Cuenta Bancaria", 0));
        label_numero_de_cuenta->setText(QApplication::translate("agregar_cuenta_bancaria", "Numero de\n"
"Cuenta", 0));
        label_tipo_de_cuenta->setText(QApplication::translate("agregar_cuenta_bancaria", "Tipo de\n"
"Cuenta", 0));
        label_cedula->setText(QApplication::translate("agregar_cuenta_bancaria", "Cedula", 0));
        label_email->setText(QApplication::translate("agregar_cuenta_bancaria", "Email", 0));
        label_banco->setText(QApplication::translate("agregar_cuenta_bancaria", "Banco", 0));
        comboBox_tipo_de_cuenta->clear();
        comboBox_tipo_de_cuenta->insertItems(0, QStringList()
         << QApplication::translate("agregar_cuenta_bancaria", "Ahorro", 0)
         << QApplication::translate("agregar_cuenta_bancaria", "Corriente", 0)
        );
        comboBox_banco->clear();
        comboBox_banco->insertItems(0, QStringList()
         << QApplication::translate("agregar_cuenta_bancaria", "Banco de Venezuela", 0)
         << QApplication::translate("agregar_cuenta_bancaria", "Banco Mercantil", 0)
         << QApplication::translate("agregar_cuenta_bancaria", "Banco Banesco", 0)
         << QApplication::translate("agregar_cuenta_bancaria", "Banco de Occidental de Descuento", 0)
         << QApplication::translate("agregar_cuenta_bancaria", "Banco del Tesoro", 0)
         << QApplication::translate("agregar_cuenta_bancaria", "Banco Caribe", 0)
         << QApplication::translate("agregar_cuenta_bancaria", "100% Banco", 0)
         << QApplication::translate("agregar_cuenta_bancaria", "Banco DelSur", 0)
         << QApplication::translate("agregar_cuenta_bancaria", "Banco FondoComun", 0)
         << QApplication::translate("agregar_cuenta_bancaria", "Banco BIcentenario", 0)
         << QApplication::translate("agregar_cuenta_bancaria", "Banco Exterior", 0)
        );
        pushButton_guardar->setText(QApplication::translate("agregar_cuenta_bancaria", "Guardar", 0));
        pushButton_cancelar->setText(QApplication::translate("agregar_cuenta_bancaria", "Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class agregar_cuenta_bancaria: public Ui_agregar_cuenta_bancaria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_CUENTA_BANCARIA_H
