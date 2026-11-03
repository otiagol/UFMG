#include <iostream>
#include <list>     // Biblioteca obrigatória
#include <iterator> // Necessária para usar a função std::next()

// guarda o conteudo e do lado guarda o endereco do proximo conteudo
int main() {
    // entre <> esta o tipo da list 
    std::list<int> x(1, 4); // x -> 4 (um três)
    std::list<int> y{1, 2}; // y -> 1, 2 (um e dois)
    std::list<int> z;// z nasce vazia
    //begin e end devolvem um iterador
    //emplace melhor q insert
    z.insert(z.end(), y.begin(), y.end()); // insere em z (onde e para inserir, de onde copiar, ate onde copiar)
    z.insert(z.begin(), 0); // Insere o número 0 na primeira posição
    z.insert(z.end(), x.begin(), x.end());
    
    //como esta tudo espalhado na memoria n da pra achar o proximo normalmente, precisa de um iterador
    //iterator -> (ponteiro que sabe como navegar pelas regras ocultas da estrutura de dados especifica em que esta)
    //auto faz o c deduzir oq é para completar nesse caso foi std::list<int>::iterator q é o ponteiro inteligente
    auto it = std::next(z.begin(), 3);//next(partida, quantos "saltos" tem q dar) retorna o endereco de partida+saltos
    z.emplace(it, 3); // Insere o número 3 na posicao it(q seria a 3) e empurra o 4 para traz 
    
    z.emplace_back(5); // adiciona 5 no final da lista
    z.emplace_front(-1); //adiciona instantaneamente no inicio

    int n = z.size(); // quantos elementos a lista tem
    bool b= z.empty();//ve se esta vazia
    
    //so pode ler os extremos de forma direta
    int primeiro = z.front(); // lê o primeiro elemento
    int ultimo = z.back();    // lê o último elemento
    //o resto seria assim
    int c= *std::next(z.begin(), 3);

    z.erase(std::next(z.begin(), 3));//tira o 3 termo
    z.pop_front();//tira o primeiro termo
    z.clear(); // Limpa tudo
    //da pra passar normalmente para um vector incializando ele ou com insert

    z = {4, 1, 9, 2};
    z.sort(); // A lista reorganiza-se instantaneamente para: 1, 2, 4, 9
    return 0;
}