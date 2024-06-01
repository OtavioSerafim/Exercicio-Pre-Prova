#ifndef GERENTE
#define GERENTE
#include <string>
#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario {
    private:
        double bonusAnual;
    public:
        Gerente(string nome, int id, double salariobase, double bonusAnual);
        double calcularSalarioTotal();
};

#endif