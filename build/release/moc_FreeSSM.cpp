/****************************************************************************
** Meta object code from reading C++ file 'FreeSSM.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/FreeSSM.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FreeSSM.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FreeSSM_t {
    QByteArrayData data[16];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FreeSSM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FreeSSM_t qt_meta_stringdata_FreeSSM = {
    {
QT_MOC_LITERAL(0, 0, 7), // "FreeSSM"
QT_MOC_LITERAL(1, 8, 6), // "engine"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 12), // "cmdline_args"
QT_MOC_LITERAL(4, 29, 12), // "transmission"
QT_MOC_LITERAL(5, 42, 3), // "abs"
QT_MOC_LITERAL(6, 46, 13), // "cruisecontrol"
QT_MOC_LITERAL(7, 60, 6), // "aircon"
QT_MOC_LITERAL(8, 67, 11), // "preferences"
QT_MOC_LITERAL(9, 79, 4), // "help"
QT_MOC_LITERAL(10, 84, 5), // "about"
QT_MOC_LITERAL(11, 90, 11), // "retranslate"
QT_MOC_LITERAL(12, 102, 11), // "newlanguage"
QT_MOC_LITERAL(13, 114, 12), // "QTranslator*"
QT_MOC_LITERAL(14, 127, 13), // "newtranslator"
QT_MOC_LITERAL(15, 141, 10) // "dumpCUdata"

    },
    "FreeSSM\0engine\0\0cmdline_args\0transmission\0"
    "abs\0cruisecontrol\0aircon\0preferences\0"
    "help\0about\0retranslate\0newlanguage\0"
    "QTranslator*\0newtranslator\0dumpCUdata"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FreeSSM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x0a /* Public */,
       1,    0,   92,    2, 0x2a /* Public | MethodCloned */,
       4,    1,   93,    2, 0x0a /* Public */,
       4,    0,   96,    2, 0x2a /* Public | MethodCloned */,
       5,    1,   97,    2, 0x0a /* Public */,
       5,    0,  100,    2, 0x2a /* Public | MethodCloned */,
       6,    1,  101,    2, 0x0a /* Public */,
       6,    0,  104,    2, 0x2a /* Public | MethodCloned */,
       7,    1,  105,    2, 0x0a /* Public */,
       7,    0,  108,    2, 0x2a /* Public | MethodCloned */,
       8,    0,  109,    2, 0x08 /* Private */,
       9,    0,  110,    2, 0x08 /* Private */,
      10,    0,  111,    2, 0x08 /* Private */,
      11,    2,  112,    2, 0x08 /* Private */,
      15,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 13,   12,   14,
    QMetaType::Void,

       0        // eod
};

void FreeSSM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FreeSSM *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->engine((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->engine(); break;
        case 2: _t->transmission((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->transmission(); break;
        case 4: _t->abs((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 5: _t->abs(); break;
        case 6: _t->cruisecontrol((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 7: _t->cruisecontrol(); break;
        case 8: _t->aircon((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 9: _t->aircon(); break;
        case 10: _t->preferences(); break;
        case 11: _t->help(); break;
        case 12: _t->about(); break;
        case 13: _t->retranslate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QTranslator*(*)>(_a[2]))); break;
        case 14: _t->dumpCUdata(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTranslator* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FreeSSM::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_FreeSSM.data,
    qt_meta_data_FreeSSM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FreeSSM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FreeSSM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FreeSSM.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FreeSSM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
