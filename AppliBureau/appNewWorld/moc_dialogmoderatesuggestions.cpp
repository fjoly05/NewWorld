/****************************************************************************
** Meta object code from reading C++ file 'dialogmoderatesuggestions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialogmoderatesuggestions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogmoderatesuggestions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DialogModerateSuggestions_t {
    QByteArrayData data[10];
    char stringdata[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogModerateSuggestions_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogModerateSuggestions_t qt_meta_stringdata_DialogModerateSuggestions = {
    {
QT_MOC_LITERAL(0, 0, 25),
QT_MOC_LITERAL(1, 26, 27),
QT_MOC_LITERAL(2, 54, 0),
QT_MOC_LITERAL(3, 55, 27),
QT_MOC_LITERAL(4, 83, 31),
QT_MOC_LITERAL(5, 115, 35),
QT_MOC_LITERAL(6, 151, 5),
QT_MOC_LITERAL(7, 157, 27),
QT_MOC_LITERAL(8, 185, 34),
QT_MOC_LITERAL(9, 220, 34)
    },
    "DialogModerateSuggestions\0"
    "on_pushButtonAccept_clicked\0\0"
    "on_pushButtonReject_clicked\0"
    "on_pushButtonValidation_clicked\0"
    "on_listWidgetSuggestedProds_clicked\0"
    "index\0on_pushButtonCancel_clicked\0"
    "on_listWidgetAcceptedProds_clicked\0"
    "on_listWidgetRejectedProds_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogModerateSuggestions[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
       9,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, QMetaType::QModelIndex,    6,

       0        // eod
};

void DialogModerateSuggestions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogModerateSuggestions *_t = static_cast<DialogModerateSuggestions *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonAccept_clicked(); break;
        case 1: _t->on_pushButtonReject_clicked(); break;
        case 2: _t->on_pushButtonValidation_clicked(); break;
        case 3: _t->on_listWidgetSuggestedProds_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_pushButtonCancel_clicked(); break;
        case 5: _t->on_listWidgetAcceptedProds_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_listWidgetRejectedProds_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DialogModerateSuggestions::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogModerateSuggestions.data,
      qt_meta_data_DialogModerateSuggestions,  qt_static_metacall, 0, 0}
};


const QMetaObject *DialogModerateSuggestions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogModerateSuggestions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogModerateSuggestions.stringdata))
        return static_cast<void*>(const_cast< DialogModerateSuggestions*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogModerateSuggestions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
