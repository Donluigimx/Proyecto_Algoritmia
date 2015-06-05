/****************************************************************************
** Meta object code from reading C++ file 'Alta_vuelo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Alta_vuelo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Alta_vuelo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Alta_vuelo_t {
    QByteArrayData data[9];
    char stringdata[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Alta_vuelo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Alta_vuelo_t qt_meta_stringdata_Alta_vuelo = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Alta_vuelo"
QT_MOC_LITERAL(1, 11, 15), // "on_Alta_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 29), // "on_Origen_currentIndexChanged"
QT_MOC_LITERAL(4, 58, 5), // "index"
QT_MOC_LITERAL(5, 64, 30), // "on_Destino_currentIndexChanged"
QT_MOC_LITERAL(6, 95, 25), // "on_Distancia_valueChanged"
QT_MOC_LITERAL(7, 121, 4), // "arg1"
QT_MOC_LITERAL(8, 126, 18) // "on_Limpiar_clicked"

    },
    "Alta_vuelo\0on_Alta_clicked\0\0"
    "on_Origen_currentIndexChanged\0index\0"
    "on_Destino_currentIndexChanged\0"
    "on_Distancia_valueChanged\0arg1\0"
    "on_Limpiar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Alta_vuelo[] = {

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
       3,    1,   40,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       6,    1,   46,    2, 0x08 /* Private */,
       8,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void Alta_vuelo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Alta_vuelo *_t = static_cast<Alta_vuelo *>(_o);
        switch (_id) {
        case 0: _t->on_Alta_clicked(); break;
        case 1: _t->on_Origen_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_Destino_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_Distancia_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_Limpiar_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Alta_vuelo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Alta_vuelo.data,
      qt_meta_data_Alta_vuelo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Alta_vuelo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Alta_vuelo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Alta_vuelo.stringdata))
        return static_cast<void*>(const_cast< Alta_vuelo*>(this));
    return QWidget::qt_metacast(_clname);
}

int Alta_vuelo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
