/****************************************************************************
** Meta object code from reading C++ file 'qcalculation.h'
**
** Created: Fri Dec 5 11:16:16 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qcalculation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcalculation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qcalculation[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_Qcalculation[] = {
    "Qcalculation\0"
};

const QMetaObject Qcalculation::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Qcalculation,
      qt_meta_data_Qcalculation, 0 }
};

const QMetaObject *Qcalculation::metaObject() const
{
    return &staticMetaObject;
}

void *Qcalculation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qcalculation))
        return static_cast<void*>(const_cast< Qcalculation*>(this));
    if (!strcmp(_clname, "Ui::Calculation"))
        return static_cast< Ui::Calculation*>(const_cast< Qcalculation*>(this));
    return QDialog::qt_metacast(_clname);
}

int Qcalculation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
