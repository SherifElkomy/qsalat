/****************************************************************************
** Meta object code from reading C++ file 'qhijridate.h'
**
** Created: Fri Dec 5 11:16:18 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qhijridate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhijridate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qhijridate[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_Qhijridate[] = {
    "Qhijridate\0"
};

const QMetaObject Qhijridate::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Qhijridate,
      qt_meta_data_Qhijridate, 0 }
};

const QMetaObject *Qhijridate::metaObject() const
{
    return &staticMetaObject;
}

void *Qhijridate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qhijridate))
        return static_cast<void*>(const_cast< Qhijridate*>(this));
    if (!strcmp(_clname, "Ui::Hijri"))
        return static_cast< Ui::Hijri*>(const_cast< Qhijridate*>(this));
    return QDialog::qt_metacast(_clname);
}

int Qhijridate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
