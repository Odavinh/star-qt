/****************************************************************************
** Meta object code from reading C++ file 'show_database.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Automated_accounting_system_for_livestock_farms/show_database.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'show_database.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Show_Database_t {
    QByteArrayData data[16];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Show_Database_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Show_Database_t qt_meta_stringdata_Show_Database = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Show_Database"
QT_MOC_LITERAL(1, 14, 22), // "on_Button_save_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 24), // "on_Button_cancel_clicked"
QT_MOC_LITERAL(4, 63, 29), // "on_tableEmploee_doubleClicked"
QT_MOC_LITERAL(5, 93, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 105, 5), // "index"
QT_MOC_LITERAL(7, 111, 22), // "on_clear_table_clicked"
QT_MOC_LITERAL(8, 134, 18), // "on_add_row_clicked"
QT_MOC_LITERAL(9, 153, 21), // "on_remove_col_clicked"
QT_MOC_LITERAL(10, 175, 22), // "on_buttoSearch_clicked"
QT_MOC_LITERAL(11, 198, 20), // "on_pushAddSt_clicked"
QT_MOC_LITERAL(12, 219, 23), // "on_pushDeleteSt_clicked"
QT_MOC_LITERAL(13, 243, 21), // "on_pushsaveSt_clicked"
QT_MOC_LITERAL(14, 265, 29), // "on_pushButtonCancelSt_clicked"
QT_MOC_LITERAL(15, 295, 32) // "on_tableStatistics_doubleClicked"

    },
    "Show_Database\0on_Button_save_clicked\0"
    "\0on_Button_cancel_clicked\0"
    "on_tableEmploee_doubleClicked\0QModelIndex\0"
    "index\0on_clear_table_clicked\0"
    "on_add_row_clicked\0on_remove_col_clicked\0"
    "on_buttoSearch_clicked\0on_pushAddSt_clicked\0"
    "on_pushDeleteSt_clicked\0on_pushsaveSt_clicked\0"
    "on_pushButtonCancelSt_clicked\0"
    "on_tableStatistics_doubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Show_Database[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    1,   76,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,
      14,    0,   86,    2, 0x08 /* Private */,
      15,    1,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void Show_Database::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Show_Database *_t = static_cast<Show_Database *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Button_save_clicked(); break;
        case 1: _t->on_Button_cancel_clicked(); break;
        case 2: _t->on_tableEmploee_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_clear_table_clicked(); break;
        case 4: _t->on_add_row_clicked(); break;
        case 5: _t->on_remove_col_clicked(); break;
        case 6: _t->on_buttoSearch_clicked(); break;
        case 7: _t->on_pushAddSt_clicked(); break;
        case 8: _t->on_pushDeleteSt_clicked(); break;
        case 9: _t->on_pushsaveSt_clicked(); break;
        case 10: _t->on_pushButtonCancelSt_clicked(); break;
        case 11: _t->on_tableStatistics_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Show_Database::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Show_Database.data,
    qt_meta_data_Show_Database,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Show_Database::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Show_Database::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Show_Database.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Show_Database::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
