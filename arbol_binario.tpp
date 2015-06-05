#include <stdexcept>
#include <iostream>
#include "arbol_binario.h"

template <typename T>
Arbol_Binario<T>::Arbol_Binario()
{
    //cout << raiz << endl;
    Inicializa();
}

template <typename T>
Arbol_Binario<T>::~Arbol_Binario()
{
    Anula();
}

template <typename T>
void Arbol_Binario<T>::Inicializa()
{
    raiz = NULL;
}

template <typename T>
void Arbol_Binario<T>::Anula()
{
    AnulaP(raiz);
    raiz = NULL;
}

template <typename T>
void Arbol_Binario<T>::AnulaP(NodoRaiz<T> *raiz)
{
    if(raiz == NULL)
        return;
    if(raiz!=NULL)
    {
        if(Hoja(raiz)) delete raiz;
        else
        {
            AnulaP(raiz->getDer());
            AnulaP(raiz->getIzq());
            delete raiz;
        }
    }
}

template <typename T>
bool Arbol_Binario<T>::Vacia(void)
{
    return raiz==NULL;
}

template <typename T>
void Arbol_Binario<T>::Inserta(T dato)
{
    NodoRaiz<T>* nodo = new NodoRaiz<T>(NULL,NULL);
    nodo->setDato(dato);
    if(Vacia())
    {
        raiz = nodo;
        return;
    }
    NodoRaiz<T>* aux = raiz;
    while(1)
    {
        if(aux->getDato() == dato)
        {
            //Adaptación para Vuelos
            if(aux->getIzq()==NULL)
            {
                aux->setIzq(nodo);
                break;
            }
            aux=aux->getIzq();
        }
        if(aux->getDato() < dato)
        {
            if(aux->getDer()==NULL)
            {
                aux->setDer(nodo);
                break;
            }
            aux=aux->getDer();
        }
        else
        {
            if(aux->getIzq()==NULL)
            {
                aux->setIzq(nodo);
                break;
            }
            aux=aux->getIzq();
        }
    }
    AVL(aux);
}

template <typename T>
bool Arbol_Binario<T>::Hoja(NodoRaiz<T> *p)
{
    if(p->getIzq()==NULL && p->getDer()==NULL)
    {
        return true;
    }
    return false;
}

template <typename T>
NodoRaiz<T>* Arbol_Binario<T>::Padre(NodoRaiz<T> *padre, NodoRaiz<T> *hijo)
{
    if(padre==NULL || hijo==raiz) return NULL;
    if(padre->getDer()==hijo || padre->getIzq()==hijo) return padre;
    if(padre->getDato()>hijo->getDato()) return Padre(padre->getIzq(),hijo);
    else return Padre(padre->getDer(),hijo);
}

template <typename T>
NodoRaiz<T>* Arbol_Binario<T>::Mayor(NodoRaiz<T> *p)
{
    if(p==NULL) return NULL;
    for(p; p->getDer()!=NULL; p = p->getDer());
    return p;
}

template <typename T>
NodoRaiz<T>* Arbol_Binario<T>::Menor(NodoRaiz<T> *p)
{
    if(p==NULL) return NULL;
    for(p; p->getIzq()!=NULL; p = p->getIzq());
    return p;
}

template <typename T>
void Arbol_Binario<T>::Elimina(NodoRaiz<T> *p)
{
    if(p==NULL) throw std::invalid_argument("Dirección invalida");
    if(p==raiz && Hoja(p))
    {
        raiz ==NULL;
        delete p;
    }
    NodoRaiz<T> *aux;
    if(Hoja(p))
    {
        aux= Padre(raiz,p);
        if(aux->getIzq()==p) aux->setIzq(NULL);
        else aux->setDer(NULL);
        delete p;
    }
    else
    {
        if(p->getDer()!=NULL)
        {
            aux = Menor(p->getDer());
            p->setDato(aux->getDato());
            Elimina(aux);
        }
        else
        {
            aux = Mayor(p->getIzq());
            p->setDato(aux->getDato());
            Elimina(aux);
        }
    }
}

template <typename T>
int Arbol_Binario<T>::Altura()
{
    return AlturaP(raiz);
}

template <typename T>
int Arbol_Binario<T>::AlturaP(NodoRaiz<T> *p)
{
    if(p==NULL) return 0;
    int izq,der;
    izq = AlturaP(p->getIzq());
    der = AlturaP(p->getDer());
    if(izq>der) return izq+1;
    else return der+1;
}

template <typename T>
NodoRaiz<T>* Arbol_Binario<T>::Raiz()
{
    return raiz;
}

template <typename T>
NodoRaiz<T>* Arbol_Binario<T>::Localiza(T p)
{
    for(NodoRaiz<T>* comp=raiz;comp!=NULL;)
    {
        if(comp->getDato()==p) return comp;
        else if(comp->getDato()<p) comp = comp->getDer();
        else comp = comp->getIzq();
    }
    return NULL;
}

template <typename T>
T Arbol_Binario<T>::Recupera(NodoRaiz<T> *p)
{
    if(p==NULL) throw std::invalid_argument("Dirección invalida");
    return p->getDato();
}

template <typename T>
int Arbol_Binario<T>::FactorEquilibrio(NodoRaiz<T> *p)
{
    if(p==NULL) return 0;
    else return (AlturaP(p->getDer()) - AlturaP(p->getIzq()));
}

template <typename T>
void Arbol_Binario<T>::AVL(NodoRaiz<T> *padre)
{
    if(padre==NULL) return;
    int izq,der,fe;
    izq = FactorEquilibrio(padre->getIzq());
    //std::cout << izq << std::endl;
    der = FactorEquilibrio(padre->getDer());
   // std::cout << der << std::endl;
    fe = FactorEquilibrio(padre);
    //std::cout << fe << std::endl;
    if(fe==2)
    {
        if(der>=0) RotIzq(padre);
        else
        {
            RotDer(padre->getDer());
            RotIzq(padre);
        }
    }
    else if(fe==-2)
    {
        if(izq<=0) RotDer(padre);
        else
        {
            RotIzq(padre->getIzq());
            RotDer(padre);
        }
    }
    else
    {
        //std::cout << 'a' << std::endl;
        AVL(Padre(raiz,padre));
    }
}

template <typename T>
void Arbol_Binario<T>::RotDer(NodoRaiz<T> *p)
{
    NodoRaiz<T>* padre,*izq,*der;
    padre = Padre(raiz,p);
    izq = p->getIzq();
    der = izq->getDer();
    if(padre==NULL)
    {
        izq->setDer(p);
        p->setIzq(der);
        raiz = izq;
    }
    else
    {
        if(padre->getIzq()==p) padre->setIzq(izq);
        else padre->setDer(izq);
        izq->setDer(p);
        p->setIzq(der);
    }
}

template <typename T>
void Arbol_Binario<T>::RotIzq(NodoRaiz<T> *p)
{
    NodoRaiz<T>* padre,*der,*izq;
    padre = Padre(raiz,p);
    der = p->getDer();
    izq = der->getIzq();
    if(padre==NULL)
    {
        der->setIzq(p);
        p->setDer(izq);
        raiz = der;
    }
    else
    {
        if(padre->getIzq()==p) padre->setIzq(der);
        else padre->setDer(der);
        der->setIzq(p);
        p->setDer(izq);
    }
}
