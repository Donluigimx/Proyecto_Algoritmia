#ifndef RESERVAR_H
#define RESERVAR_H

#include <QWidget>
#include <vector>
#include <QPushButton>
#include "Vuelo.h"
#include "Pasajeros.h"
#include "arbol_binario.h"
#include "nodoraiz.h"
#include "Grafo.h"

namespace Ui {
class Reservar;
}

class Reservar : public QWidget
{
    Q_OBJECT

public:
    explicit Reservar(QWidget *parent = 0);

    ~Reservar();

    void Ligar(vector<Vuelo>* paso, Pasajeros* ventanita);

    void Asiento_Seleccionado(QPushButton* lugar);

    void Recargar_Asientos(int at);

    void Busqueda(NodoRaiz<Vuelo>* nodo);

    NodoRaiz<Vuelo>* Buscador(NodoRaiz<Vuelo>* nodo);

    void Recargar();
private slots:

    void Recargars();

    void on_Vuelos_cellClicked(int row, int column);

    void on_Cd_origen_currentIndexChanged(int index);

    void on_Cd_destino_currentIndexChanged(int index);

    void on_Salida_dateChanged(const QDate &date);

    void on_Regreso_dateChanged(const QDate &date);

    void on_PSalida_clicked();

    void on_PAsientos_clicked();

    void on_A1_clicked();
    void on_A2_clicked();
    void on_A3_clicked();
    void on_A4_clicked();
    void on_A5_clicked();
    void on_A6_clicked();
    void on_B1_clicked();
    void on_B2_clicked();
    void on_B3_clicked();
    void on_B4_clicked();
    void on_B5_clicked();
    void on_B6_clicked();
    void on_C1_clicked();
    void on_C2_clicked();
    void on_C3_clicked();
    void on_C4_clicked();
    void on_C5_clicked();
    void on_C6_clicked();
    void on_E1_clicked();
    void on_E2_clicked();
    void on_E3_clicked();
    void on_E4_clicked();
    void on_E5_clicked();
    void on_E6_clicked();
    void on_F1_clicked();
    void on_F2_clicked();
    void on_F3_clicked();
    void on_F4_clicked();
    void on_F5_clicked();
    void on_F6_clicked();
    void on_G1_clicked();
    void on_G2_clicked();
    void on_G3_clicked();
    void on_G4_clicked();
    void on_G5_clicked();
    void on_G6_clicked();
    void on_D1_clicked();
    void on_D2_clicked();
    void on_D3_clicked();
    void on_D4_clicked();
    void on_D5_clicked();
    void on_D6_clicked();
    void on_H1_clicked();
    void on_H2_clicked();
    void on_H3_clicked();
    void on_H4_clicked();
    void on_H5_clicked();
    void on_H6_clicked();
    void on_I1_clicked();
    void on_I2_clicked();
    void on_I3_clicked();
    void on_I4_clicked();
    void on_I5_clicked();
    void on_I6_clicked();
    void on_J1_clicked();
    void on_J2_clicked();
    void on_J3_clicked();
    void on_J4_clicked();
    void on_J5_clicked();
    void on_J6_clicked();

    void on_BReservar_clicked();

    void on_BLimpiar_clicked();

    void on_Vuelos_cellDoubleClicked(int row, int column);

private:
    Ui::Reservar *ui;
    vector<Vuelo>* vuelos;
    QString asi;
    Arbol_Binario<Vuelo> arbol;
    vector<QPushButton*> botones;
    Pasajeros* ventanita;
};

#endif // RESERVAR_H



