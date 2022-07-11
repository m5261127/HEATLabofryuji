/****************************************************************************
** Meta object code from reading C++ file 'database.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../HEAT_MAC/database.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'database.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Database_t {
    QByteArrayData data[19];
    char stringdata0[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Database_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Database_t qt_meta_stringdata_Database = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Database"
QT_MOC_LITERAL(1, 9, 19), // "loadThumbnailSignal"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "infoSignal"
QT_MOC_LITERAL(4, 41, 8), // "QString*"
QT_MOC_LITERAL(5, 50, 17), // "getFilePathSignal"
QT_MOC_LITERAL(6, 68, 11), // "checkAction"
QT_MOC_LITERAL(7, 80, 10), // "nameChange"
QT_MOC_LITERAL(8, 91, 8), // "showThis"
QT_MOC_LITERAL(9, 100, 23), // "on_dbSearchList_clicked"
QT_MOC_LITERAL(10, 124, 11), // "QModelIndex"
QT_MOC_LITERAL(11, 136, 5), // "index"
QT_MOC_LITERAL(12, 142, 25), // "on_dbSearchButton_clicked"
QT_MOC_LITERAL(13, 168, 25), // "on_showInfoButton_clicked"
QT_MOC_LITERAL(14, 194, 24), // "on_loadLogButton_clicked"
QT_MOC_LITERAL(15, 219, 25), // "on_crearLogButton_clicked"
QT_MOC_LITERAL(16, 245, 18), // "on_subPair_clicked"
QT_MOC_LITERAL(17, 264, 20), // "on_showGraph_clicked"
QT_MOC_LITERAL(18, 285, 26) // "on_setTIRDirectory_clicked"

    },
    "Database\0loadThumbnailSignal\0\0infoSignal\0"
    "QString*\0getFilePathSignal\0checkAction\0"
    "nameChange\0showThis\0on_dbSearchList_clicked\0"
    "QModelIndex\0index\0on_dbSearchButton_clicked\0"
    "on_showInfoButton_clicked\0"
    "on_loadLogButton_clicked\0"
    "on_crearLogButton_clicked\0on_subPair_clicked\0"
    "on_showGraph_clicked\0on_setTIRDirectory_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Database[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,
       5,    1,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   93,    2, 0x0a /* Public */,
       7,    1,   94,    2, 0x0a /* Public */,
       8,    0,   97,    2, 0x0a /* Public */,
       9,    1,   98,    2, 0x08 /* Private */,
      12,    0,  101,    2, 0x08 /* Private */,
      13,    0,  102,    2, 0x08 /* Private */,
      14,    0,  103,    2, 0x08 /* Private */,
      15,    0,  104,    2, 0x08 /* Private */,
      16,    0,  105,    2, 0x08 /* Private */,
      17,    0,  106,    2, 0x08 /* Private */,
      18,    0,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Database::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Database *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadThumbnailSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->infoSignal((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 2: _t->getFilePathSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->checkAction(); break;
        case 4: { QString _r = _t->nameChange((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->showThis(); break;
        case 6: _t->on_dbSearchList_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_dbSearchButton_clicked(); break;
        case 8: _t->on_showInfoButton_clicked(); break;
        case 9: _t->on_loadLogButton_clicked(); break;
        case 10: _t->on_crearLogButton_clicked(); break;
        case 11: _t->on_subPair_clicked(); break;
        case 12: _t->on_showGraph_clicked(); break;
        case 13: _t->on_setTIRDirectory_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Database::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Database::loadThumbnailSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Database::*)(QString * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Database::infoSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Database::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Database::getFilePathSignal)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Database::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Database.data,
    qt_meta_data_Database,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Database::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Database::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Database.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Database::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Database::loadThumbnailSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Database::infoSignal(QString * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Database::getFilePathSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
