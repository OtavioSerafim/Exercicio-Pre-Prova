#include <iostream>
#include <string>
#include "Estagiario.hpp"
#include "Gerente.hpp"
#include "FuncionarioRegular.hpp"

using namespace std;

int main() {
    double salarioBase = 1412;
    double bonus = salarioBase*0.1;
    Estagiario estagiario("Joao", 1, salarioBase);
    Gerente gerente("Maria", 2, salarioBase, bonus);
    FuncionarioRegular funcionarioRegular("Carlos", 3, salarioBase);

    cout << "Salario total do estagiario: " << estagiario.calcularSalarioTotal() << endl;
    cout << "Salario total do gerente: " << gerente.calcularSalarioTotal() << endl;
    cout << "Salario total do funcionario regular: " << funcionarioRegular.calcularSalarioTotal() << endl;

    return 0;
}