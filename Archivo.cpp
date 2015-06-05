#include "Archivo.h"
#include "Vuelo.h"
#include "Pasajero.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#define FILE "Vuelos.reg"
#define delim '|'
using namespace std;

Archivo::Archivo()
{
}

void Archivo::Guardar(vector<Vuelo> *vuelos)
{
    ofstream Guardar(FILE);
    string filename;
    int tama;
    for(int i = 0; i < (int)vuelos->size(); i++)
    {
        Guardar << vuelos->at(i).getOrigen() << delim << vuelos->at(i).getDestino() << delim;
        Guardar << vuelos->at(i).getSalida() << delim << vuelos->at(i).getRegreso() << delim;
        Guardar << vuelos->at(i).getDistancia() << delim << vuelos->at(i).getAsientos_disponibles() << delim;
        Guardar << vuelos->at(i).getCapacidad_pasajero() << delim << vuelos->at(i).getCapacidad_carga() << delim;
        Guardar << vuelos->at(i).getRuta() << delim;
        tama = vuelos->at(i).Pasajeros.size();
        Guardar.write((char*)&tama,sizeof(int));
        for(int j = 0; j < tama; j++)
        {
            Pasajero buff;
            buff.setApellido(vuelos->at(i).Pasajeros.at(j).getApellido());
            buff.setAsiento(vuelos->at(i).Pasajeros.at(j).getAsiento());
            buff.setDestino(vuelos->at(i).Pasajeros.at(j).getDestino());
            buff.setEdad(vuelos->at(i).Pasajeros.at(j).getEdad());
            buff.setNombre(vuelos->at(i).Pasajeros.at(j).getNombre());
            buff.setOrigen(vuelos->at(i).Pasajeros.at(j).getOrigen());
            Guardar.write((char*)&buff,sizeof(Pasajero));
        }
    }
    Guardar.close();
}

void Archivo::Leer(vector<Vuelo> *vuelos)
{
    ifstream Leer(FILE);
    string aux;
    if(!Leer.good()) return;
    vuelos->clear();
    int tam;
    //int i = 0;
    while(1)
    {
        Vuelo vuelo;
        Pasajero pasajero;
        getline(Leer,aux,delim);
        if(Leer.eof()) break;
        vuelo.setOrigen(aux);
        getline(Leer,aux,delim);
        vuelo.setDestino(aux);
        getline(Leer,aux,delim);
        vuelo.setSalida(aux);
        getline(Leer,aux,delim);
        vuelo.setRegreso(aux);
        getline(Leer,aux,delim);
        vuelo.setDistancia(atoi(aux.c_str()));
        getline(Leer,aux,delim);
        vuelo.setAsientos_disponibles(atoi(aux.c_str()));
        getline(Leer,aux,delim);
        vuelo.setCapacidad_pasajero(atoi(aux.c_str()));
        getline(Leer,aux,delim);
        vuelo.setCapacidad_carga(atoi(aux.c_str()));
        getline(Leer,aux,delim);
        vuelo.setRuta(aux);
        Leer.read((char*)&tam,sizeof(int));
        for(int j = 0; j < tam ; j++)
        {
            Leer.read((char*)&pasajero,sizeof(Pasajero));
            vuelo.Pasajeros.insert(vuelo.Pasajeros.end(),pasajero);
        }
        vuelos->insert(vuelos->end(),vuelo);
    }
}
