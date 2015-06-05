#ifndef __NODOS_H__
#define __NODOS_H__

template<class T>
class NodoS
{
	private:
		NodoS<T> *siguiente;
		T dato;
	public:
		NodoS(T,NodoS<T>*);
		NodoS();
		void setSiguiente(NodoS<T>*);
		NodoS<T>* getSiguiente(void);
		void setDato(T);
		T getDato(void);
};

#include "NodoS.tpp"
#endif /* __NODOS_H__ */

