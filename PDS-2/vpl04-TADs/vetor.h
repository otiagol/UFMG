//Include Guard (Guarda de Inclusao)
#ifndef VETOR_H_//Pergunta ao sistema: "A senha VETOR_H_ já foi registrada alguma vez?"
#define VETOR_H_//Se a resposta for NÃO: ele entra aqui e registra a senha VETOR_H_ agora.
#include <string>
using namespace std;
//cardapio
// Define um vetor de std::string cujos índices variam em
// qualquer intervalo, inclusive negativos.
class Vetor { 
 private:    
  // Primeiro índice válido do vetor.
  int inicio_;
    
  // Elementos do vetor.
  std::string* elementos_;  
    
  // Cria um vetor cujos índices variam de 'inicio' até 'fim'.
  // PRECONDIÇÃO: fim >= inicio.
  Vetor(int inicio, int fim);

  // Altera o valor do índice i.
  // PRECONDIÇÃO: i está dentro do intervalo de índices do vetor.
  void atribuir(int i, std::string valor);

  // Retorna o valor do índice i.
  // PRECONDIÇÕES: 
  // (1) i está dentro do intervalo de índices do vetor.
  // (2) i foi inicializando anteriormente.
  string valor(int i); 

  // Desaloca a memória reservada para os elementos do vetor.
  ~Vetor();
};

#endif//Marca o fim do bloco. Se a resposta lá em cima fosse SIM, o C++ pularia tudo e viria direto para cá, ignorando o código do meio.