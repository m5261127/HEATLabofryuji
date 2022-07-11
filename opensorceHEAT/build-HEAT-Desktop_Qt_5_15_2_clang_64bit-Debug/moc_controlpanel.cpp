/****************************************************************************
** Meta object code from reading C++ file 'controlpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../HEAT_MAC/controlpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controlpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Controlpanel_t {
    QByteArrayData data[16];
    char stringdata0[322];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Controlpanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Controlpanel_t qt_meta_stringdata_Controlpanel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Controlpanel"
QT_MOC_LITERAL(1, 13, 15), // "showImageSignal"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "showDatabaseSignal"
QT_MOC_LITERAL(4, 49, 21), // "showTargetModelSignal"
QT_MOC_LITERAL(5, 71, 16), // "quitSystemSignal"
QT_MOC_LITERAL(6, 88, 13), // "showVtkSignal"
QT_MOC_LITERAL(7, 102, 14), // "showCaliSignal"
QT_MOC_LITERAL(8, 117, 21), // "showControlGraphPanel"
QT_MOC_LITERAL(9, 139, 26), // "on_showImageButton_clicked"
QT_MOC_LITERAL(10, 166, 26), // "on_showModelButton_clicked"
QT_MOC_LITERAL(11, 193, 23), // "on_showDBButton_clicked"
QT_MOC_LITERAL(12, 217, 21), // "on_quitButton_clicked"
QT_MOC_LITERAL(13, 239, 24), // "on_showVtkButton_clicked"
QT_MOC_LITERAL(14, 264, 25), // "on_showCaliButton_clicked"
QT_MOC_LITERAL(15, 290, 31) // "on_showConversionButton_clicked"

    },
    "Controlpanel\0showImageSignal\0\0"
    "showDatabaseSignal\0showTargetModelSignal\0"
    "quitSystemSignal\0showVtkSignal\0"
    "showCaliSignal\0showControlGraphPanel\0"
    "on_showImageButton_clicked\0"
    "on_showModelButton_clicked\0"
    "on_showDBButton_clicked\0on_quitButton_clicked\0"
    "on_showVtkButton_clicked\0"
    "on_showCaliButton_clicked\0"
    "on_showConversionButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Controlpanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,
       5,    0,   87,    2, 0x06 /* Public */,
       6,    0,   88,    2, 0x06 /* Public */,
       7,    0,   89,    2, 0x06 /* Public */,
       8,    0,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Controlpanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Controlpanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showImageSignal(); break;
        case 1: _t->showDatabaseSignal(); break;
        case 2: _t->showTargetModelSignal(); break;
        case 3: _t->quitSystemSignal(); break;
        case 4: _t->showVtkSignal(); break;
        case 5: _t->showCaliSignal(); break;
        case 6: _t->showControlGraphPanel(); break;
        case 7: _t->on_showImageButton_clicked(); break;
        case 8: _t->on_showModelButton_clicked(); break;
        case 9: _t->on_showDBButton_clicked(); break;
        case 10: _t->on_quitButton_clicked(); break;
        case 11: _t->on_showVtkButton_clicked(); break;
        case 12: _t->on_showCaliButton_clicked(); break;
        case 13: _t->on_showConversionButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Controlpanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controlpanel::showImageSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Controlpanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controlpanel::showDatabaseSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Controlpanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controlpanel::showTargetModelSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Controlpanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controlpanel::quitSystemSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Controlpanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controlpanel::showVtkSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Controlpanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controlpanel::showCaliSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Controlpanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controlpanel::showControlGraphPanel)) {
                *result = 6;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Controlpanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Controlpanel.data,
    qt_meta_data_Controlpanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Controlpanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Controlpanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Controlpanel.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Controlpanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Controlpanel::showImageSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Controlpanel::showDatabaseSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Controlpanel::showTargetModelSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Controlpanel::quitSystemSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Controlpanel::showVtkSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Controlpanel::showCaliSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Controlpanel::showControlGraphPanel()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
