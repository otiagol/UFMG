#ifndef PRODUTO_H
#define PRODUTO_H

#include <iostream>
#include <string>
#include <sstream>

using std::stringstream;
using std::string;

/**
 * @brief Classe base responsavel pelo armazenamento e manipulacao das
 * informacoes basicas de um produto.
 */
class Produto {//A Classe Mãe (Superclasse / Classe Base)
 public:
  /**
   * @brief Retorna a quantidade de itens do produto
   *
   * @return int Quantidade de itens do produto
   */
  int getQtd() const;//const significa q aquela funcao n muda o valor da variavel

  /**
   * @brief Retorna o valor unitario do produto
   *
   * @return float Valor unitario do produto
   */
  float getValor() const;

  /**
   * @brief Retorna a descricao detalhada do produto
   *
   * @return std::string Descricao do produto
   */
  //o virtual diz ao C++ para ignorar o tipo da variável que fez a chamada (o ponteiro genérico) e usar o método da classe exata que foi instanciada na memória.
  virtual std::string descricao() const = 0;//todo produto tem uma descricao, mas as descricoes sao mt especificas para ter um codigo generico

  /**
   * @brief Destrutor da classe
   *
   */
  virtual ~Produto() = default;//como n tem new, n precisa de dar delete apenas um destrutor default

 protected://Como a classe mãe não possui um construtor para preencher as próprias variáveis, elas precisam ser marcadas como protected. Isso dá permissão para que as classes filhas acessem essas variáveis herdadas e atribuam os valores a elas diretamente dentro dos seus próprios construtores.
  /**
   * @brief Quantidade de itens do produto
   */
  int m_qtd{0};// as chaves sao mais rigidas q o igual, se tentassemos colocar um float dentro ele daria erro ao inves de cortar a o ponto

  /**
   * @brief Valor unitatio do produto
   */
  float m_valor_unitario{0};
};
#endif