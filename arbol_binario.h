#ifndef ARBOL_BINARIO_H
#define ARBOL_BINARIO_H
#include "nodoraiz.h"

template <typename T>
class Arbol_Binario
{
private:
    NodoRaiz<T>* raiz;
    bool Hoja(NodoRaiz<T>* p);
    int AlturaP(NodoRaiz<T>* p);
    NodoRaiz<T>* Padre(NodoRaiz<T>* padre, NodoRaiz<T>* hijo);
    NodoRaiz<T>* Mayor(NodoRaiz<T>* p);
    NodoRaiz<T>* Menor(NodoRaiz<T>* p);
    void AnulaP(NodoRaiz<T>* raiz);
    void AVL(NodoRaiz<T>* padre);
    void RotIzq(NodoRaiz<T>* p);
    void RotDer(NodoRaiz<T>* p);

public:
    int FactorEquilibrio(NodoRaiz<T>* p);
    Arbol_Binario();
    ~Arbol_Binario();
    NodoRaiz<T>* Raiz();
    void Inserta(T dato);
    void Inicializa();
    void Anula();
    bool Vacia();
    void Elimina(NodoRaiz<T>* p);
    T Recupera(NodoRaiz<T>* p);
    NodoRaiz<T>* Localiza(T p);
    int Altura();
};

#include "arbol_binario.tpp"
#endif // ARBOL_BINARIO_H
