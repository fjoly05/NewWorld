/****************************************************************************
** Meta object code from reading C++ file 'mainwindowgestionnaire.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindowgestionnaire.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindowgestionnaire.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindowGestionnaire_t {
    QByteArrayData data[16];
    char stringdata[369];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindowGestionnaire_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindowGestionnaire_t qt_meta_stringdata_MainWindowGestionnaire = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 24),
QT_MOC_LITERAL(2, 48, 0),
QT_MOC_LITERAL(3, 49, 26),
QT_MOC_LITERAL(4, 76, 3),
QT_MOC_LITERAL(5, 80, 6),
QT_MOC_LITERAL(6, 87, 27),
QT_MOC_LITERAL(7, 115, 26),
QT_MOC_LITERAL(8, 142, 25),
QT_MOC_LITERAL(9, 168, 38),
QT_MOC_LITERAL(10, 207, 4),
QT_MOC_LITERAL(11, 212, 32),
QT_MOC_LITERAL(12, 245, 31),
QT_MOC_LITERAL(13, 277, 28),
QT_MOC_LITERAL(14, 306, 29),
QT_MOC_LITERAL(15, 336, 32)
    },
    "MainWindowGestionnaire\0on_pushButtonAdd_clicked\0"
    "\0on_tableWidget_cellClicked\0row\0column\0"
    "on_pushButtonDelete_clicked\0"
    "on_pushButtonClear_clicked\0"
    "on_pushButtonEdit_clicked\0"
    "on_lineEditSecuriteSociale_textChanged\0"
    "arg1\0on_lineEditFirstName_textChanged\0"
    "on_lineEditLastName_textChanged\0"
    "on_lineEditEmail_textChanged\0"
    "on_radioButtonManager_clicked\0"
    "on_radioButtonController_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindowGestionnaire[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    2,   70,    2, 0x08 /* Private */,
       6,    0,   75,    2, 0x08 /* Private */,
       7,    0,   76,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    1,   78,    2, 0x08 /* Private */,
      11,    1,   81,    2, 0x08 /* Private */,
      12,    1,   84,    2, 0x08 /* Private */,
      13,    1,   87,    2, 0x08 /* Private */,
      14,    0,   90,    2, 0x08 /* Private */,
      15,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindowGestionnaire::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindowGestionnaire *_t = static_cast<MainWindowGestionnaire *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonAdd_clicked(); break;
        case 1: _t->on_tableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_pushButtonDelete_clicked(); break;
        case 3: _t->on_pushButtonClear_clicked(); break;
        case 4: _t->on_pushButtonEdit_clicked(); break;
        case 5: _t->on_lineEditSecuriteSociale_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_lineEditFirstName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_lineEditLastName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_lineEditEmail_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_radioButtonManager_clicked(); break;
        case 10: _t->on_radioButtonController_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindowGestionnaire::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindowGestionnaire.data,
      qt_meta_data_MainWindowGestionnaire,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindowGestionnaire::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindowGestionnaire::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindowGestionnaire.stringdata))
        return static_cast<void*>(const_cast< MainWindowGestionnaire*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindowGestionnaire::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
