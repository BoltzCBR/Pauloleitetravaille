#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
#include <string>
using namespace std;

class Veiculo {
protected:
    string nome;  // Nome do veículo

public:
    Veiculo(string nome);  // Construtor
    virtual void mostrarDetalhes();  // Método virtual para exibir detalhes
};

#endif
