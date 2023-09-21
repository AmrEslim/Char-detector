/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *drawingCanvas;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *trainButton;
    QPushButton *testButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *saveButton;
    QPushButton *loadButton;
    QLabel *statusLabel;
    QProgressBar *trainingProgressBar;
    QLabel *label;
    QPushButton *periodicTest;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *carLabel;
    QLabel *prediction;
    QCustomPlot *errorPlot;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(647, 380);
        MainWindow->setMinimumSize(QSize(647, 380));
        MainWindow->setMaximumSize(QSize(16700000, 16700000));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(401, 10, 181, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        drawingCanvas = new QLabel(verticalLayoutWidget);
        drawingCanvas->setObjectName("drawingCanvas");
        drawingCanvas->setMaximumSize(QSize(180, 200));
        drawingCanvas->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(drawingCanvas);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(380, 250, 251, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        trainButton = new QPushButton(horizontalLayoutWidget);
        trainButton->setObjectName("trainButton");

        horizontalLayout->addWidget(trainButton);

        testButton = new QPushButton(horizontalLayoutWidget);
        testButton->setObjectName("testButton");

        horizontalLayout->addWidget(testButton);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(380, 300, 251, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        saveButton = new QPushButton(horizontalLayoutWidget_2);
        saveButton->setObjectName("saveButton");

        horizontalLayout_2->addWidget(saveButton);

        loadButton = new QPushButton(horizontalLayoutWidget_2);
        loadButton->setObjectName("loadButton");

        horizontalLayout_2->addWidget(loadButton);

        statusLabel = new QLabel(centralwidget);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(20, 250, 351, 91));
        statusLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 125, 115);\n"
"color: rgb(0, 0, 127);\n"
"border-color: rgb(0, 0, 0);"));
        trainingProgressBar = new QProgressBar(centralwidget);
        trainingProgressBar->setObjectName("trainingProgressBar");
        trainingProgressBar->setGeometry(QRect(20, 210, 341, 31));
        trainingProgressBar->setValue(0);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 190, 121, 16));
        periodicTest = new QPushButton(centralwidget);
        periodicTest->setObjectName("periodicTest");
        periodicTest->setGeometry(QRect(420, 200, 151, 24));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, 50, 51, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(290, 80, 71, 21));
        carLabel = new QLabel(centralwidget);
        carLabel->setObjectName("carLabel");
        carLabel->setGeometry(QRect(360, 50, 21, 21));
        prediction = new QLabel(centralwidget);
        prediction->setObjectName("prediction");
        prediction->setGeometry(QRect(360, 80, 21, 21));
        errorPlot = new QCustomPlot(centralwidget);
        errorPlot->setObjectName("errorPlot");
        errorPlot->setGeometry(QRect(20, 10, 251, 171));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 647, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        drawingCanvas->setText(QCoreApplication::translate("MainWindow", "drawingCanvas", nullptr));
        trainButton->setText(QCoreApplication::translate("MainWindow", "Train", nullptr));
        testButton->setText(QCoreApplication::translate("MainWindow", "Test complete Dataset", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "Save Model", nullptr));
        loadButton->setText(QCoreApplication::translate("MainWindow", "Load Model", nullptr));
        statusLabel->setText(QCoreApplication::translate("MainWindow", "statusLabel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Training Progress", nullptr));
        periodicTest->setText(QCoreApplication::translate("MainWindow", "Periodic test", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Label :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "prediction :", nullptr));
        carLabel->setText(QString());
        prediction->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
