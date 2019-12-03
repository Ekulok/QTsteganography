/****************************************************************************
** Meta object code from reading C++ file 'addfile_audio.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Steganography/addfile_audio.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addfile_audio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_addfile_audio_t {
    QByteArrayData data[9];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_addfile_audio_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_addfile_audio_t qt_meta_stringdata_addfile_audio = {
    {
QT_MOC_LITERAL(0, 0, 13), // "addfile_audio"
QT_MOC_LITERAL(1, 14, 20), // "on_OpenAudio_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "on_Play_clicked"
QT_MOC_LITERAL(4, 52, 16), // "on_Pause_clicked"
QT_MOC_LITERAL(5, 69, 15), // "on_Stop_clicked"
QT_MOC_LITERAL(6, 85, 15), // "on_Mute_clicked"
QT_MOC_LITERAL(7, 101, 22), // "on_Volume_valueChanged"
QT_MOC_LITERAL(8, 124, 5) // "value"

    },
    "addfile_audio\0on_OpenAudio_clicked\0\0"
    "on_Play_clicked\0on_Pause_clicked\0"
    "on_Stop_clicked\0on_Mute_clicked\0"
    "on_Volume_valueChanged\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_addfile_audio[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void addfile_audio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<addfile_audio *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_OpenAudio_clicked(); break;
        case 1: _t->on_Play_clicked(); break;
        case 2: _t->on_Pause_clicked(); break;
        case 3: _t->on_Stop_clicked(); break;
        case 4: _t->on_Mute_clicked(); break;
        case 5: _t->on_Volume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject addfile_audio::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_addfile_audio.data,
    qt_meta_data_addfile_audio,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *addfile_audio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *addfile_audio::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_addfile_audio.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int addfile_audio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
