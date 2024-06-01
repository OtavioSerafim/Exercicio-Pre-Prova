#include "Estagiario.hpp"

Estagiario::Estagiario(string nome, int id, double salariobase)
    : salarioFixo(salariobase * 0.35) {
        this->nome = nome;
        this->id = id;
        this->salariobase = salariobase;
}

double Estagiario::calcularSalarioTotal() { 
    return salarioFixo; 
}