#include "grafo.hpp"
#include <iostream>

using namespace std;

Grafo::Grafo(int numVertices) {
    this->numVertices = numVertices;
    matrizAdjacencia = new int*[numVertices];
    for(int i = 0; i < numVertices; i++) {
        matrizAdjacencia[i] = new int[numVertices];
        for(int j = 0; j < numVertices; j++)
            matrizAdjacencia[i][j] = 0;
    }
}

void Grafo::conectarVertices(int v1, int v2) {
    matrizAdjacencia[v1][v2] = 1;
    matrizAdjacencia[v2][v1] = 1;
}

void Grafo::saoAdjacentes(int v1, int v2) {
    if(matrizAdjacencia[v1][v2] == 1)
        cout << "Os vértices " << v1 << " e " << v2 << " são adjacentes." << endl;
    else
        cout << "Os vértices " << v1 << " e " << v2 << " não são adjacentes." << endl;
}

void Grafo::imprimirMatrizAdjacencia() {
    for(int i = 0; i < numVertices; i++) {
        for(int j = 0; j < numVertices; j++)
            cout << matrizAdjacencia[i][j] << " ";
        cout << endl;
    }
}

void Grafo::imprimirVerticesAdjacentes(int v) {
    cout << "Os vértices adjacentes ao vértice " << v << " são: ";
    for(int i = 0; i < numVertices; i++)
        if(matrizAdjacencia[v][i] == 1)
            cout << i << " ";
    cout << endl;
}