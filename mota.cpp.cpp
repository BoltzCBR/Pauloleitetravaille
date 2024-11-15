#include "Mota.h"

Mota::Mota(string nome, string guindao) : Veiculo(nome), guindao(guindao) {}  // Construtor com inicialização

void Mota::mostrarDetalhes() {
    Veiculo::mostrarDetalhes();  // Chama mostrarDetalhes da classe base
    cout << "Tipo de guindao: " << guindao << endl;
}
