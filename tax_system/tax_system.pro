#-------------------------------------------------
#
# Project created by QtCreator 2018-05-29T18:02:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QMAKE_CXXFLAGS+= -std=c++17

TARGET = tax_system
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    registro.cpp \
    usuario_menu.cpp \
    declarar_automovil.cpp \
    declarar_casa.cpp \
    automobile.cpp \
    bank.cpp \
    housing.cpp \
    user.cpp \
    tax_user.cpp \
    administrator.cpp \
    tax_system.cpp \
    add_cuenta_bancaria.cpp


HEADERS  += login.h \
    registro.h \
    usuario_menu.h \
    declarar_automovil.h \
    declarar_casa.h \
    automobile.h \
    bank.h \
    housing.h \
    user.h \
    tax_user.h \
    administrator.h \
    tax_system.h \
    add_cuenta_bancaria.h


FORMS    += login.ui \
    registro.ui \
    usuario_menu.ui \
    declarar_automovil.ui \
    declarar_casa.ui \
    add_cuenta_bancaria.ui
