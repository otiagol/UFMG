#include <iostream>
#include "vetor.hpp"
//quando usa apenas o std vc chama todas as funcoes do std(standard q sao as funcoes padrao)
using std::cin;//quando faz assim pega apenas as funcoes especificas do std q vc chamou
using std::cout;// os ::(Operador de Resolução de Escopo) da o caminho ate a funcao convocada
using std::endl;
using std::string;

int main() {
  int inicio, fim;
  cin >> inicio >> fim;
  Vetor v(inicio, fim);
  char opcao;
  while (cin >> opcao) {
    int indice;
    string valor;
    if (opcao == 'a') {
      cin >> indice;
      cin >> valor;
      v.atribuir(indice, valor);
    } else if (opcao == 'v') {
      cin >> indice;
      valor = v.valor(indice);
      cout << valor << endl;
    } else if (opcao == 'f') {
      return 0;
    } else {
      cout << "Opção inválida!" << endl;
    }
  }
  return 0;
}