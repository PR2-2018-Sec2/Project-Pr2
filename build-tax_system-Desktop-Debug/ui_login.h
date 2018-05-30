/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_4;
    QLabel *Label_taxSystem;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_6;
    QLabel *Label_cedula;
    QLabel *Label_password;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *line_Edit_cedula;
    QLineEdit *lineEdit_password;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_entrar;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_salir;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_registrar;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(350, 300);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        Login->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(Login);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_4);

        Label_taxSystem = new QLabel(Login);
        Label_taxSystem->setObjectName(QStringLiteral("Label_taxSystem"));
        Label_taxSystem->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(Label_taxSystem);

        verticalSpacer_3 = new QSpacerItem(20, 36, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        Label_cedula = new QLabel(Login);
        Label_cedula->setObjectName(QStringLiteral("Label_cedula"));

        verticalLayout_6->addWidget(Label_cedula);

        Label_password = new QLabel(Login);
        Label_password->setObjectName(QStringLiteral("Label_password"));

        verticalLayout_6->addWidget(Label_password);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        line_Edit_cedula = new QLineEdit(Login);
        line_Edit_cedula->setObjectName(QStringLiteral("line_Edit_cedula"));

        verticalLayout_2->addWidget(line_Edit_cedula);

        lineEdit_password = new QLineEdit(Login);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));

        verticalLayout_2->addWidget(lineEdit_password);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);


        verticalLayout_8->addLayout(verticalLayout_7);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_entrar = new QPushButton(Login);
        pushButton_entrar->setObjectName(QStringLiteral("pushButton_entrar"));

        horizontalLayout_3->addWidget(pushButton_entrar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_salir = new QPushButton(Login);
        pushButton_salir->setObjectName(QStringLiteral("pushButton_salir"));

        horizontalLayout_3->addWidget(pushButton_salir);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_registrar = new QPushButton(Login);
        pushButton_registrar->setObjectName(QStringLiteral("pushButton_registrar"));

        verticalLayout->addWidget(pushButton_registrar);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_8->addLayout(verticalLayout_5);


        horizontalLayout_2->addLayout(verticalLayout_8);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", 0));
        Label_taxSystem->setText(QApplication::translate("Login", "Sistema de Impuesto", 0));
        Label_cedula->setText(QApplication::translate("Login", "Cedula:  ", 0));
        Label_password->setText(QApplication::translate("Login", "Contrase\303\261a:", 0));
        line_Edit_cedula->setText(QString());
        pushButton_entrar->setText(QApplication::translate("Login", "Entrar", 0));
        pushButton_salir->setText(QApplication::translate("Login", "Salir", 0));
        pushButton_registrar->setText(QApplication::translate("Login", "Registrar", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
