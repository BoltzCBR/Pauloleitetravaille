#ifndef CAR_H
#define CAR_H

#include "veiculo.h"

class Carro : public Veiculo {
private:
    int num_portas;

public:
    Carro(string nome, int portas);  // Construtor
    void mostrarDetalhes() override;  // Sobrescreve método da classe base
};

#endif
