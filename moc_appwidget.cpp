/****************************************************************************
** Meta object code from reading C++ file 'appwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "appwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppWidget_t {
    QByteArrayData data[12];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppWidget_t qt_meta_stringdata_AppWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AppWidget"
QT_MOC_LITERAL(1, 10, 14), // "signOutRequest"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "switchPage"
QT_MOC_LITERAL(4, 37, 6), // "pageId"
QT_MOC_LITERAL(5, 44, 21), // "setCurrentViewingData"
QT_MOC_LITERAL(6, 66, 11), // "viewScanner"
QT_MOC_LITERAL(7, 78, 12), // "completeScan"
QT_MOC_LITERAL(8, 91, 8), // "doneScan"
QT_MOC_LITERAL(9, 100, 23), // "handle_updateLabelStyle"
QT_MOC_LITERAL(10, 124, 5), // "index"
QT_MOC_LITERAL(11, 130, 5) // "color"

    },
    "AppWidget\0signOutRequest\0\0switchPage\0"
    "pageId\0setCurrentViewingData\0viewScanner\0"
    "completeScan\0doneScan\0handle_updateLabelStyle\0"
    "index\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    2,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,   11,

       0        // eod
};

void AppWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signOutRequest(); break;
        case 1: _t->switchPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setCurrentViewingData(); break;
        case 3: _t->viewScanner(); break;
        case 4: { bool _r = _t->completeScan();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->doneScan();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->handle_updateLabelStyle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AppWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppWidget::signOutRequest)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AppWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AppWidget.data,
    qt_meta_data_AppWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AppWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void AppWidget::signOutRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
