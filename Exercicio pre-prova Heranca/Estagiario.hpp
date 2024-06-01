#ifndef ESTAGIARIO
#define ESTAGIARIO
#include <string>
#include "Funcionario.hpp"

using namespace std;

class Estagiario : public Funcionario {
    private:
        double salarioFixo;
    public:
        Estagiario(string nome, int id, double salariobase);
        double calcularSalarioTotal();
};
#endif