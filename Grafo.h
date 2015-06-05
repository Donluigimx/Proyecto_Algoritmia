#ifndef GRAFO_H
#define GRAFO_H

#include <vector>
#include <queue>

using namespace std;

class Grafo
{
public:
    Grafo();
    Grafo(int);
    void Adyacente(int,int,int);
    void Inicializa(int);
    int* getDistancia();
    int* getPrevio();
    void Dijkstra(int);

    class Arista
    {
    public:
        int vertice;
        int peso;
        Arista(int v,int p)
        : vertice(v), peso(p) { }
    };

private:
    int tam;
    vector<Arista>* grafo;
    int* distancia;
    int* previo;
};

#endif // GRAFO_H
