/****************************************************************************
** Meta object code from reading C++ file 'qplateparserthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qplateparserthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplateparserthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QPlateParserThread_t {
    QByteArrayData data[8];
    char stringdata[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPlateParserThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPlateParserThread_t qt_meta_stringdata_QPlateParserThread = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 9),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 8),
QT_MOC_LITERAL(4, 39, 11),
QT_MOC_LITERAL(5, 51, 7),
QT_MOC_LITERAL(6, 59, 19),
QT_MOC_LITERAL(7, 79, 6)
    },
    "QPlateParserThread\0PlateData\0\0strPlate\0"
    "strDateTime\0byImage\0HandleZmqClientData\0"
    "byData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPlateParserThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    7,

       0        // eod
};

void QPlateParserThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPlateParserThread *_t = static_cast<QPlateParserThread *>(_o);
        switch (_id) {
        case 0: _t->PlateData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 1: _t->HandleZmqClientData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPlateParserThread::*_t)(QString , QString , QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlateParserThread::PlateData)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QPlateParserThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QPlateParserThread.data,
      qt_meta_data_QPlateParserThread,  qt_static_metacall, 0, 0}
};


const QMetaObject *QPlateParserThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlateParserThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPlateParserThread.stringdata))
        return static_cast<void*>(const_cast< QPlateParserThread*>(this));
    return QThread::qt_metacast(_clname);
}

int QPlateParserThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QPlateParserThread::PlateData(QString _t1, QString _t2, QByteArray _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
