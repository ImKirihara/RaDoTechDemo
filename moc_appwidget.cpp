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
    QByteArrayData data[20];
    char stringdata0[253];
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
QT_MOC_LITERAL(3, 26, 22), // "deleteProfileRequested"
QT_MOC_LITERAL(4, 49, 5), // "User*"
QT_MOC_LITERAL(5, 55, 4), // "user"
QT_MOC_LITERAL(6, 60, 10), // "switchPage"
QT_MOC_LITERAL(7, 71, 6), // "pageId"
QT_MOC_LITERAL(8, 78, 21), // "setCurrentViewingData"
QT_MOC_LITERAL(9, 100, 15), // "decreaseBattery"
QT_MOC_LITERAL(10, 116, 13), // "chargeBattery"
QT_MOC_LITERAL(11, 130, 11), // "viewScanner"
QT_MOC_LITERAL(12, 142, 8), // "doneScan"
QT_MOC_LITERAL(13, 151, 23), // "on_deleteProfileClicked"
QT_MOC_LITERAL(14, 175, 22), // "onSignoutButtonClicked"
QT_MOC_LITERAL(15, 198, 23), // "handle_updateLabelStyle"
QT_MOC_LITERAL(16, 222, 5), // "index"
QT_MOC_LITERAL(17, 228, 5), // "color"
QT_MOC_LITERAL(18, 234, 9), // "scanHands"
QT_MOC_LITERAL(19, 244, 8) // "scanFeet"

    },
    "AppWidget\0signOutRequest\0\0"
    "deleteProfileRequested\0User*\0user\0"
    "switchPage\0pageId\0setCurrentViewingData\0"
    "decreaseBattery\0chargeBattery\0viewScanner\0"
    "doneScan\0on_deleteProfileClicked\0"
    "onSignoutButtonClicked\0handle_updateLabelStyle\0"
    "index\0color\0scanHands\0scanFeet"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   83,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    2,   93,    2, 0x0a /* Public */,
      18,    0,   98,    2, 0x0a /* Public */,
      19,    0,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   16,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AppWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signOutRequest(); break;
        case 1: _t->deleteProfileRequested((*reinterpret_cast< User*(*)>(_a[1]))); break;
        case 2: _t->switchPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setCurrentViewingData(); break;
        case 4: _t->decreaseBattery(); break;
        case 5: _t->chargeBattery(); break;
        case 6: _t->viewScanner(); break;
        case 7: { bool _r = _t->doneScan();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->on_deleteProfileClicked(); break;
        case 9: _t->onSignoutButtonClicked(); break;
        case 10: _t->handle_updateLabelStyle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->scanHands(); break;
        case 12: _t->scanFeet(); break;
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
        {
            using _t = void (AppWidget::*)(User * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppWidget::deleteProfileRequested)) {
                *result = 1;
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
void AppWidget::signOutRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AppWidget::deleteProfileRequested(User * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
