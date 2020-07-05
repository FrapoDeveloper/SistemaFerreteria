/********************************************************************************
** Form generated from reading UI file 'operaciones.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERACIONES_H
#define UI_OPERACIONES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Operaciones
{
public:
    QLabel *ventana_operaciones;
    QPushButton *id_clientes;
    QPushButton *id_productos;
    QPushButton *id_proveedores;
    QPushButton *id_lineaproductos;
    QPushButton *id_trabajadores;
    QPushButton *id_regresarmenu;

    void setupUi(QWidget *Operaciones)
    {
        if (Operaciones->objectName().isEmpty())
            Operaciones->setObjectName(QString::fromUtf8("Operaciones"));
        Operaciones->resize(1024, 721);
        ventana_operaciones = new QLabel(Operaciones);
        ventana_operaciones->setObjectName(QString::fromUtf8("ventana_operaciones"));
        ventana_operaciones->setGeometry(QRect(0, 0, 1121, 731));
        ventana_operaciones->setPixmap(QPixmap(QString::fromUtf8(":/operaciones-design.jpg")));
        id_clientes = new QPushButton(Operaciones);
        id_clientes->setObjectName(QString::fromUtf8("id_clientes"));
        id_clientes->setGeometry(QRect(110, 50, 201, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        id_clientes->setFont(font);
        id_productos = new QPushButton(Operaciones);
        id_productos->setObjectName(QString::fromUtf8("id_productos"));
        id_productos->setGeometry(QRect(110, 180, 201, 51));
        id_productos->setFont(font);
        id_proveedores = new QPushButton(Operaciones);
        id_proveedores->setObjectName(QString::fromUtf8("id_proveedores"));
        id_proveedores->setGeometry(QRect(110, 330, 201, 51));
        id_proveedores->setFont(font);
        id_lineaproductos = new QPushButton(Operaciones);
        id_lineaproductos->setObjectName(QString::fromUtf8("id_lineaproductos"));
        id_lineaproductos->setGeometry(QRect(110, 470, 201, 51));
        id_lineaproductos->setFont(font);
        id_trabajadores = new QPushButton(Operaciones);
        id_trabajadores->setObjectName(QString::fromUtf8("id_trabajadores"));
        id_trabajadores->setGeometry(QRect(110, 600, 201, 51));
        id_trabajadores->setMinimumSize(QSize(201, 51));
        id_trabajadores->setFont(font);
        id_regresarmenu = new QPushButton(Operaciones);
        id_regresarmenu->setObjectName(QString::fromUtf8("id_regresarmenu"));
        id_regresarmenu->setGeometry(QRect(890, 20, 101, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        id_regresarmenu->setFont(font1);
        id_regresarmenu->setAutoFillBackground(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/regreso.png"), QSize(), QIcon::Normal, QIcon::Off);
        id_regresarmenu->setIcon(icon);

        retranslateUi(Operaciones);

        QMetaObject::connectSlotsByName(Operaciones);
    } // setupUi

    void retranslateUi(QWidget *Operaciones)
    {
        Operaciones->setWindowTitle(QCoreApplication::translate("Operaciones", "Form", nullptr));
        ventana_operaciones->setText(QString());
        id_clientes->setText(QCoreApplication::translate("Operaciones", "Clientes", nullptr));
        id_productos->setText(QCoreApplication::translate("Operaciones", "Productos", nullptr));
        id_proveedores->setText(QCoreApplication::translate("Operaciones", "Proveedores", nullptr));
        id_lineaproductos->setText(QCoreApplication::translate("Operaciones", "Linea de productos", nullptr));
        id_trabajadores->setText(QCoreApplication::translate("Operaciones", "Trabajadores", nullptr));
        id_regresarmenu->setText(QCoreApplication::translate("Operaciones", "Regresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Operaciones: public Ui_Operaciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERACIONES_H
