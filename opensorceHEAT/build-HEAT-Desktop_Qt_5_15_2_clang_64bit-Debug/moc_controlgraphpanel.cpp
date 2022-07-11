/****************************************************************************
** Meta object code from reading C++ file 'controlgraphpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../HEAT_MAC/controlgraphpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controlgraphpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ControlGraphPanel_t {
    QByteArrayData data[26];
    char stringdata0[380];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControlGraphPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControlGraphPanel_t qt_meta_stringdata_ControlGraphPanel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ControlGraphPanel"
QT_MOC_LITERAL(1, 18, 20), // "showSelectGrphSignal"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 26), // "showCalibrationPanelSignal"
QT_MOC_LITERAL(4, 67, 21), // "closeSelectGrphSignal"
QT_MOC_LITERAL(5, 89, 7), // "changeX"
QT_MOC_LITERAL(6, 97, 7), // "changeY"
QT_MOC_LITERAL(7, 105, 15), // "FITSinfoSignal1"
QT_MOC_LITERAL(8, 121, 8), // "QString*"
QT_MOC_LITERAL(9, 130, 14), // "exportfilename"
QT_MOC_LITERAL(10, 145, 11), // "getDataPath"
QT_MOC_LITERAL(11, 157, 20), // "popControlGraphPanel"
QT_MOC_LITERAL(12, 178, 25), // "on_loadFileButton_clicked"
QT_MOC_LITERAL(13, 204, 26), // "on_substructButton_clicked"
QT_MOC_LITERAL(14, 231, 4), // "setX"
QT_MOC_LITERAL(15, 236, 1), // "x"
QT_MOC_LITERAL(16, 238, 4), // "setY"
QT_MOC_LITERAL(17, 243, 1), // "y"
QT_MOC_LITERAL(18, 245, 9), // "connectDB"
QT_MOC_LITERAL(19, 255, 8), // "compDist"
QT_MOC_LITERAL(20, 264, 9), // "imageData"
QT_MOC_LITERAL(21, 274, 2), // "e1"
QT_MOC_LITERAL(22, 277, 2), // "e2"
QT_MOC_LITERAL(23, 280, 35), // "on_outputCurrentImageButton_c..."
QT_MOC_LITERAL(24, 316, 30), // "on_substructFITSButton_clicked"
QT_MOC_LITERAL(25, 347, 32) // "on_StartConversionButton_clicked"

    },
    "ControlGraphPanel\0showSelectGrphSignal\0"
    "\0showCalibrationPanelSignal\0"
    "closeSelectGrphSignal\0changeX\0changeY\0"
    "FITSinfoSignal1\0QString*\0exportfilename\0"
    "getDataPath\0popControlGraphPanel\0"
    "on_loadFileButton_clicked\0"
    "on_substructButton_clicked\0setX\0x\0"
    "setY\0y\0connectDB\0compDist\0imageData\0"
    "e1\0e2\0on_outputCurrentImageButton_clicked\0"
    "on_substructFITSButton_clicked\0"
    "on_StartConversionButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControlGraphPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  104,    2, 0x06 /* Public */,
       3,    0,  109,    2, 0x06 /* Public */,
       4,    2,  110,    2, 0x06 /* Public */,
       5,    1,  115,    2, 0x06 /* Public */,
       6,    1,  118,    2, 0x06 /* Public */,
       7,    1,  121,    2, 0x06 /* Public */,
       9,    1,  124,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  127,    2, 0x0a /* Public */,
      11,    0,  130,    2, 0x08 /* Private */,
      12,    0,  131,    2, 0x08 /* Private */,
      13,    0,  132,    2, 0x08 /* Private */,
      14,    1,  133,    2, 0x08 /* Private */,
      16,    1,  136,    2, 0x08 /* Private */,
      18,    0,  139,    2, 0x08 /* Private */,
      19,    2,  140,    2, 0x08 /* Private */,
      23,    0,  145,    2, 0x08 /* Private */,
      24,    0,  146,    2, 0x08 /* Private */,
      25,    0,  147,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 20, 0x80000000 | 20,   21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ControlGraphPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControlGraphPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showSelectGrphSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->showCalibrationPanelSignal(); break;
        case 2: _t->closeSelectGrphSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->changeX((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->changeY((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->FITSinfoSignal1((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 6: _t->exportfilename((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->getDataPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->popControlGraphPanel(); break;
        case 9: _t->on_loadFileButton_clicked(); break;
        case 10: _t->on_substructButton_clicked(); break;
        case 11: _t->setX((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->setY((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->connectDB(); break;
        case 14: { bool _r = _t->compDist((*reinterpret_cast< const imageData(*)>(_a[1])),(*reinterpret_cast< const imageData(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->on_outputCurrentImageButton_clicked(); break;
        case 16: _t->on_substructFITSButton_clicked(); break;
        case 17: _t->on_StartConversionButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ControlGraphPanel::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlGraphPanel::showSelectGrphSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ControlGraphPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlGraphPanel::showCalibrationPanelSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ControlGraphPanel::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlGraphPanel::closeSelectGrphSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ControlGraphPanel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlGraphPanel::changeX)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ControlGraphPanel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlGraphPanel::changeY)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ControlGraphPanel::*)(QString * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlGraphPanel::FITSinfoSignal1)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ControlGraphPanel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlGraphPanel::exportfilename)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ControlGraphPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ControlGraphPanel.data,
    qt_meta_data_ControlGraphPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ControlGraphPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControlGraphPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControlGraphPanel.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ControlGraphPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void ControlGraphPanel::showSelectGrphSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ControlGraphPanel::showCalibrationPanelSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ControlGraphPanel::closeSelectGrphSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ControlGraphPanel::changeX(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ControlGraphPanel::changeY(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ControlGraphPanel::FITSinfoSignal1(QString * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ControlGraphPanel::exportfilename(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
