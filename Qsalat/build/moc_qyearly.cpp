/****************************************************************************
** Meta object code from reading C++ file 'qyearly.h'
**
** Created: Fri Dec 5 11:16:12 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qyearly.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qyearly.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qyearly[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_Qyearly[] = {
    "Qyearly\0"
};

const QMetaObject Qyearly::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Qyearly,
      qt_meta_data_Qyearly, 0 }
};

const QMetaObject *Qyearly::metaObject() const
{
    return &staticMetaObject;
}

void *Qyearly::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qyearly))
        return static_cast<void*>(const_cast< Qyearly*>(this));
    if (!strcmp(_clname, "Ui::Yearly"))
        return static_cast< Ui::Yearly*>(const_cast< Qyearly*>(this));
    return QDialog::qt_metacast(_clname);
}

int Qyearly::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
