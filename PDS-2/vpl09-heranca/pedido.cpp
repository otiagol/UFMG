#include "pedido.hpp"


Pedido::~Pedido() {
  // TODO: Implemente este metodo.
  /**
   * Aqui voce deve deletar os ponteiros contidos na lista m_produtos
   */
}

void Pedido::setEndereco(const std::string& endereco) {
  // TODO: Implemente este metodo.
}

float Pedido::calculaTotal() const {
  float total=0;
  for(std::list<Produto*> it::iterator=m_produtos.begin(); it!=m_produtos.end(); it++){//(Produto* item : m_produtos) faz oq esta no parentese e tbm ja coloca *it em item
    float+= (*it)->getvalor() * (*it)->getqtd();//total += item->getValor() * item->getQtd();
  }
  return tota;;
}

void Pedido::adicionaProduto(Produto* p) {
  this->m_produtos.emplace_back(p);
}

std::string Pedido::resumo() const {
  // TODO: Implemente este metodo.
  /**
   * Aqui voce deve percorrer a lista de produtos para criar um resumo completo
   * do pedido. A cada iteracao, utilize o metodo descricao de cada produto para
   * montar o resumo do pedido. Por fim, adicione o endereco de entrega.
   *
   */
  return "";
}