/****************************************************************************
** Meta object code from reading C++ file 'mpion.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test_7/mpion.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Mpion_t {
    QByteArrayData data[9];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mpion_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mpion_t qt_meta_stringdata_Mpion = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Mpion"
QT_MOC_LITERAL(1, 6, 10), // "imgChanged"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 14), // "matricechanger"
QT_MOC_LITERAL(4, 33, 13), // "changementdim"
QT_MOC_LITERAL(5, 47, 1), // "x"
QT_MOC_LITERAL(6, 49, 1), // "y"
QT_MOC_LITERAL(7, 51, 8), // "peujouer"
QT_MOC_LITERAL(8, 60, 6) // "imgQML"

    },
    "Mpion\0imgChanged\0\0matricechanger\0"
    "changementdim\0x\0y\0peujouer\0imgQML"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mpion[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    2,   36,    2, 0x02 /* Public */,
       7,    0,   41,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Bool,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Mpion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mpion *_t = static_cast<Mpion *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->imgChanged(); break;
        case 1: _t->matricechanger(); break;
        case 2: { QString _r = _t->changementdim((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->peujouer();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Mpion::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Mpion::imgChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Mpion::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Mpion::matricechanger)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Mpion *_t = static_cast<Mpion *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->readImg(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Mpion::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Mpion.data,
      qt_meta_data_Mpion,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mpion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mpion::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mpion.stringdata0))
        return static_cast<void*>(const_cast< Mpion*>(this));
    return QObject::qt_metacast(_clname);
}

int Mpion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Mpion::imgChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Mpion::matricechanger()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
