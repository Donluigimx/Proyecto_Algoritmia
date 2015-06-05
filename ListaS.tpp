#include <iostream>
#include "ListaS.h"
#include "NodoS.h"
#include <stdexcept>


using namespace std;

template <class T>
ListaS<T>::ListaS()
{
	Inicializa();
}

template <class T>
ListaS<T>::~ListaS()
{
    //Anula();
}
template <class T>
void ListaS<T>::Inicializa(void)
{
   	ancla = NULL;
}

template <class T>
bool ListaS<T>::Vacia(void)
{
    return ancla==NULL;
}

template <class T>
bool ListaS<T>::Llena(void)
{
	return false;
}
template <class T>
void ListaS<T>::Inserta(NodoS<T>* pos,T dato)
{
	NodoS<T>* nodo;
    if(pos==NULL)
   	{
   		nodo=new NodoS<T>(dato,Primero());
   		ancla=nodo;
   	}
   	else
	{
	   	nodo=new NodoS<T>(dato,pos->getSiguiente());
	   	pos->setSiguiente(nodo);;
   	}
    //Ordena();
}

template <class T>
NodoS<T>* ListaS<T>::Ultimo()
{
    	NodoS<T> *aux;
    	aux=ancla;
    	if(aux==NULL)
    	{
    		return aux;
    	}
    	while(aux->getSiguiente()!=NULL)
    	{
		aux=aux->getSiguiente();
    	}
    	return aux;
}

template <class T>
NodoS<T>* ListaS<T>::Siguiente(NodoS<T>* pos)
{
    return pos->getSiguiente();
}

template <class T>
NodoS<T>* ListaS<T>::Anterior(NodoS<T>* pos)
{
    NodoS<T> *aux;
   	aux=ancla;
   	while(1)
   	{
   	    if(aux->getSiguiente()==pos)
        {
   	        return aux;
   	    }
    	aux=Siguiente(aux);
   	}
}

template <class T>
T ListaS<T>::Recupera(NodoS<T>* pos)
{
	return pos->getDato();
}

template <class T>
NodoS<T>* ListaS<T>::Primero(void)
{
	return ancla;
}

/*template <class T>
void ListaS<T>::Ordena(void)
{
    NodoS<T>* pos;
    int cont=0;
    pos=ancla;
    while(pos!=NULL)
    {
        pos=Siguiente(pos);
        cont++;
    }
    if (cont < 2) return;
    NodoS<T> **arr;
    NodoS<T> *aux;
    
    arr = new NodoS<T> * [cont];
    pos=ancla;
    cont = 0;
   	while (pos != NULL)
   	{
   		arr[cont]= pos;
   		pos=Siguiente(pos);
   		cont++;
   	}
   	QuickSort(arr,0,cont-1);
   	for(int i=0;i<=cont;i++)
   	{
   		if(i==0)
   		{
   			ancla=arr[i];
   			aux=ancla;
   		}
   		else if(i==cont)
   		{
   			aux->setSiguiente(NULL);
   		}
   		else
   		{
   			aux->setSiguiente(arr[i]);
   			aux=Siguiente(aux);
   		}
   	}
   	delete arr;
}

template <class T>
void ListaS<T>::QuickSort(NodoS<T> **arr,int inicio,int final)
{
	int der,izq;
	if(inicio<final)
		{
		NodoS<T> *comp,*aux;
		comp=arr[inicio];
		der=final;
		izq=inicio;
		while(izq<der)
		{
		    while(arr[der]->getDato() > comp->getDato())
		    {
		        der--;
		    }
		    while((izq<der)&&(arr[izq]->getDato() <= comp->getDato()))
		    {
		        izq++;
		    }
		    if(izq<der)
		    {
		        aux= arr[izq];
		        arr[izq]=arr[der];
		        arr[der]=aux;
		    }
		}
		aux=arr[der];
		arr[der]=arr[inicio];
		arr[inicio]=aux;
		QuickSort(arr,inicio,der-1);
    	QuickSort(arr,der+1,final);
    }
}*/

template <class T>
NodoS<T>* ListaS<T>::Localiza(T comp)
{
    /*NodoS<T>* pos;
    int cont=0;
    pos=ancla;
    while(pos!=NULL)
    {
        pos=Siguiente(pos);
        cont++;
    }
    if (cont < 2) return NULL;
    NodoS<T> **arr;
    NodoS<T> *aux;
    
    arr = new NodoS<T> * [cont];
    pos=ancla;
    cont = 0;
   	while (pos != NULL)
   	{
   		arr[cont]= pos;
   		pos=Siguiente(pos);
   		cont++;
   	}
   	aux=Binario(arr,comp,0,cont-1);
   	delete[] arr;
    return aux;*/
}

template <class T>
NodoS<T>* ListaS<T>::Binario(NodoS<T> **arr,T comp,int inicio,int fin)
{
	NodoS<T>* arre;	
	if(inicio<=fin)
	{
		int pos=(inicio+fin)/2;
		arre=arr[pos];
		if(comp>arre->getDato()) arre=Binario(arr,comp,pos+1,fin);
		else if(arre->getDato()>comp) arre=Binario(arr,comp,inicio,pos-1);
		return arre;
	}
	return NULL;
}

template <class T>
void ListaS<T>::Elimina(NodoS<T>* pos)
{
	if(Vacia()) throw range_error ("Lista vacia/Posicion invalida");
    if(pos==Primero())
    {
        ancla=pos->getSiguiente();
    }
    else
    {
        Anterior(pos)->setSiguiente(pos->getSiguiente());
    }
	delete pos;
}

template <class T>
void ListaS<T>::Anula()
{
	NodoS<T>* aux,*del=ancla;
	while(del!=NULL)
	{
		aux=del->getSiguiente();
		delete del;
		del=aux;
	}
	ancla=NULL;
}
