/********************************************************************************
** Form generated from reading UI file 'comprayventa.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPRAYVENTA_H
#define UI_COMPRAYVENTA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComprayVenta
{
public:
    QLabel *ventana_comprayventa;
    QPushButton *id_registroventas;
    QPushButton *id_busquedaventas;
    QPushButton *id_registrocompras;
    QPushButton *id_guiacompras;
    QPushButton *id_regresardecomprayventa;

    void setupUi(QWidget *ComprayVenta)
    {
        if (ComprayVenta->objectName().isEmpty())
            ComprayVenta->setObjectName(QString::fromUtf8("ComprayVenta"));
        ComprayVenta->resize(1024, 720);
        ventana_comprayventa = new QLabel(ComprayVenta);
        ventana_comprayventa->setObjectName(QString::fromUtf8("ventana_comprayventa"));
        ventana_comprayventa->setGeometry(QRect(0, -30, 1031, 811));
        ventana_comprayventa->setPixmap(QPixmap(QString::fromUtf8(":/comprayventadesign.jpg")));
        id_registroventas = new QPushButton(ComprayVenta);
        id_registroventas->setObjectName(QString::fromUtf8("id_registroventas"));
        id_registroventas->setGeometry(QRect(140, 110, 201, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        id_registroventas->setFont(font);
        id_registroventas->setAutoFillBackground(true);
        id_busquedaventas = new QPushButton(ComprayVenta);
        id_busquedaventas->setObjectName(QString::fromUtf8("id_busquedaventas"));
        id_busquedaventas->setGeometry(QRect(140, 250, 201, 51));
        id_busquedaventas->setFont(font);
        id_busquedaventas->setAutoFillBackground(true);
        id_registrocompras = new QPushButton(ComprayVenta);
        id_registrocompras->setObjectName(QString::fromUtf8("id_registrocompras"));
        id_registrocompras->setGeometry(QRect(140, 400, 201, 51));
        id_registrocompras->setFont(font);
        id_registrocompras->setAutoFillBackground(true);
        id_guiacompras = new QPushButton(ComprayVenta);
        id_guiacompras->setObjectName(QString::fromUtf8("id_guiacompras"));
        id_guiacompras->setGeometry(QRect(140, 540, 201, 51));
        id_guiacompras->setFont(font);
        id_guiacompras->setAutoFillBackground(true);
        id_regresardecomprayventa = new QPushButton(ComprayVenta);
        id_regresardecomprayventa->setObjectName(QString::fromUtf8("id_regresardecomprayventa"));
        id_regresardecomprayventa->setGeometry(QRect(890, 20, 101, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        id_regresardecomprayventa->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Recursos/regreso.png"), QSize(), QIcon::Normal, QIcon::Off);
        id_regresardecomprayventa->setIcon(icon);

        retranslateUi(ComprayVenta);

        QMetaObject::connectSlotsByName(ComprayVenta);
    } // setupUi

    void retranslateUi(QWidget *ComprayVenta)
    {
        ComprayVenta->setWindowTitle(QCoreApplication::translate("ComprayVenta", "Form", nullptr));
        ventana_comprayventa->setText(QString());
        id_registroventas->setText(QCoreApplication::translate("ComprayVenta", "Registro de venta", nullptr));
        id_busquedaventas->setText(QCoreApplication::translate("ComprayVenta", "Busqueda de venta", nullptr));
        id_registrocompras->setText(QCoreApplication::translate("ComprayVenta", "Registro de compras", nullptr));
        id_guiacompras->setText(QCoreApplication::translate("ComprayVenta", "Gu\303\255a de compras", nullptr));
        id_regresardecomprayventa->setText(QCoreApplication::translate("ComprayVenta", "Regresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComprayVenta: public Ui_ComprayVenta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPRAYVENTA_H
