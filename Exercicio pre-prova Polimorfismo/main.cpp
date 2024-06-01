#include <iostream>
#include <vector>
#include "Caminhao.hpp"
#include "Van.hpp"

using namespace std;

int main() {
    vector<Veiculo*> veiculos;

    Caminhao caminhao("Scania", "R 500", 10, 4);
    Van van("Mercedes-Benz", "Sprinter", 5, 8);

    veiculos.push_back(&caminhao);
    veiculos.push_back(&van);

    for (Veiculo* veiculo : veiculos) {
        veiculo->exibirDados();
        cout << endl;
    }

    return 0;
}