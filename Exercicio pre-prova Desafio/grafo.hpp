#ifndef GRAFO
#define GRAFO_

#include <iostream>

class Grafo {
    private:
        int numVertices;
        int **matrizAdjacencia;
    public:
        Grafo(int numVertices);
        void conectarVertices(int v1, int v2);
        void saoAdjacentes(int v1, int v2);
        void imprimirMatrizAdjacencia();
        void imprimirVerticesAdjacentes(int v);
};

#endif 