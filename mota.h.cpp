#ifndef MOTA_H
#define MOTA_H

#include "veiculo.h"

class Mota : public Veiculo {
private:
    string guindao;  // Cilindrada da mota

public:
    Mota(string nome, string guindao);  // Construtor
    void mostrarDetalhes() override;  // Sobrescreve método da classe base
};

#endif
