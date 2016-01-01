/****************************************************************************
** Meta object code from reading C++ file 'graphwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../graphwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GraphWidget_t {
    QByteArrayData data[17];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphWidget_t qt_meta_stringdata_GraphWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GraphWidget"
QT_MOC_LITERAL(1, 12, 7), // "shuffle"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "rotLeft"
QT_MOC_LITERAL(4, 29, 8), // "rotRight"
QT_MOC_LITERAL(5, 38, 6), // "zoomIn"
QT_MOC_LITERAL(6, 45, 7), // "zoomOut"
QT_MOC_LITERAL(7, 53, 10), // "beginPaint"
QT_MOC_LITERAL(8, 64, 13), // "setNoderadius"
QT_MOC_LITERAL(9, 78, 12), // "setLineWidth"
QT_MOC_LITERAL(10, 91, 9), // "saveGraph"
QT_MOC_LITERAL(11, 101, 8), // "hideItem"
QT_MOC_LITERAL(12, 110, 8), // "showItem"
QT_MOC_LITERAL(13, 119, 12), // "searchNodeId"
QT_MOC_LITERAL(14, 132, 14), // "searchNodeType"
QT_MOC_LITERAL(15, 147, 12), // "setNodeColor"
QT_MOC_LITERAL(16, 160, 12) // "setEdgeColor"

    },
    "GraphWidget\0shuffle\0\0rotLeft\0rotRight\0"
    "zoomIn\0zoomOut\0beginPaint\0setNoderadius\0"
    "setLineWidth\0saveGraph\0hideItem\0"
    "showItem\0searchNodeId\0searchNodeType\0"
    "setNodeColor\0setEdgeColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    0,   94,    2, 0x0a /* Public */,
       8,    0,   95,    2, 0x0a /* Public */,
       9,    0,   96,    2, 0x0a /* Public */,
      10,    0,   97,    2, 0x0a /* Public */,
      11,    0,   98,    2, 0x0a /* Public */,
      12,    0,   99,    2, 0x0a /* Public */,
      13,    0,  100,    2, 0x0a /* Public */,
      14,    0,  101,    2, 0x0a /* Public */,
      15,    0,  102,    2, 0x0a /* Public */,
      16,    0,  103,    2, 0x0a /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GraphWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GraphWidget *_t = static_cast<GraphWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shuffle(); break;
        case 1: _t->rotLeft(); break;
        case 2: _t->rotRight(); break;
        case 3: _t->zoomIn(); break;
        case 4: _t->zoomOut(); break;
        case 5: _t->beginPaint(); break;
        case 6: _t->setNoderadius(); break;
        case 7: _t->setLineWidth(); break;
        case 8: _t->saveGraph(); break;
        case 9: _t->hideItem(); break;
        case 10: _t->showItem(); break;
        case 11: _t->searchNodeId(); break;
        case 12: _t->searchNodeType(); break;
        case 13: _t->setNodeColor(); break;
        case 14: _t->setEdgeColor(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject GraphWidget::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_GraphWidget.data,
      qt_meta_data_GraphWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GraphWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GraphWidget.stringdata0))
        return static_cast<void*>(const_cast< GraphWidget*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int GraphWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
