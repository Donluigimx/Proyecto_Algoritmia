#include "Pasajero.h"
#include <cstring>
#include <cstdio>
#include <iostream>
#include <stdexcept>
using namespace std;

Pasajero::Pasajero()
{
}

int Pasajero::getEdad() const
{
    return Edad;
}

void Pasajero::setEdad(int paso)
{
    Edad = paso;
}

string Pasajero::getNombre()
{
    string aux(Nombre);
    return aux;
}

void Pasajero::setNombre(string paso)
{
    if(paso.size()<50)sprintf(Nombre,"%.50s",paso.c_str());
    else throw length_error("Cadena de más de 50 caracteres");
}

string Pasajero::getApellido()
{
    string aux(Apellido);
    return aux;
}

string Pasajero::getAsiento()
{
    string aux(Asiento);
    return aux;
}

string Pasajero::getDestino()
{
    string aux(Destino);
    return aux;
}

string Pasajero::getOrigen()
{
    string aux(Origen);
    return aux;
}

void Pasajero::setApellido(string paso)
{
    if(paso.size()<50)sprintf(Apellido,"%.50s",paso.c_str());
    else throw length_error("Cadena de más de 50 caracteres");
}

void Pasajero::setAsiento(string paso)
{
    if(paso.size()<4)sprintf(Asiento,"%.4s",paso.c_str());
    else throw length_error("Cadena de más de 4 caracteres");
}

void Pasajero::setDestino(string paso)
{
    if(paso.size()<50)sprintf(Destino,"%.50s",paso.c_str());
    else throw length_error("Cadena de más de 50 caracteres");
}

void Pasajero::setOrigen(string paso)
{
    if(paso.size()<50)sprintf(Origen,"%.50s",paso.c_str());
    else throw length_error("Cadena de más de 50 caracteres");
}
