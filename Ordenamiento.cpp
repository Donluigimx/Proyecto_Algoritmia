#include "Ordenamiento.h"
#include "Vuelo.h"
#include <vector>
#include <iostream>
#include <QMessageBox>

void Ordenamiento::Merge_Salida(vector<Vuelo>* vuelos, int izq, int der) {
    if(izq <= der){

        int medio = (izq+der)/2;
        vector<Vuelo> aux;
        int i = izq;
        int j = medio+1;

        while(i <= medio && j <= der){
            if(vuelos->at(i).getSalida() <= vuelos->at(j).getSalida())
                aux.insert(aux.end(),vuelos->at(i++));
            else
                aux.insert(aux.end(),vuelos->at(j++));
        }

        while(i <= medio)
            aux.insert(aux.end(),vuelos->at(i++));

        while(j <= der)
            aux.insert(aux.end(),vuelos->at(j++));

        for(i = izq,j = 0; i <= der; i++,j++)
            vuelos->at(i) = aux.at(j);
    }
}

void Ordenamiento::Merge_Asientos(vector<Vuelo> *vuelos, int izq, int der)
{
    if(izq <= der){

        int medio = (izq+der)/2;
        vector<Vuelo> aux;
        int i = izq;
        int j = medio+1;

        while(i <= medio && j <= der){
            if(vuelos->at(i).getAsientos_disponibles() <= vuelos->at(j).getAsientos_disponibles())
                aux.insert(aux.end(),vuelos->at(i++));
            else
                aux.insert(aux.end(),vuelos->at(j++));
        }

        while(i <= medio)
            aux.insert(aux.end(),vuelos->at(i++));

        while(j <= der)
            aux.insert(aux.end(),vuelos->at(j++));

        for(i = izq,j = 0; i <= der; i++,j++)
            vuelos->at(i) = aux.at(j);
    }
}

void Ordenamiento::Merge_Sort_Salida(vector<Vuelo> *vuelos, int izq, int der) {
    if(izq < der){
        int medio = (izq+der)/2;
        cout << izq << " " << der << " " << medio << ".   ";
        Merge_Sort_Salida(vuelos,izq,medio);
        Merge_Sort_Salida(vuelos,medio+1,der);
        Merge_Salida(vuelos,izq,der);
    }
}

void Ordenamiento::Merge_Sort_Asientos(vector<Vuelo> *vuelos, int izq, int der)
{
    if(izq < der){
        int medio = (izq+der)/2;
        cout << izq << " " << der << " " << medio << ".   ";
        Merge_Sort_Asientos(vuelos,izq,medio);
        Merge_Sort_Asientos(vuelos,medio+1,der);
        Merge_Asientos(vuelos,izq,der);
    }
}

/*void Ordenamiento::MergeSort(int* arr,int inicio,int fin)
{
    if(inicio<fin)
    {
        int pivote=(inicio+fin)/2;
        MergeSort(arr,inicio,pivote);
        MergeSort(arr,pivote+1,fin);
        int aux[fin+1];
        int izq=inicio;
        int der=pivote+1;
        int pos=inicio;
        int auxi;
        while((izq<=pivote)&&(der<=fin))
        {
            if(arr[izq]<=arr[der])
            {
                aux[pos]=arr[izq];
                izq++;
            }
            else
            {
                aux[pos]=arr[der];
                der++;
            }
            pos++;
        }
        if (izq>pivote)
        {
            for ( auxi = der; auxi <= fin; auxi++)
            {
                aux[pos]=arr[auxi];
                pos++;
            }
        }
        else
        {
            for ( auxi = izq; auxi<= pivote; auxi++)
            {
                aux[pos]=arr[auxi];
                pos++;
            }
        }
        for (auxi = inicio; auxi <= fin; auxi++) arr[auxi]=aux[auxi];
    }
}*/

