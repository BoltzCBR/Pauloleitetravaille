#include "Car.h"

Carro::Carro(string nome, int portas) : Veiculo(nome), num_portas(portas) {}  // Construtor com inicialização

void Carro::mostrarDetalhes() {
    Veiculo::mostrarDetalhes();  // Chama mostrarDetalhes da classe base
    cout << "Número de portas: " << num_portas << endl;
}
