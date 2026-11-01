#include "pizza.hpp"

std::string Pizza::descricao() const {
  stringstream ss;
  ss << this->m_qtd << "X Pizza " << this->_sabor << ", " << this->_pedacos << "pedacos e";
  if(!_borda_recheada) ss<< " sem";
  ss<< " borda recheada";
  return ss.str();
}

Pizza::Pizza(const std::string& sabor, int pedacos, bool borda_recheada, int qtd, float valor_unitario) {
  this->_sabor= sabor;
  this->_pedacos= pedacos;
  this->_borda_recheada= borda_recheada;
  this->m_qtd= qtd;
  this->m_valor_unitario= valor_unitario;
}