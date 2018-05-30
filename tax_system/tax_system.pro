#-------------------------------------------------
#
# Project created by QtCreator 2018-05-29T18:02:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tax_system
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    registro.cpp \
    usuario_menu.cpp \
    agregar_cuenta_bancaria.cpp \
    declarar_automovil.cpp \
    declarar_casa.cpp

HEADERS  += login.h \
    registro.h \
    usuario_menu.h \
    agregar_cuenta_bancaria.h \
    declarar_automovil.h \
    declarar_casa.h

FORMS    += login.ui \
    registro.ui \
    usuario_menu.ui \
    agregar_cuenta_bancaria.ui \
    declarar_automovil.ui \
    declarar_casa.ui
