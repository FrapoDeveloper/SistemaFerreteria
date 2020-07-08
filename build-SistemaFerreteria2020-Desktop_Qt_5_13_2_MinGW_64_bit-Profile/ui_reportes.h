/********************************************************************************
** Form generated from reading UI file 'reportes.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTES_H
#define UI_REPORTES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reportes
{
public:
    QLabel *ventana_reportes;
    QPushButton *id_listaclientes;
    QPushButton *id_busquedaproductos;
    QPushButton *id_ventasperiodo;
    QPushButton *id_productosreposicion;
    QPushButton *id_listatrabajadores;
    QPushButton *id_listaproveedores;
    QPushButton *id_regresardereportes;

    void setupUi(QWidget *Reportes)
    {
        if (Reportes->objectName().isEmpty())
            Reportes->setObjectName(QString::fromUtf8("Reportes"));
        Reportes->resize(1024, 780);
        ventana_reportes = new QLabel(Reportes);
        ventana_reportes->setObjectName(QString::fromUtf8("ventana_reportes"));
        ventana_reportes->setGeometry(QRect(0, -83, 1101, 871));
        ventana_reportes->setPixmap(QPixmap(QString::fromUtf8("../Recursos/reportes-design.jpg")));
        id_listaclientes = new QPushButton(Reportes);
        id_listaclientes->setObjectName(QString::fromUtf8("id_listaclientes"));
        id_listaclientes->setGeometry(QRect(130, 27, 211, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        id_listaclientes->setFont(font);
        id_listaclientes->setAutoFillBackground(true);
        id_busquedaproductos = new QPushButton(Reportes);
        id_busquedaproductos->setObjectName(QString::fromUtf8("id_busquedaproductos"));
        id_busquedaproductos->setGeometry(QRect(130, 140, 211, 51));
        id_busquedaproductos->setFont(font);
        id_ventasperiodo = new QPushButton(Reportes);
        id_ventasperiodo->setObjectName(QString::fromUtf8("id_ventasperiodo"));
        id_ventasperiodo->setGeometry(QRect(130, 260, 211, 51));
        id_ventasperiodo->setFont(font);
        id_productosreposicion = new QPushButton(Reportes);
        id_productosreposicion->setObjectName(QString::fromUtf8("id_productosreposicion"));
        id_productosreposicion->setGeometry(QRect(130, 380, 211, 51));
        id_productosreposicion->setFont(font);
        id_listatrabajadores = new QPushButton(Reportes);
        id_listatrabajadores->setObjectName(QString::fromUtf8("id_listatrabajadores"));
        id_listatrabajadores->setGeometry(QRect(130, 491, 211, 51));
        id_listatrabajadores->setFont(font);
        id_listaproveedores = new QPushButton(Reportes);
        id_listaproveedores->setObjectName(QString::fromUtf8("id_listaproveedores"));
        id_listaproveedores->setGeometry(QRect(130, 607, 211, 51));
        id_listaproveedores->setFont(font);
        id_regresardereportes = new QPushButton(Reportes);
        id_regresardereportes->setObjectName(QString::fromUtf8("id_regresardereportes"));
        id_regresardereportes->setGeometry(QRect(880, 20, 101, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Recursos/regreso.png"), QSize(), QIcon::Normal, QIcon::Off);
        id_regresardereportes->setIcon(icon);

        retranslateUi(Reportes);

        QMetaObject::connectSlotsByName(Reportes);
    } // setupUi

    void retranslateUi(QWidget *Reportes)
    {
        Reportes->setWindowTitle(QCoreApplication::translate("Reportes", "Form", nullptr));
        ventana_reportes->setText(QString());
        id_listaclientes->setText(QCoreApplication::translate("Reportes", "Lista de clientes", nullptr));
        id_busquedaproductos->setText(QCoreApplication::translate("Reportes", "Busqueda de productos", nullptr));
        id_ventasperiodo->setText(QCoreApplication::translate("Reportes", "Ventas por periodo", nullptr));
        id_productosreposicion->setText(QCoreApplication::translate("Reportes", "Productos de reposici\303\263n", nullptr));
        id_listatrabajadores->setText(QCoreApplication::translate("Reportes", "Lista de trabajadores", nullptr));
        id_listaproveedores->setText(QCoreApplication::translate("Reportes", "Lista de proveedores", nullptr));
        id_regresardereportes->setText(QCoreApplication::translate("Reportes", "Regresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reportes: public Ui_Reportes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTES_H
