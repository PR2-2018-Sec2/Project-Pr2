/****************************************************************************
** Meta object code from reading C++ file 'usuario_menu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tax_system/usuario_menu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usuario_menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_usuario_menu_t {
    QByteArrayData data[7];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_usuario_menu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_usuario_menu_t qt_meta_stringdata_usuario_menu = {
    {
QT_MOC_LITERAL(0, 0, 12), // "usuario_menu"
QT_MOC_LITERAL(1, 13, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 43), // "on_commandLinkButton_agregar_..."
QT_MOC_LITERAL(4, 80, 46), // "on_commandLinkButton_declarar..."
QT_MOC_LITERAL(5, 127, 47), // "on_commandLinkButton_declarar..."
QT_MOC_LITERAL(6, 175, 34) // "on_pushButton_ver_impuesto_cl..."

    },
    "usuario_menu\0on_pushButton_clicked\0\0"
    "on_commandLinkButton_agregar_cuenta_clicked\0"
    "on_commandLinkButton_declarar_inmueble_clicked\0"
    "on_commandLinkButton_declarar_automovil_clicked\0"
    "on_pushButton_ver_impuesto_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_usuario_menu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void usuario_menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        usuario_menu *_t = static_cast<usuario_menu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_commandLinkButton_agregar_cuenta_clicked(); break;
        case 2: _t->on_commandLinkButton_declarar_inmueble_clicked(); break;
        case 3: _t->on_commandLinkButton_declarar_automovil_clicked(); break;
        case 4: _t->on_pushButton_ver_impuesto_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject usuario_menu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_usuario_menu.data,
      qt_meta_data_usuario_menu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *usuario_menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *usuario_menu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_usuario_menu.stringdata0))
        return static_cast<void*>(const_cast< usuario_menu*>(this));
    return QWidget::qt_metacast(_clname);
}

int usuario_menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
