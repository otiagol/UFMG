#include "venda.hpp"

#include <iomanip>

Venda::~Venda() {
  // TODO: Implemente este metodo
  /**
   * Aqui voce deve deletar os ponteiros contidos na lista m_pedidos
   */
}

void Venda::adicionaPedido(Pedido* p) {
  m_pedidos.emplace_back(p);
}

void Venda::imprimeRelatorio() const {
  int qv=0;
  float v=0;
  for(Pedido* iptr : m_pedidos){
    std::cout << iptr->resumo()<< v << std::endl;
    qv+= iptr->calculaTotal();
    v++;
  }
  std::cout<< qv << " "<< v;
}