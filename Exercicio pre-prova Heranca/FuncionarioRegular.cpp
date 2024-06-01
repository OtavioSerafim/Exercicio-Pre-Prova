#include "FuncionarioRegular.hpp"

FuncionarioRegular::FuncionarioRegular(string nome, int id, double salariobase)
{
    this->nome = nome;
    this->id = id;
    this->salariobase = salariobase;
}

double FuncionarioRegular::calcularSalarioTotal() { 
    return salariobase; 
}