/****************************************************************************
** Meta object code from reading C++ file 'downloadmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DownloadWindow/downloadmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'downloadmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DownloadMainWindow_t {
    QByteArrayData data[5];
    char stringdata[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_DownloadMainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_DownloadMainWindow_t qt_meta_stringdata_DownloadMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 11),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 21),
QT_MOC_LITERAL(4, 54, 16)
    },
    "DownloadMainWindow\0readFortune\0\0"
    "on_pushButton_clicked\0on_disconnection\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DownloadMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08,
       3,    0,   30,    2, 0x08,
       4,    0,   31,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DownloadMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DownloadMainWindow *_t = static_cast<DownloadMainWindow *>(_o);
        switch (_id) {
        case 0: _t->readFortune(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_disconnection(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DownloadMainWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DownloadMainWindow.data,
      qt_meta_data_DownloadMainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *DownloadMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DownloadMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadMainWindow.stringdata))
        return static_cast<void*>(const_cast< DownloadMainWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int DownloadMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
