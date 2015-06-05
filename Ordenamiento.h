#ifndef ORDENAMIENTO_H
#define ORDENAMIENTO_H
#include "Vuelo.h"
#include <vector>
#include <iostream>

using namespace std;

class Ordenamiento
{
private:

    void Merge_Salida(vector<Vuelo> *vuelos, int izq, int der);
    void Merge_Asientos(vector<Vuelo> *vuelos, int izq, int der);

public:

    void Merge_Sort_Salida(vector<Vuelo>* vuelos, int izq,int der);
    void Merge_Sort_Asientos(vector<Vuelo>* vuelos, int izq,int der);
};

#endif // ORDENAMIENTO_H
