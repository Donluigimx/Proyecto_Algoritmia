#include <iostream>
#include <vector>
#include <queue>
#include <limits>
#include "Grafo.h"
#define INF std::numeric_limits<int>::max();

using namespace std;

struct cmp {
    bool operator() ( const Grafo::Arista &a , const Grafo::Arista &b ) {
        return a.peso > b.peso;
    }
};

Grafo::Grafo()
{
	grafo = NULL;
}

Grafo::Grafo(int tam)
{
	grafo = NULL;
	Inicializa(tam);
}

void Grafo::Inicializa(int t)
{
	if(grafo != NULL)
	{
		delete previo;
		delete grafo;
		delete distancia;
	}
	grafo = new vector<Arista>[t];
	previo = new int[t];
	distancia = new int[t];
	tam = t;
}

void Grafo::Adyacente(int s,int v, int p)
{
	if(s < tam && s >= 0)
		grafo[s].push_back(Grafo::Arista(v,p));
}

void Grafo::Dijkstra(int src)
{
	bool* visitado = new bool[tam];
	priority_queue < Grafo::Arista, vector<Grafo::Arista> ,cmp > cola;

	int actual, adyacente, peso;
	for (int i = 0; i < tam; i++)
	{
		previo[i] = -1;
		distancia[i] = INF;
		visitado[i] = false;
	}

	distancia[src] = 0;
	cola.push(Grafo::Arista(src,0));
	while(!cola.empty())
	{
		actual = cola.top().vertice;
		cola.pop();
		if(visitado[actual]) continue;
		visitado[actual] = true;

		for (int i = 0; i < grafo[actual].size(); i++)
		{
			adyacente = grafo[actual][i].vertice;
			peso = grafo[actual][i].peso;
			if( !visitado[adyacente] )
			{
				if(distancia[actual] + peso < distancia[adyacente])
				{
					previo[adyacente] = actual;
					distancia[adyacente] = distancia[actual] + peso;
					cola.push(Grafo::Arista(adyacente,distancia[adyacente]));
				}
			}
		}
	}
}

int* Grafo::getDistancia()
{
	return distancia;
}

int* Grafo::getPrevio()
{
	return previo;
}