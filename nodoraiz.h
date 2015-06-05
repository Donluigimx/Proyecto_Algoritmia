#ifndef NODORAIZ_H
#define NODORAIZ_H

template<typename T>
class NodoRaiz
{
private:
    T dato;
    NodoRaiz* izquierda;
    NodoRaiz* derecha;
public:
    NodoRaiz(NodoRaiz* izq = NULL,NodoRaiz* der = NULL);
    void setIzq(NodoRaiz* nodo);
    void setDer(NodoRaiz* nodo);
    void setDato(T p);
    NodoRaiz* getIzq(void);
    NodoRaiz* getDer(void);
    T getDato(void);
};

#include "nodoraiz.tpp"
#endif // NODORAIZ_H
