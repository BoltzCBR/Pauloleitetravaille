#include "veiculo.h"

Veiculo::Veiculo(string nome) : nome(nome) {}  // Construtor inicializando 'nome'

void Veiculo::mostrarDetalhes() {
    cout << "Nome do Veículo: " << nome << endl;
}
