#include "nodoraiz.h"

template <typename T>
NodoRaiz<T>::NodoRaiz(NodoRaiz<T> *izq, NodoRaiz<T> *der)
{
    this->izquierda=izq;
    this->derecha=der;
}

template <typename T>
void NodoRaiz<T>::setDer(NodoRaiz<T> *nodo)
{
    this->derecha=nodo;
}

template <typename T>
void NodoRaiz<T>::setIzq(NodoRaiz<T> *nodo)
{
    this->izquierda=nodo;
}

template <typename T>
NodoRaiz<T>* NodoRaiz<T>::getDer()
{
    return this->derecha;
}

template <typename T>
NodoRaiz<T>* NodoRaiz<T>::getIzq()
{
    return this->izquierda;
}

template <typename T>
void NodoRaiz<T>::setDato(T p)
{
    this->dato=p;
}

template <typename T>
T NodoRaiz<T>::getDato()
{
    return this->dato;
}
