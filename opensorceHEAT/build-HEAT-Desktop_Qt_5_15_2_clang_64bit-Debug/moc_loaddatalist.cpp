/****************************************************************************
** Meta object code from reading C++ file 'loaddatalist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../HEAT_MAC/loaddatalist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loaddatalist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoadDataList_t {
    QByteArrayData data[18];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoadDataList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoadDataList_t qt_meta_stringdata_LoadDataList = {
    {
QT_MOC_LITERAL(0, 0, 12), // "LoadDataList"
QT_MOC_LITERAL(1, 13, 16), // "SelectDataSignal"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "loadDataSignal"
QT_MOC_LITERAL(4, 46, 18), // "tilingWindowSignal"
QT_MOC_LITERAL(5, 65, 17), // "closeWindowSignal"
QT_MOC_LITERAL(6, 83, 21), // "changeParameterSignal"
QT_MOC_LITERAL(7, 105, 15), // "substractSignal"
QT_MOC_LITERAL(8, 121, 14), // "FITSinfoSignal"
QT_MOC_LITERAL(9, 136, 8), // "QString*"
QT_MOC_LITERAL(10, 145, 25), // "on_loadedDataList_clicked"
QT_MOC_LITERAL(11, 171, 11), // "QModelIndex"
QT_MOC_LITERAL(12, 183, 5), // "index"
QT_MOC_LITERAL(13, 189, 23), // "on_tilingButton_clicked"
QT_MOC_LITERAL(14, 213, 25), // "on_closeAllButton_clicked"
QT_MOC_LITERAL(15, 239, 25), // "on_loadFileButton_clicked"
QT_MOC_LITERAL(16, 265, 32), // "on_changeParameterButton_clicked"
QT_MOC_LITERAL(17, 298, 20) // "on_substract_clicked"

    },
    "LoadDataList\0SelectDataSignal\0\0"
    "loadDataSignal\0tilingWindowSignal\0"
    "closeWindowSignal\0changeParameterSignal\0"
    "substractSignal\0FITSinfoSignal\0QString*\0"
    "on_loadedDataList_clicked\0QModelIndex\0"
    "index\0on_tilingButton_clicked\0"
    "on_closeAllButton_clicked\0"
    "on_loadFileButton_clicked\0"
    "on_changeParameterButton_clicked\0"
    "on_substract_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoadDataList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       3,    2,   84,    2, 0x06 /* Public */,
       4,    0,   89,    2, 0x06 /* Public */,
       5,    0,   90,    2, 0x06 /* Public */,
       6,    3,   91,    2, 0x06 /* Public */,
       7,    0,   98,    2, 0x06 /* Public */,
       8,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  102,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Int,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoadDataList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoadDataList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SelectDataSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->loadDataSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->tilingWindowSignal(); break;
        case 3: _t->closeWindowSignal(); break;
        case 4: _t->changeParameterSignal((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->substractSignal(); break;
        case 6: _t->FITSinfoSignal((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 7: _t->on_loadedDataList_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_tilingButton_clicked(); break;
        case 9: _t->on_closeAllButton_clicked(); break;
        case 10: _t->on_loadFileButton_clicked(); break;
        case 11: _t->on_changeParameterButton_clicked(); break;
        case 12: _t->on_substract_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoadDataList::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoadDataList::SelectDataSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LoadDataList::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoadDataList::loadDataSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LoadDataList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoadDataList::tilingWindowSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LoadDataList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoadDataList::closeWindowSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LoadDataList::*)(double , double , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoadDataList::changeParameterSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LoadDataList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoadDataList::substractSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LoadDataList::*)(QString * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoadDataList::FITSinfoSignal)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LoadDataList::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_LoadDataList.data,
    qt_meta_data_LoadDataList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LoadDataList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoadDataList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoadDataList.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LoadDataList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void LoadDataList::SelectDataSignal(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LoadDataList::loadDataSignal(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LoadDataList::tilingWindowSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LoadDataList::closeWindowSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void LoadDataList::changeParameterSignal(double _t1, double _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LoadDataList::substractSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void LoadDataList::FITSinfoSignal(QString * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
