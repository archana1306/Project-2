/****************************************************************************
** Meta object code from reading C++ file 'car.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../0819/car.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'car.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Car_t {
    QByteArrayData data[14];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Car_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Car_t qt_meta_stringdata_Car = {
    {
QT_MOC_LITERAL(0, 0, 3), // "Car"
QT_MOC_LITERAL(1, 4, 12), // "speedChanged"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 14), // "batteryChanged"
QT_MOC_LITERAL(4, 33, 11), // "timeChanged"
QT_MOC_LITERAL(5, 45, 8), // "setSpeed"
QT_MOC_LITERAL(6, 54, 5), // "speed"
QT_MOC_LITERAL(7, 60, 10), // "setBattery"
QT_MOC_LITERAL(8, 71, 7), // "battery"
QT_MOC_LITERAL(9, 79, 7), // "setTime"
QT_MOC_LITERAL(10, 87, 8), // "getSpeed"
QT_MOC_LITERAL(11, 96, 10), // "getBattery"
QT_MOC_LITERAL(12, 107, 7), // "getTime"
QT_MOC_LITERAL(13, 115, 4) // "time"

    },
    "Car\0speedChanged\0\0batteryChanged\0"
    "timeChanged\0setSpeed\0speed\0setBattery\0"
    "battery\0setTime\0getSpeed\0getBattery\0"
    "getTime\0time"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Car[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   62,    2, 0x0a /* Public */,
       7,    1,   65,    2, 0x0a /* Public */,
       9,    0,   68,    2, 0x0a /* Public */,
      10,    0,   69,    2, 0x0a /* Public */,
      11,    0,   70,    2, 0x0a /* Public */,
      12,    0,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    6,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void,
    QMetaType::QReal,
    QMetaType::QReal,
    QMetaType::QString,

 // properties: name, type, flags
       6, QMetaType::QReal, 0x00495001,
       8, QMetaType::QReal, 0x00495001,
      13, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Car::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Car *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->speedChanged(); break;
        case 1: _t->batteryChanged(); break;
        case 2: _t->timeChanged(); break;
        case 3: _t->setSpeed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->setBattery((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->setTime(); break;
        case 6: { qreal _r = _t->getSpeed();
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 7: { qreal _r = _t->getBattery();
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->getTime();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Car::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Car::speedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Car::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Car::batteryChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Car::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Car::timeChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Car *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->getSpeed(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->getBattery(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Car::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Car.data,
    qt_meta_data_Car,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Car::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Car::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Car.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Car::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Car::speedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Car::batteryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Car::timeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
