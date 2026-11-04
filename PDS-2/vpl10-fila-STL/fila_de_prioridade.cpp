#include "fila_de_prioridade.h"

#include <list>
#include <string>
#include <vector>

using std::string;
using std::vector;

void FilaDePrioridade::Adicionar(Pessoa p) {
  for(std::list<Pessoa>::iterator ptr = lista_.begin(); ptr!=lista_.end(); ptr++){
    if(p.prioridade<ptr->prioridade){
      lista_.emplace(ptr, p);
      return;
    }
  }
  lista_.emplace_back(p);
}

string FilaDePrioridade::RemoverMaiorPrioridade() {
  if(lista_.empty()==0)return "";
  string nome=lista_.front().nome;
  this->Remover(lista_.front().nome);
  return nome;
}

void FilaDePrioridade::Remover(string nome){
  for(auto iptr = lista_.begin(); iptr!=lista_.end(); iptr++){
    if(iptr->nome==nome){
      lista_.erase(iptr);
      break;
    }
  }
}

int FilaDePrioridade::tamanho(){
  return lista_.size();
}

vector<string> FilaDePrioridade::listar() {
  vector<string> v;
  for( Pessoa& p : lista_){//o & age como uma ponte conectando o lista_ diratemente com v, sem ser nescessario copiar lista_ em p pra dps em v
    v.emplace_back(p.nome);
  }
  return v; 
}