#include <iostream>
#include <random>
#include <thread>  // Fornece a função para pausar a execução
#include <chrono>  // Fornece as unidades de medida de tempo
int main() {
    // 1. O "sorteador de verdade" que lê o ruído do hardware
    std::random_device hardware_seed; 

    // 2. O motor super-rápido que é alimentado pela semente real
    std::mt19937 motor(hardware_seed()); 

    // 3. A regra do sorteio (ex: números inteiros entre 1 e 100)
    std::uniform_int_distribution<int> distribuicao(1, 100);

    for(int i=0; i<3; i++){
        if((distribuicao(hardware_seed)%2)!=0){
            std::cout <<"burrito, tacos e nachos"<< "\n";
        }else{
            std::cout <<"camarao internacional buxa"<< "\n";
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1500));
    }

    return 0;
}