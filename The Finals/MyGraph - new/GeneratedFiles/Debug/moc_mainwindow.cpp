/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "paintReady"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "lineReady"
QT_MOC_LITERAL(4, 33, 9), // "nodeReady"
QT_MOC_LITERAL(5, 43, 13), // "searchIDReady"
QT_MOC_LITERAL(6, 57, 15), // "searchTypeReady"
QT_MOC_LITERAL(7, 73, 17), // "setNodeColorReady"
QT_MOC_LITERAL(8, 91, 17), // "setEdgeColorReady"
QT_MOC_LITERAL(9, 109, 12), // "dealCombobox"
QT_MOC_LITERAL(10, 122, 14), // "dealSliderLine"
QT_MOC_LITERAL(11, 137, 14), // "dealSliderNode"
QT_MOC_LITERAL(12, 152, 14), // "openFileDialog"
QT_MOC_LITERAL(13, 167, 8), // "searchID"
QT_MOC_LITERAL(14, 176, 10), // "searchType"
QT_MOC_LITERAL(15, 187, 16), // "dealsetNodeColor"
QT_MOC_LITERAL(16, 204, 16), // "dealsetEdgeColor"
QT_MOC_LITERAL(17, 221, 11), // "aboutWriter"
QT_MOC_LITERAL(18, 233, 9) // "aboutMyQt"

    },
    "MainWindow\0paintReady\0\0lineReady\0"
    "nodeReady\0searchIDReady\0searchTypeReady\0"
    "setNodeColorReady\0setEdgeColorReady\0"
    "dealCombobox\0dealSliderLine\0dealSliderNode\0"
    "openFileDialog\0searchID\0searchType\0"
    "dealsetNodeColor\0dealsetEdgeColor\0"
    "aboutWriter\0aboutMyQt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    0,  101,    2, 0x06 /* Public */,
       5,    0,  102,    2, 0x06 /* Public */,
       6,    0,  103,    2, 0x06 /* Public */,
       7,    0,  104,    2, 0x06 /* Public */,
       8,    0,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  106,    2, 0x0a /* Public */,
      10,    0,  107,    2, 0x0a /* Public */,
      11,    0,  108,    2, 0x0a /* Public */,
      12,    0,  109,    2, 0x0a /* Public */,
      13,    0,  110,    2, 0x0a /* Public */,
      14,    0,  111,    2, 0x0a /* Public */,
      15,    0,  112,    2, 0x0a /* Public */,
      16,    0,  113,    2, 0x0a /* Public */,
      17,    0,  114,    2, 0x0a /* Public */,
      18,    0,  115,    2, 0x0a /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paintReady(); break;
        case 1: _t->lineReady(); break;
        case 2: _t->nodeReady(); break;
        case 3: _t->searchIDReady(); break;
        case 4: _t->searchTypeReady(); break;
        case 5: _t->setNodeColorReady(); break;
        case 6: _t->setEdgeColorReady(); break;
        case 7: _t->dealCombobox(); break;
        case 8: _t->dealSliderLine(); break;
        case 9: _t->dealSliderNode(); break;
        case 10: _t->openFileDialog(); break;
        case 11: _t->searchID(); break;
        case 12: _t->searchType(); break;
        case 13: _t->dealsetNodeColor(); break;
        case 14: _t->dealsetEdgeColor(); break;
        case 15: _t->aboutWriter(); break;
        case 16: _t->aboutMyQt(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::paintReady)) {
                *result = 0;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::lineReady)) {
                *result = 1;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::nodeReady)) {
                *result = 2;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::searchIDReady)) {
                *result = 3;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::searchTypeReady)) {
                *result = 4;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::setNodeColorReady)) {
                *result = 5;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::setEdgeColorReady)) {
                *result = 6;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::paintReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MainWindow::lineReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MainWindow::nodeReady()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void MainWindow::searchIDReady()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void MainWindow::searchTypeReady()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void MainWindow::setNodeColorReady()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void MainWindow::setEdgeColorReady()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
