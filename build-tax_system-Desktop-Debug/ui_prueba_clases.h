/********************************************************************************
** Form generated from reading UI file 'prueba_clases.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRUEBA_CLASES_H
#define UI_PRUEBA_CLASES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prueba_clases
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QListWidget *listWidget;

    void setupUi(QWidget *Prueba_clases)
    {
        if (Prueba_clases->objectName().isEmpty())
            Prueba_clases->setObjectName(QStringLiteral("Prueba_clases"));
        Prueba_clases->resize(400, 300);
        lineEdit = new QLineEdit(Prueba_clases);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 30, 113, 24));
        pushButton = new QPushButton(Prueba_clases);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 250, 85, 26));
        listWidget = new QListWidget(Prueba_clases);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(70, 90, 256, 131));

        retranslateUi(Prueba_clases);

        QMetaObject::connectSlotsByName(Prueba_clases);
    } // setupUi

    void retranslateUi(QWidget *Prueba_clases)
    {
        Prueba_clases->setWindowTitle(QApplication::translate("Prueba_clases", "Form", 0));
        pushButton->setText(QApplication::translate("Prueba_clases", "Aceptar", 0));
    } // retranslateUi

};

namespace Ui {
    class Prueba_clases: public Ui_Prueba_clases {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRUEBA_CLASES_H
