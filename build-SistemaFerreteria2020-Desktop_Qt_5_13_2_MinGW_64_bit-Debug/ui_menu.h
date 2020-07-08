/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QLabel *ventana_menu;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *id_iralogin;
    QLabel *nombre_ferreteria;
    QLabel *tiempo_sede;
    QLabel *icon_user;
    QLabel *name_user;
    QLabel *l_ferreteria;
    QLabel *l_sede;
    QLabel *nombre_sede;
    QLabel *l_numerosedes;
    QLabel *listas_sedes;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(1024, 743);
        ventana_menu = new QLabel(Menu);
        ventana_menu->setObjectName(QString::fromUtf8("ventana_menu"));
        ventana_menu->setGeometry(QRect(0, -10, 1024, 751));
        ventana_menu->setPixmap(QPixmap(QString::fromUtf8(":/design-menu.jpg")));
        pushButton = new QPushButton(Menu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 460, 100, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(Menu);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(480, 460, 100, 30));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(Menu);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(784, 460, 100, 30));
        pushButton_3->setFont(font);
        id_iralogin = new QPushButton(Menu);
        id_iralogin->setObjectName(QString::fromUtf8("id_iralogin"));
        id_iralogin->setGeometry(QRect(840, 640, 121, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        id_iralogin->setFont(font1);
        id_iralogin->setAutoFillBackground(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cerrar-sesion.png"), QSize(), QIcon::Normal, QIcon::Off);
        id_iralogin->setIcon(icon);
        nombre_ferreteria = new QLabel(Menu);
        nombre_ferreteria->setObjectName(QString::fromUtf8("nombre_ferreteria"));
        nombre_ferreteria->setGeometry(QRect(130, 20, 221, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        nombre_ferreteria->setFont(font2);
        tiempo_sede = new QLabel(Menu);
        tiempo_sede->setObjectName(QString::fromUtf8("tiempo_sede"));
        tiempo_sede->setGeometry(QRect(180, 100, 201, 31));
        tiempo_sede->setFont(font2);
        icon_user = new QLabel(Menu);
        icon_user->setObjectName(QString::fromUtf8("icon_user"));
        icon_user->setGeometry(QRect(800, 10, 61, 71));
        icon_user->setPixmap(QPixmap(QString::fromUtf8(":/iniciouser.png")));
        name_user = new QLabel(Menu);
        name_user->setObjectName(QString::fromUtf8("name_user"));
        name_user->setGeometry(QRect(860, 30, 141, 41));
        name_user->setFont(font2);
        l_ferreteria = new QLabel(Menu);
        l_ferreteria->setObjectName(QString::fromUtf8("l_ferreteria"));
        l_ferreteria->setGeometry(QRect(40, 20, 81, 31));
        l_ferreteria->setFont(font2);
        l_sede = new QLabel(Menu);
        l_sede->setObjectName(QString::fromUtf8("l_sede"));
        l_sede->setGeometry(QRect(40, 60, 51, 31));
        l_sede->setFont(font2);
        nombre_sede = new QLabel(Menu);
        nombre_sede->setObjectName(QString::fromUtf8("nombre_sede"));
        nombre_sede->setGeometry(QRect(100, 60, 191, 31));
        nombre_sede->setFont(font2);
        l_numerosedes = new QLabel(Menu);
        l_numerosedes->setObjectName(QString::fromUtf8("l_numerosedes"));
        l_numerosedes->setGeometry(QRect(40, 100, 141, 31));
        l_numerosedes->setFont(font2);
        listas_sedes = new QLabel(Menu);
        listas_sedes->setObjectName(QString::fromUtf8("listas_sedes"));
        listas_sedes->setGeometry(QRect(780, 100, 211, 81));

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Form", nullptr));
        ventana_menu->setText(QString());
        pushButton->setText(QCoreApplication::translate("Menu", "Ir", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Menu", "Ir", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Menu", "Ir", nullptr));
        id_iralogin->setText(QCoreApplication::translate("Menu", "Cerrar Sesi\303\263n", nullptr));
        nombre_ferreteria->setText(QString());
        tiempo_sede->setText(QString());
        icon_user->setText(QString());
        name_user->setText(QString());
        l_ferreteria->setText(QCoreApplication::translate("Menu", "Ferreteria: ", nullptr));
        l_sede->setText(QCoreApplication::translate("Menu", "Sede: ", nullptr));
        nombre_sede->setText(QString());
        l_numerosedes->setText(QCoreApplication::translate("Menu", "Tiempo de sede: ", nullptr));
        listas_sedes->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
