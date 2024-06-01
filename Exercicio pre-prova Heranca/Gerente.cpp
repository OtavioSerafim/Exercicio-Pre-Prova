#include "Gerente.hpp"

Gerente::Gerente(string nome, int id, double salariobase, double bonusAnual)
    : bonusAnual(bonusAnual) {
        this->nome = nome;
        this->id = id;
        this->salariobase = salariobase;
}

double Gerente::calcularSalarioTotal() { 
    return salariobase + bonusAnual/12; 
}