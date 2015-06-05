#include "Vuelo.h"
#include <cstring>
#include <iostream>
#include <stdexcept>
#include <cstdio>
using namespace std;

Vuelo::Vuelo()
{
}

void Vuelo::setAsientos_disponibles(int p)
{
    this->Asientos_disponibles = p;
}
bool Vuelo::operator == (const Vuelo &p) const{
    return this->Origen == p.Origen;
}

bool Vuelo::operator < (const Vuelo &p) const{
    return this->Origen < p.Origen;
}

bool Vuelo::operator > (const Vuelo &p) const{
    return this->Origen > p.Origen;
}

int Vuelo::getAsientos_disponibles(void)
{
    return this->Asientos_disponibles;
}

void Vuelo::setCapacidad_carga(int p)
{
    this->Capacidad_carga = p;
}

int Vuelo::getCapacidad_carga(void)
{
    return this->Capacidad_carga;
}

void Vuelo::setCapacidad_pasajero(int p)
{
    this->Capacidad_pasajero = p;
}

int Vuelo::getCapacidad_pasajero(void)
{
    return this->Capacidad_pasajero;
}

void Vuelo::setDestino(string p)
{
    if(p.size()<50)sprintf(Destino,"%.50s",p.c_str());
    else throw length_error("Cadena de más de 50 caracteres");
}

string Vuelo::getDestino(void)
{
    string aux(Destino);
    return aux;
}

void Vuelo::setDistancia(int p)
{
    this->Distancia = p;
}

int Vuelo::getDistancia(void)
{
    return this->Distancia;
}

void Vuelo::setOrigen(string p)
{
    if(p.size()<50)sprintf(Origen,"%.50s",p.c_str());
    else throw length_error("Cadena de más de 50 caracteres");
}

string Vuelo::getOrigen(void)
{
    string aux(Origen);
    return aux;
}

void Vuelo::setRegreso(string p)
{
    if(p.size()<50)sprintf(Regreso,"%.20s",p.c_str());
    else throw length_error("Cadena de más de 50 caracteres");
}

string Vuelo::getRegreso(void)
{
    string aux(Regreso);
    return aux;
}

string Vuelo::getSalida()
{
    string aux(Salida);
    return aux;
}

void Vuelo::setSalida(string p)
{
    if(p.size()<20)sprintf(Salida,"%.20s",p.c_str());
    else throw length_error("Cadena de más de 20 caracteres");
}

void Vuelo::setRuta(string p)
{
    if(p.size()<300)sprintf(Ruta,"%.300s",p.c_str());
    else throw length_error("Cadena de más de 300 caracteres");
}

string Vuelo::getRuta()
{
    string aux(Ruta);
    return aux;
}
