#pragma once//faz c q o compilador n copie o codigo desse arquivo se ja foi copiado uma vez

#include <vector>

// Implementa o Jogo da Vida de John Conway.
// https://pt.wikipedia.org/wiki/Jogo_da_vida
class JogoDaVida {
 public:
  // Aloca memória para uma matriz com l linhas e c colunas.
  // Todas as células são inicializadas como mortas.
  JogoDaVida(int l, int c);//

  // Retorna o número de linhas da matriz.
  int linhas() {return nLinhas;}

  // Retorna o número de colunas da matriz.
  int colunas() {return nColunas;}

  // Retorna o estado da célula [i, j].
  // Pré-condição: 0 <= i < #linhas e 0 <= j < #colunas
  bool viva(int i, int j);//

  // Alteram o estado célula [i, j].
  // Pré-condição: 0 <= i < #linhas e 0 <= j < #colunas
  void Matar(int i, int j);//
  void Reviver(int i, int j);//

  // Executa a próxima iteração do jogo da vida.
  // Ou seja, altera os estado da matriz,
  // de forma que ela fique igual ao da próxima iteração.
  void ExecutarProximaIteracao();

  // Desaloca a memória reservada para todas as linhas da matriz.
  ~JogoDaVida();//
 private:
   // Conta o número de vizinhas vivas da célula [x, y].
  int NumeroDeVizinhasVivas(int x, int y);//

  // Número de linhas na matriz.
  int nLinhas;

  // Número de colunas na matriz.
  int nColunas;
  
  // Matriz, alocada dinamicamente, que armazena o estado das células.
   bool** vivas_;  
};