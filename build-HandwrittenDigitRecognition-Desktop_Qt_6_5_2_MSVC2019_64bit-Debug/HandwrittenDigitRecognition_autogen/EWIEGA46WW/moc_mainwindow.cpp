/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../HandwrittenDigitRecognition/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_periodicTest_clicked",
    "",
    "trainModel",
    "testModel",
    "saveModel",
    "loadModel",
    "onTrainingCompleted",
    "message",
    "stopTraining",
    "updateTrainingProgress",
    "epoch",
    "updateErrorGraph",
    "error"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[10];
    char stringdata5[10];
    char stringdata6[10];
    char stringdata7[20];
    char stringdata8[8];
    char stringdata9[13];
    char stringdata10[23];
    char stringdata11[6];
    char stringdata12[17];
    char stringdata13[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 23),  // "on_periodicTest_clicked"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 10),  // "trainModel"
        QT_MOC_LITERAL(47, 9),  // "testModel"
        QT_MOC_LITERAL(57, 9),  // "saveModel"
        QT_MOC_LITERAL(67, 9),  // "loadModel"
        QT_MOC_LITERAL(77, 19),  // "onTrainingCompleted"
        QT_MOC_LITERAL(97, 7),  // "message"
        QT_MOC_LITERAL(105, 12),  // "stopTraining"
        QT_MOC_LITERAL(118, 22),  // "updateTrainingProgress"
        QT_MOC_LITERAL(141, 5),  // "epoch"
        QT_MOC_LITERAL(147, 16),  // "updateErrorGraph"
        QT_MOC_LITERAL(164, 5)   // "error"
    },
    "MainWindow",
    "on_periodicTest_clicked",
    "",
    "trainModel",
    "testModel",
    "saveModel",
    "loadModel",
    "onTrainingCompleted",
    "message",
    "stopTraining",
    "updateTrainingProgress",
    "epoch",
    "updateErrorGraph",
    "error"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    1,   73,    2, 0x08,    6 /* Private */,
       9,    0,   76,    2, 0x08,    8 /* Private */,
      10,    1,   77,    2, 0x08,    9 /* Private */,
      12,    1,   80,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Double,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_periodicTest_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'trainModel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testModel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveModel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadModel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTrainingCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'stopTraining'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateTrainingProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateErrorGraph'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_periodicTest_clicked(); break;
        case 1: _t->trainModel(); break;
        case 2: _t->testModel(); break;
        case 3: _t->saveModel(); break;
        case 4: _t->loadModel(); break;
        case 5: _t->onTrainingCompleted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->stopTraining(); break;
        case 7: _t->updateTrainingProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->updateErrorGraph((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
