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
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
