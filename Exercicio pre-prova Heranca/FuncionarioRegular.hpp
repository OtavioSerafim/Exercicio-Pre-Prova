#ifndef FUNCIONARIOREGULAR
#define FUNCIONARIOREGULAR
#include <string>
#include "Funcionario.hpp"

using namespace std;

class FuncionarioRegular : public Funcionario {
    public:
        FuncionarioRegular(string nome, int id, double salariobase);
        double calcularSalarioTotal();
};

#endif