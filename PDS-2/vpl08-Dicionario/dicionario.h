#pragma once

#include <string>

using std::string;


// Estrutura que representa um par chave/valor.
struct Elemento {
  string chave; // Identificar do elemento.
  string valor; // Valor associado ao elemento.
};

// Implementa um dicionário que mapeia uma chave (do tipo string)
// a um valor (também do tipo string).
// As chaves são únicas, e estão dispostas em qualquer ordem na lista. 
class Dicionario {
 public:
  // Cria um dicionário vazio.
  Dicionario();//

  // Retorna quantos pares chave/valor estão no dicionário.
  int tamanho();

  // Testa se uma chave pertence ao dicionário.
  bool pertence(string chave);

  // Retorna a *menor* chave do dicionário.
  // Precondição: o dicionário não está vazio.
  string menor();

  // Retorna o valor associado a chave.
  // Precondição: a chave *necessariamente* está no dicionário.
  string valor(string chave);

  // Insere um par chave/valor no dicionário.
  // Precondição: a chave *não* está no dicionário.
  void Inserir(string chave, string valor);

  // Remove um par chave/valor do dicionário.
  // Precondição: a chave *necessariamente* está no dicionário.
  void Remover(string chave);

  // Altera o valor associado a uma chave do dicionário.
  // Precondição: a chave *necessariamente* está no dicionário.
  void Alterar(string chave, string valor);

  // Libera toda a memória alocada para armazenar os dados no
  // dicionário.
  ~Dicionario();
 private:
  //da a posicao da string igual a s
  int achar(string s);
  // Redimensiona a lista de elementos para comportar m elementos.
  // Precondição: m >= tElementos_.
  void Redimensionar(int m);//
  
  // Lista de elementos, ou seja, lista de pares chave/valor.
  Elemento* elementos_;

  // Quantidade de elementos no dicionário.
  int tElementos_;
};