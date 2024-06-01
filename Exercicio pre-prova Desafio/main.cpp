#include <iostream>
#include "grafo.hpp"

using namespace std;

int main() {
    Grafo g(10);
    g.conectarVertices(0, 1);
    g.conectarVertices(0, 2);
    g.conectarVertices(1, 3);
    g.conectarVertices(2, 4);
    g.conectarVertices(3, 4);
    g.conectarVertices(4, 5);
    g.conectarVertices(5, 6);
    g.conectarVertices(6, 7);
    g.conectarVertices(7, 8);
    g.conectarVertices(8, 9);
    g.conectarVertices(9, 0);
    g.imprimirMatrizAdjacencia();
    for(int i = 0; i < 10; i++)
        g.imprimirVerticesAdjacentes(i);
    g.saoAdjacentes(0, 1);
    g.saoAdjacentes(0, 9);
    g.saoAdjacentes(0, 3);
    return 0;
}