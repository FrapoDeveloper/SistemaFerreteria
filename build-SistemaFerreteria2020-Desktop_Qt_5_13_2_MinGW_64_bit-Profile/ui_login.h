/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QLabel *ventana_login;
    QLineEdit *pass_user;
    QLineEdit *name_user;
    QPushButton *id_ingresar;
    QLabel *mensaje_error;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(1024, 759);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ventana_login = new QLabel(centralwidget);
        ventana_login->setObjectName(QString::fromUtf8("ventana_login"));
        ventana_login->setGeometry(QRect(0, 0, 1051, 721));
        ventana_login->setPixmap(QPixmap(QString::fromUtf8(":/login-design.jpg")));
        pass_user = new QLineEdit(centralwidget);
        pass_user->setObjectName(QString::fromUtf8("pass_user"));
        pass_user->setGeometry(QRect(330, 440, 361, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        pass_user->setFont(font);
        pass_user->setEchoMode(QLineEdit::Password);
        name_user = new QLineEdit(centralwidget);
        name_user->setObjectName(QString::fromUtf8("name_user"));
        name_user->setGeometry(QRect(330, 310, 361, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        name_user->setFont(font1);
        id_ingresar = new QPushButton(centralwidget);
        id_ingresar->setObjectName(QString::fromUtf8("id_ingresar"));
        id_ingresar->setGeometry(QRect(460, 550, 131, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        id_ingresar->setFont(font2);
        mensaje_error = new QLabel(centralwidget);
        mensaje_error->setObjectName(QString::fromUtf8("mensaje_error"));
        mensaje_error->setGeometry(QRect(410, 610, 241, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        mensaje_error->setFont(font3);
        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 25));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        ventana_login->setText(QString());
        id_ingresar->setText(QCoreApplication::translate("Login", "Iniciar", nullptr));
        mensaje_error->setText(QCoreApplication::translate("Login", "Usuario o contase\303\261a incorrecta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
