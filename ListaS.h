#ifndef __LISTAS_H__
#define __LISTAS_H__
#include "NodoS.h"
#include <iostream>
using namespace std;
template <class T>
class ListaS
{
	private:
		NodoS<T> *ancla;
		void QuickSort(NodoS<T>**,int,int);
		NodoS<T>* Binario(NodoS<T>**,T,int,int);
	public:
		ListaS(void);
		void Inicializa(void);
		void Anula(void);
		NodoS<T>* Primero(void);
		NodoS<T>* Ultimo(void);
		NodoS<T>* Anterior(NodoS<T>*);
		NodoS<T>* Siguiente(NodoS<T>*);
		NodoS<T>* Localiza(T);
		T Recupera(NodoS<T>*);
		void Inserta(NodoS<T>*,T);
		void Elimina(NodoS<T>*);
		bool Vacia(void);
		bool Llena(void);
		void Ordena(void);
		~ListaS(void);
};

#include "ListaS.tpp"

#endif /* __LISTAS_H__ */

