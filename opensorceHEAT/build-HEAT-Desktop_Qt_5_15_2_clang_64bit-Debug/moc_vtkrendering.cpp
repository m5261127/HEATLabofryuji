/****************************************************************************
** Meta object code from reading C++ file 'vtkrendering.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../HEAT_MAC/vtkrendering.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vtkrendering.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VtkRendering_t {
    QByteArrayData data[8];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VtkRendering_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VtkRendering_t qt_meta_stringdata_VtkRendering = {
    {
QT_MOC_LITERAL(0, 0, 12), // "VtkRendering"
QT_MOC_LITERAL(1, 13, 11), // "loadVtkFile"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "vtkFileName"
QT_MOC_LITERAL(4, 38, 10), // "changeData"
QT_MOC_LITERAL(5, 49, 10), // "getDirPath"
QT_MOC_LITERAL(6, 60, 8), // "setColor"
QT_MOC_LITERAL(7, 69, 11) // "setRangeVtk"

    },
    "VtkRendering\0loadVtkFile\0\0vtkFileName\0"
    "changeData\0getDirPath\0setColor\0"
    "setRangeVtk"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VtkRendering[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       5,    1,   45,    2, 0x0a /* Public */,
       6,    1,   48,    2, 0x0a /* Public */,
       7,    2,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,

       0        // eod
};

void VtkRendering::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VtkRendering *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadVtkFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->changeData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->getDirPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setRangeVtk((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VtkRendering::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_VtkRendering.data,
    qt_meta_data_VtkRendering,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VtkRendering::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VtkRendering::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VtkRendering.stringdata0))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int VtkRendering::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
