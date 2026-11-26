/****************************************************************************
** Meta object code from reading C++ file 'ControlUnitDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/ControlUnitDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ControlUnitDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ControlUnitDialog_t {
    QByteArrayData data[10];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControlUnitDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControlUnitDialog_t qt_meta_stringdata_ControlUnitDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ControlUnitDialog"
QT_MOC_LITERAL(1, 18, 15), // "switchToDCsMode"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 18), // "switchToMBsSWsMode"
QT_MOC_LITERAL(4, 54, 23), // "switchToAdjustmentsMode"
QT_MOC_LITERAL(5, 78, 32), // "switchToSystemOperationTestsMode"
QT_MOC_LITERAL(6, 111, 11), // "clearMemory"
QT_MOC_LITERAL(7, 123, 12), // "clearMemory2"
QT_MOC_LITERAL(8, 136, 18), // "communicationError"
QT_MOC_LITERAL(9, 155, 6) // "addstr"

    },
    "ControlUnitDialog\0switchToDCsMode\0\0"
    "switchToMBsSWsMode\0switchToAdjustmentsMode\0"
    "switchToSystemOperationTestsMode\0"
    "clearMemory\0clearMemory2\0communicationError\0"
    "addstr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControlUnitDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x28 /* Private | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

       0        // eod
};

void ControlUnitDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControlUnitDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->switchToDCsMode(); break;
        case 1: _t->switchToMBsSWsMode(); break;
        case 2: _t->switchToAdjustmentsMode(); break;
        case 3: _t->switchToSystemOperationTestsMode(); break;
        case 4: _t->clearMemory(); break;
        case 5: _t->clearMemory2(); break;
        case 6: _t->communicationError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->communicationError(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ControlUnitDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ControlUnitDialog.data,
    qt_meta_data_ControlUnitDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ControlUnitDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControlUnitDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControlUnitDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ControlUnitDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
