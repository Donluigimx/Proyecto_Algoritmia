/****************************************************************************
** Meta object code from reading C++ file 'Buscar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Buscar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Buscar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Buscar_t {
    QByteArrayData data[14];
    char stringdata[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Buscar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Buscar_t qt_meta_stringdata_Buscar = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Buscar"
QT_MOC_LITERAL(1, 7, 32), // "on_Cd_origen_currentIndexChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "index"
QT_MOC_LITERAL(4, 47, 33), // "on_Cd_destino_currentIndexCha..."
QT_MOC_LITERAL(5, 81, 26), // "on_TablaVuelos_cellClicked"
QT_MOC_LITERAL(6, 108, 3), // "row"
QT_MOC_LITERAL(7, 112, 6), // "column"
QT_MOC_LITERAL(8, 119, 20), // "on_Nombre_textEdited"
QT_MOC_LITERAL(9, 140, 4), // "arg1"
QT_MOC_LITERAL(10, 145, 24), // "on_EliminarVuelo_clicked"
QT_MOC_LITERAL(11, 170, 21), // "on_Salida_dateChanged"
QT_MOC_LITERAL(12, 192, 4), // "date"
QT_MOC_LITERAL(13, 197, 22) // "on_Regreso_dateChanged"

    },
    "Buscar\0on_Cd_origen_currentIndexChanged\0"
    "\0index\0on_Cd_destino_currentIndexChanged\0"
    "on_TablaVuelos_cellClicked\0row\0column\0"
    "on_Nombre_textEdited\0arg1\0"
    "on_EliminarVuelo_clicked\0on_Salida_dateChanged\0"
    "date\0on_Regreso_dateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Buscar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    1,   52,    2, 0x08 /* Private */,
       5,    2,   55,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    1,   64,    2, 0x08 /* Private */,
      13,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,   12,
    QMetaType::Void, QMetaType::QDate,   12,

       0        // eod
};

void Buscar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Buscar *_t = static_cast<Buscar *>(_o);
        switch (_id) {
        case 0: _t->on_Cd_origen_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_Cd_destino_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_TablaVuelos_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_Nombre_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_EliminarVuelo_clicked(); break;
        case 5: _t->on_Salida_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 6: _t->on_Regreso_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Buscar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Buscar.data,
      qt_meta_data_Buscar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Buscar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Buscar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Buscar.stringdata))
        return static_cast<void*>(const_cast< Buscar*>(this));
    return QWidget::qt_metacast(_clname);
}

int Buscar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
