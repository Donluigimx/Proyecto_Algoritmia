#ifndef VUELO_H
#define VUELO_H
#include <cstring>
#include <vector>
#include "Pasajero.h"
using namespace std;

class Vuelo
{
public:
    Vuelo();
    void setDestino(string p);
    string getDestino(void);
    void setOrigen(string p);
    string getOrigen(void);
    void setDistancia(int p);
    int getDistancia(void);
    void setSalida(string p);
    string getSalida(void);
    void setRegreso(string p);
    string getRegreso(void);
    void setCapacidad_pasajero(int p);
    int getCapacidad_pasajero(void);
    void setCapacidad_carga(int p);
    int getCapacidad_carga(void);
    void setAsientos_disponibles(int p);
    int getAsientos_disponibles(void);
    string getRuta(void);
    void setRuta(string p);

    vector <Pasajero> Pasajeros;
    bool operator == (const Vuelo &p) const;
    bool operator < (const Vuelo &p) const;
    bool operator > (const Vuelo &p) const;
private:
    char Destino[50];
    char Origen[50];
    int Distancia;
    char Salida[20];
    char Regreso[20];
    int Capacidad_pasajero;
    int Capacidad_carga;
    int Asientos_disponibles;
    char Ruta[300];
};

#endif // VUELO_H
