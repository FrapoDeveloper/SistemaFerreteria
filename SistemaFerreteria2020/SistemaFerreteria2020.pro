QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cliente.cpp \
    comprayventa.cpp \
    ferreteria.cpp \
    lpersonas.cpp \
    lsedes.cpp \
    main.cpp \
    login.cpp \
    menu.cpp \
    operaciones.cpp \
    persona.cpp \
    registro_cliente.cpp \
    reportes.cpp \
    sede.cpp \
    trabajador.cpp

HEADERS += \
    cliente.h \
    comprayventa.h \
    ferreteria.h \
    login.h \
    lpersonas.h \
    lsedes.h \
    menu.h \
    operaciones.h \
    persona.h \
    registro_cliente.h \
    reportes.h \
    sede.h \
    trabajador.h

FORMS += \
    comprayventa.ui \
    login.ui \
    menu.ui \
    operaciones.ui \
    registro_cliente.ui \
    reportes.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ../Recursos/images.qrc

DISTFILES += \
    ../Recursos/design-menu.jpg
