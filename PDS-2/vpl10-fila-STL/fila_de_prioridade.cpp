#include "fila_de_prioridade.h"

#include <list>
#include <string>
#include <vector>

using std::string;
using std::vector;

void FilaDePrioridade::Adicionar(Pessoa p) {
}

string FilaDePrioridade::RemoverMaiorPrioridade() {
  string nome;
  return nome;
}

void FilaDePrioridade::Remover(string nome) {
}

int FilaDePrioridade::tamanho(){
  return lista_.size();
}

vector<string> FilaDePrioridade::listar() {
  vector<string> v;
  for( Pessoa& p : lista_){
    v.emplace_back(p.nome);
  }
  return v; 
}