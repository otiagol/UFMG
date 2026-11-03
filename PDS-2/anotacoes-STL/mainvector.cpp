#include <iostream>
#include <vector>
//array normal mas com funcoes ja implementadas
int main() {
    //entre <> esta o tipo do vector 
    std::vector<int> x(1, 3);// x -> 3(um trez)
    std::vector<int> y{1, 2};// y-> 1 2(1 e 2)
    std::vector<int> z;//z nasce vazio

    z.insert(z.end(), y.begin(), y.end());//insere em z(onde é para inserir, onde deve comecar a copiar, ate onde e pra copiar)
    z.insert(z.begin(), 0); // Insere o número 0 na primeira posição
    z.insert(z.end(), x.begin(), x.end());
    z.insert(z.begin() + 4, 1, 4);//soma 4 ao posicao zero(begin) e adiciona um quatro la o 1 n é nescessario, so quando tem mais de 1
    z.emplace_back(5);//adiciona 5 no final do vetor, mt melhor q push.back()

    int n= z.size();//quantos elementos o vetor tem
    int c= z.at(3);// =z[3] so q mais seguro

    z.clear(); // Limpa tudo
    return 0;
}