#include "pedido.hpp"


Pedido::~Pedido() {
  for( Produto* ptr : m_produtos){
    delete ptr;
  }
}

void Pedido::setEndereco(const std::string& endereco) {//referncia ponteiros de baixo dos panos
  this->m_endereco = endereco;
}

float Pedido::calculaTotal() const {
  float total=0;
  //tem q colocar const, pq como iterator viaja na memoria ele podeia alterar o valor e como o valor n pode ser alterado o c exige q o const seja colocado para o iterator n conseguir mudar
  for(std::list<Produto*>::const_iterator it=m_produtos.begin(); it!=m_produtos.end(); it++){//(Produto* item : m_produtos) faz oq esta no parentese e tbm ja coloca *it em item
    total += (*it)->getValor() * (*it)->getQtd();//total += item->getValor() * item->getQtd();
  }
  return total;
}

void Pedido::adicionaProduto(Produto* p) {
  this->m_produtos.emplace_back(p);
}

std::string Pedido::resumo() const {
  string s= "";
  for(Produto* ptr : m_produtos){
    s += ptr->descricao();
  }
  s+= m_endereco;
  return s;
}