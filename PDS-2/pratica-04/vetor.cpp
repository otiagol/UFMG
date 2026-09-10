#include "vetor.h"

Vetor::Vetor(int inicio, int fim) {
    inicio_ = inicio;
    int tamanho = fim - inicio + 1;
    elementos_ = new std::string[tamanho];
}

void Vetor::atribuir(int i, std::string valor) {
    elementos_[i - inicio_]= valor;
}


std::string Vetor::valor(int i) {
    return elementos_[i - inicio_];
}

Vetor::~Vetor() {
    delete[] elementos_;
}

