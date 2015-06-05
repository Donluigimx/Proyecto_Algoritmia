#-------------------------------------------------
#
# Project created by QtCreator 2014-08-28T14:58:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Proyecto_Algoritmia
TEMPLATE = app


SOURCES += main.cpp\
    Pasajero.cpp \
    Vuelo.cpp \
    Aerolinea.cpp \
    MenuPrincipal.cpp \
    Reservar.cpp \
    Alta_vuelo.cpp \
    Buscar.cpp \
    Archivo.cpp \
    Ordenamiento.cpp \
    Pasajeros.cpp \
    arbol_binario.tpp \
    nodoraiz.tpp \
    ListaS.tpp \
    NodoS.tpp \
    Grafo.cpp

HEADERS  += \
    Pasajero.h \
    Vuelo.h \
    Aerolinea.h \
    MenuPrincipal.h \
    Reservar.h \
    Alta_vuelo.h \
    Buscar.h \
    Archivo.h \
    Ordenamiento.h \
    Pasajeros.h \
    arbol_binario.h \
    nodoraiz.h \
    Grafo.h \
    ListaS.h \
    NodoS.h

FORMS    += \
    MenuPrincipal.ui \
    Reservar.ui \
    Alta_vuelo.ui \
    Buscar.ui \
    pasajeros.ui

RESOURCES += \
    Imagenes.qrc
