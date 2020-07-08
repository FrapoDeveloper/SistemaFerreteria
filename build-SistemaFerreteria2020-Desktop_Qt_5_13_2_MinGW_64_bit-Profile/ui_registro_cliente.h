/********************************************************************************
** Form generated from reading UI file 'registro_cliente.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRO_CLIENTE_H
#define UI_REGISTRO_CLIENTE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registro_cliente
{
public:
    QLabel *ventana_registroclientes;
    QPushButton *id_clientes;
    QPushButton *id_productos;
    QPushButton *id_proveedores;
    QPushButton *id_lineaproductos;
    QPushButton *id_trabajadores;
    QPushButton *id_regresaroperaciones;

    void setupUi(QWidget *Registro_cliente)
    {
        if (Registro_cliente->objectName().isEmpty())
            Registro_cliente->setObjectName(QString::fromUtf8("Registro_cliente"));
        Registro_cliente->resize(1024, 731);
        ventana_registroclientes = new QLabel(Registro_cliente);
        ventana_registroclientes->setObjectName(QString::fromUtf8("ventana_registroclientes"));
        ventana_registroclientes->setGeometry(QRect(0, -20, 1024, 791));
        ventana_registroclientes->setPixmap(QPixmap(QString::fromUtf8(":/operaciones-design-blanco.jpg")));
        id_clientes = new QPushButton(Registro_cliente);
        id_clientes->setObjectName(QString::fromUtf8("id_clientes"));
        id_clientes->setGeometry(QRect(110, 60, 201, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        id_clientes->setFont(font);
        id_productos = new QPushButton(Registro_cliente);
        id_productos->setObjectName(QString::fromUtf8("id_productos"));
        id_productos->setGeometry(QRect(110, 190, 201, 51));
        id_productos->setFont(font);
        id_proveedores = new QPushButton(Registro_cliente);
        id_proveedores->setObjectName(QString::fromUtf8("id_proveedores"));
        id_proveedores->setGeometry(QRect(110, 340, 201, 51));
        id_proveedores->setFont(font);
        id_lineaproductos = new QPushButton(Registro_cliente);
        id_lineaproductos->setObjectName(QString::fromUtf8("id_lineaproductos"));
        id_lineaproductos->setGeometry(QRect(110, 480, 201, 51));
        id_lineaproductos->setFont(font);
        id_trabajadores = new QPushButton(Registro_cliente);
        id_trabajadores->setObjectName(QString::fromUtf8("id_trabajadores"));
        id_trabajadores->setGeometry(QRect(110, 610, 201, 51));
        id_trabajadores->setFont(font);
        id_regresaroperaciones = new QPushButton(Registro_cliente);
        id_regresaroperaciones->setObjectName(QString::fromUtf8("id_regresaroperaciones"));
        id_regresaroperaciones->setGeometry(QRect(890, 20, 101, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        id_regresaroperaciones->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/regreso.png"), QSize(), QIcon::Normal, QIcon::Off);
        id_regresaroperaciones->setIcon(icon);

        retranslateUi(Registro_cliente);

        QMetaObject::connectSlotsByName(Registro_cliente);
    } // setupUi

    void retranslateUi(QWidget *Registro_cliente)
    {
        Registro_cliente->setWindowTitle(QCoreApplication::translate("Registro_cliente", "Form", nullptr));
        ventana_registroclientes->setText(QString());
        id_clientes->setText(QCoreApplication::translate("Registro_cliente", "Registro Cliente", nullptr));
        id_productos->setText(QCoreApplication::translate("Registro_cliente", "Registro de productos", nullptr));
        id_proveedores->setText(QCoreApplication::translate("Registro_cliente", "Registro de proveedores", nullptr));
        id_lineaproductos->setText(QCoreApplication::translate("Registro_cliente", "Linea de productos", nullptr));
        id_trabajadores->setText(QCoreApplication::translate("Registro_cliente", "Registro de trabajadores", nullptr));
        id_regresaroperaciones->setText(QCoreApplication::translate("Registro_cliente", "Regresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registro_cliente: public Ui_Registro_cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRO_CLIENTE_H
