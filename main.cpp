#include "Car.h"
#include "Mota.h"
#include <iostream>
using namespace std;

int main() {
    Carro meuCarro("Barbie car", 4);  // Cria objeto carro
    Mota minhaMoto("Barbie", "Tunada");  // Cria objeto mota

    meuCarro.mostrarDetalhes();  // Exibe detalhes do carro
    minhaMoto.mostrarDetalhes();  // Exibe detalhes da mota

    return 0;
}
