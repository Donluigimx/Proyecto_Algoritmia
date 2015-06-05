#ifndef BUSCAR_H
#define BUSCAR_H

#include <QWidget>
#include <vector>
#include "Vuelo.h"
#include "arbol_binario.h"
#include "nodoraiz.h"

namespace Ui {
class Buscar;
}

class Buscar : public QWidget
{
    Q_OBJECT

public:
    explicit Buscar(QWidget *parent = 0);
    ~Buscar();
    void Ligar(vector<Vuelo>* paso);
    void Mostrar(void);

    void Recargar();
    void Busqueda(NodoRaiz<Vuelo> *nodo);
    void BusquedaPasajero();

private slots:
    void on_Cd_origen_currentIndexChanged(int index);

    void on_Cd_destino_currentIndexChanged(int index);

    void on_TablaVuelos_cellClicked(int row, int column);

    void on_Nombre_textEdited(const QString &arg1);

    void on_EliminarVuelo_clicked();

    void on_Salida_dateChanged(const QDate &date);

    void on_Regreso_dateChanged(const QDate &date);

private:
    Ui::Buscar *ui;
    vector<Vuelo>* vuelos;
    Arbol_Binario<Vuelo> arbol;
};

#endif // BUSCAR_H
