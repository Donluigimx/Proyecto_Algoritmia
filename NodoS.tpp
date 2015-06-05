#include <iostream>
#include "NodoS.h"

template <class T>
NodoS<T>::NodoS(T d,NodoS<T>* pos)
{
	dato=d;
    siguiente=pos;
}

template <class T>
NodoS<T>::NodoS()
{
    siguiente=NULL;
}
template <class T>
void NodoS<T>::setSiguiente(NodoS<T> *d)
{
    this->siguiente=d;
}

template <class T>
NodoS<T>* NodoS<T>::getSiguiente(void)
{
    return siguiente;
}

template <class T>
void NodoS<T>::setDato(T d)
{
    dato=d;
}

template <class T>
T NodoS<T>::getDato(void)
{
    return dato;
}
