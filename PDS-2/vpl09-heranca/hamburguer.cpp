#include "hamburguer.hpp"

std::string Hamburguer::descricao() const {
  stringstream ss;
  ss << this->_qtd << "X Hamburguer " << this->_tipo;
  if(_atersanal){ss<< " artesanal";}else{ ss<< " simples";}
  return ss.str();
}

Hamburguer::Hamburguer(const std::string& tipo, bool artesanal, int qtd, float valor_unitario) {
  this->_tipo = tipo;
  this-> _atersanal = artesanal;
  this-> _qtd = qtd;
  this-> _valor_unitario = valor_unitario;
}