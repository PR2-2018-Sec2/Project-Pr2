/********************************************************************************
** Form generated from reading UI file 'usuario_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USUARIO_MENU_H
#define UI_USUARIO_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_usuario_menu
{
public:
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_bienvenido;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2_menu;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QCommandLinkButton *commandLinkButton_agregar_cuenta;
    QCommandLinkButton *commandLinkButton_declarar_inmueble;
    QCommandLinkButton *commandLinkButton_declarar_automovil;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_ver_impuesto;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *usuario_menu)
    {
        if (usuario_menu->objectName().isEmpty())
            usuario_menu->setObjectName(QStringLiteral("usuario_menu"));
        usuario_menu->resize(400, 293);
        verticalLayout_9 = new QVBoxLayout(usuario_menu);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_bienvenido = new QLabel(usuario_menu);
        label_bienvenido->setObjectName(QStringLiteral("label_bienvenido"));
        label_bienvenido->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_bienvenido);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2_menu = new QLabel(usuario_menu);
        label_2_menu->setObjectName(QStringLiteral("label_2_menu"));
        label_2_menu->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2_menu);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(30, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        commandLinkButton_agregar_cuenta = new QCommandLinkButton(usuario_menu);
        commandLinkButton_agregar_cuenta->setObjectName(QStringLiteral("commandLinkButton_agregar_cuenta"));

        verticalLayout_4->addWidget(commandLinkButton_agregar_cuenta);

        commandLinkButton_declarar_inmueble = new QCommandLinkButton(usuario_menu);
        commandLinkButton_declarar_inmueble->setObjectName(QStringLiteral("commandLinkButton_declarar_inmueble"));

        verticalLayout_4->addWidget(commandLinkButton_declarar_inmueble);

        commandLinkButton_declarar_automovil = new QCommandLinkButton(usuario_menu);
        commandLinkButton_declarar_automovil->setObjectName(QStringLiteral("commandLinkButton_declarar_automovil"));

        verticalLayout_4->addWidget(commandLinkButton_declarar_automovil);


        horizontalLayout->addLayout(verticalLayout_4);

        horizontalSpacer_7 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        verticalLayout_7->addLayout(horizontalLayout);


        verticalLayout_8->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_ver_impuesto = new QPushButton(usuario_menu);
        pushButton_ver_impuesto->setObjectName(QStringLiteral("pushButton_ver_impuesto"));

        horizontalLayout_3->addWidget(pushButton_ver_impuesto);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(usuario_menu);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_5);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);


        verticalLayout_8->addLayout(verticalLayout_6);


        verticalLayout_9->addLayout(verticalLayout_8);


        retranslateUi(usuario_menu);

        QMetaObject::connectSlotsByName(usuario_menu);
    } // setupUi

    void retranslateUi(QWidget *usuario_menu)
    {
        usuario_menu->setWindowTitle(QApplication::translate("usuario_menu", "Form", 0));
        label_bienvenido->setText(QApplication::translate("usuario_menu", "Bienvenido", 0));
        label_2_menu->setText(QApplication::translate("usuario_menu", "Menu", 0));
        commandLinkButton_agregar_cuenta->setText(QApplication::translate("usuario_menu", "Agregar Cuenta Bancaria", 0));
        commandLinkButton_declarar_inmueble->setText(QApplication::translate("usuario_menu", "Declarar Inmueble", 0));
        commandLinkButton_declarar_automovil->setText(QApplication::translate("usuario_menu", "Declarar Automovil", 0));
        pushButton_ver_impuesto->setText(QApplication::translate("usuario_menu", "Ver impuesto", 0));
        pushButton->setText(QApplication::translate("usuario_menu", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class usuario_menu: public Ui_usuario_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USUARIO_MENU_H
