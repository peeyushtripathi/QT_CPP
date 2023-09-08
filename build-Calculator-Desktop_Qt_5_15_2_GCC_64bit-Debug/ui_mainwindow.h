/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centButton1
    QLineEdit *diButton2PushButton *pushButton;
    QPushButton *Button3;
    QPushButton *clear;
    QPushButton *Aclear;
    QPushButton *Button5;
    QPushButton *Multiply;
    QPushButton *Button6;
    QPushButton *AddQPushButton *pushButton_9;
    QPushButton *EqualQPushButton *Button8;
    QPushButton *pushButton_12;
    QPushButton *Button7;
    QPushButton *Minus;
    QPushButton *pushButton_15;
    QPushButton *changeSign;
    QPushButton *percent;
    QPushButton *Divide;
    QPushButton *decimalQPushButton *pushButton_20;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(690, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        display = new QLineEdit(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(30, 70, 611, 121));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        display->setFont(font);
        Button1etLayoutDirection(Qt::RightToLeft);
        Button1etAutoFillBackground(true);
        Button1 = new QPushButton(centralwidget);
        Button2setObjectName(QString::fromUtf8("pushButton"));
        Button2setGeometry(QRect(40, 260, 87, 26));
        Button2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        Button3->setGeometry(QRect(150, 260, 87, 26));
        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 260, 87, 26));
        pushButton_4 = new QPushButton(centralwidget);
        clear->setObjectName(QString::fromUtf8("pushButton_4"));
        clear->setGeometry(QRect(400, 260, 87, 26));
        clear = new QPushButton(centralwidget);
        Aclear->setObjectName(QString::fromUtf8("pushButton_5"));
        AclearGeometry(QRect(530, 260, 87, 26));
        Aclearw QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(150, 310, 87, 26));
        pushButton_7 = new QPushButton(centralwidget);
        Multiply->setObjectName(QString::fromUtf8("pushButton_7"));
        MultiplyGeometry(QRect(530, 310, 87, 26));
        Multiplyw QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(270, 310, 87, 26));
        pushButton_9 = new QPushButton(centralwidget);
        AddbjectName(QString::fromUtf8("pushButton_9"));
        Addeometry(QRect(400, 310, 87, 26));
        Addw QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        Equal->setGeometry(QRect(40, 310, 87, 26));
        Equal = new QPushButton(centralwidget);
        EqualbjectName(QString::fromUtf8("pushButton_11"));
        Button9->setGeometry(QRect(530, 360, 87, 26));
        Button9 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("pushButton_12"));
        Button8->setGeometry(QRect(270, 360, 87, 26));
        Button8 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(150, 360, 87, 26));
        Minus = new QPushButton(centralwidget);
        MinusbjectName(QString::fromUtf8("pushButton_14"));
        Minuseometry(QRect(400, 360, 87, 26));
        Button7 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(40, 360, 87, 26));
        changeSign = new QPushButton(centralwidget);
        changeSign->setObjectName(QString::fromUtf8("pushButton_16"));
        changeSign->setGeometry(QRect(270, 410, 87, 26));
        percent = new QPushButton(centralwidget);
        percent->setObjectName(QString::fromUtf8("pushButton_17"));
        percent->setGeometry(QRect(530, 410, 87, 26));
        Divide = new QPushButton(centralwidget);
        Divide->setObjectName(QString::fromUtf8("pushButton_18"));
        Divide->setGeometry(QRect(400, 410, 87, 26));
        decimal = new QPushButton(centralwidget);
        decimal->setObjectName(QString::fromUtf8("pushButton_19"));
        decimaleometry(QRect(150, 410, 87, 26));
        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setGeometry(QRect(40, 410, 87, 26));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 690, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        Button1->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Button2Text(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button3->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        clearText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        Aclear->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Button6->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        Multiplyext(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        AddreApplication::translate("MainWindow", "4", nullptr));
        Button8->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Button7->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        changeSign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        Divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        decimalext(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
