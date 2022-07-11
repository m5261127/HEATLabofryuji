/****************************************************************************
** Meta object code from reading C++ file 'calibration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../HEAT_MAC/calibration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calibration_t {
    QByteArrayData data[21];
    char stringdata0[293];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calibration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calibration_t qt_meta_stringdata_Calibration = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Calibration"
QT_MOC_LITERAL(1, 12, 26), // "showCalibrationGraphSignal"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 26), // "QVector<QVector<QString> >"
QT_MOC_LITERAL(4, 67, 21), // "showControlGraphPanel"
QT_MOC_LITERAL(5, 89, 9), // "QString**"
QT_MOC_LITERAL(6, 99, 11), // "checkAction"
QT_MOC_LITERAL(7, 111, 11), // "getDataPath"
QT_MOC_LITERAL(8, 123, 4), // "setX"
QT_MOC_LITERAL(9, 128, 1), // "x"
QT_MOC_LITERAL(10, 130, 4), // "setY"
QT_MOC_LITERAL(11, 135, 1), // "y"
QT_MOC_LITERAL(12, 137, 29), // "on_searchPixcelButton_clicked"
QT_MOC_LITERAL(13, 167, 20), // "on_pixelList_clicked"
QT_MOC_LITERAL(14, 188, 11), // "QModelIndex"
QT_MOC_LITERAL(15, 200, 5), // "index"
QT_MOC_LITERAL(16, 206, 26), // "on_showGraphButton_clicked"
QT_MOC_LITERAL(17, 233, 20), // "showCalibrationPanel"
QT_MOC_LITERAL(18, 254, 16), // "on_x_textChanged"
QT_MOC_LITERAL(19, 271, 4), // "arg1"
QT_MOC_LITERAL(20, 276, 16) // "on_y_textChanged"

    },
    "Calibration\0showCalibrationGraphSignal\0"
    "\0QVector<QVector<QString> >\0"
    "showControlGraphPanel\0QString**\0"
    "checkAction\0getDataPath\0setX\0x\0setY\0"
    "y\0on_searchPixcelButton_clicked\0"
    "on_pixelList_clicked\0QModelIndex\0index\0"
    "on_showGraphButton_clicked\0"
    "showCalibrationPanel\0on_x_textChanged\0"
    "arg1\0on_y_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calibration[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   74,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   90,    2, 0x0a /* Public */,
       7,    1,   91,    2, 0x0a /* Public */,
       8,    1,   94,    2, 0x0a /* Public */,
      10,    1,   97,    2, 0x0a /* Public */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    1,  101,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,
      18,    1,  106,    2, 0x08 /* Private */,
      20,    1,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

void Calibration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Calibration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showCalibrationGraphSignal((*reinterpret_cast< QVector<QVector<QString> >(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 1: _t->showControlGraphPanel((*reinterpret_cast< QString**(*)>(_a[1]))); break;
        case 2: _t->checkAction(); break;
        case 3: _t->getDataPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setX((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setY((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_searchPixcelButton_clicked(); break;
        case 7: _t->on_pixelList_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_showGraphButton_clicked(); break;
        case 9: _t->showCalibrationPanel(); break;
        case 10: _t->on_x_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_y_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector<QString> > >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Calibration::*)(QVector<QVector<QString> > , QString , QString , QString , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Calibration::showCalibrationGraphSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Calibration::*)(QString * * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Calibration::showControlGraphPanel)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Calibration::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Calibration.data,
    qt_meta_data_Calibration,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Calibration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calibration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calibration.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Calibration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Calibration::showCalibrationGraphSignal(QVector<QVector<QString> > _t1, QString _t2, QString _t3, QString _t4, int _t5, bool _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Calibration::showControlGraphPanel(QString * * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
