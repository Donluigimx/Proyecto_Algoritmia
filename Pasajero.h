#ifndef PASAJERO_H
#define PASAJERO_H
#include <iostream>
#include <cstring>
using namespace std;

class Pasajero
{
public:
    Pasajero();
    int getEdad() const;
    void setEdad(int paso);
    string getNombre();
    void setNombre(string paso);
    string getOrigen();
    void setOrigen(string paso);
    string getApellido();
    void setApellido(string paso);
    string getDestino();
    void setDestino(string paso);
    string getAsiento();
    void setAsiento(string paso);

private:
    char Nombre[50];
    char Apellido[50];
    int Edad;
    char Origen[30];
    char Destino[30];
    char Asiento[4];
};

#endif // PASAJERO_H
