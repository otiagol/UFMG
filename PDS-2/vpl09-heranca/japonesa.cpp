#include "japonesa.hpp"

std::string Japonesa::descricao() const {
  // TODO: Implemente este metodo.
  /*
   * Note que aqui voce deve retornar uma descricao detalhada da comida
   * japonesa.
   *
   * Exemplos:
   * 1X Comida japonesa - Combo 1, 4 sushis, 5 temakis e 6 hots.
   * 1X Comida japonesa - Combo 2, 5 sushis, 6 temakis e 8 hots.
   */
  stringstream ss;
  ss<< this->m_qtd << "X Comida japonesa - Combo " << _combinado << ", " << _sushis << " sushis, " << _temakis << " temakis e " << _hots << " hots.";
  return ss.str();
}

Japonesa::Japonesa(const std::string& combinado, int sushis, int temakis, int hots, int qtd, float valor_unitario){
  _combinado = combinado;
  _sushis = sushis;
  _temakis = temakis;
  _hots = hots;
  m_qtd = qtd;
  m_valor_unitario = valor_unitario;
}