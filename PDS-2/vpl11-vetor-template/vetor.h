#ifndef VETOR_H_
#define VETOR_H_

#include <iostream> 
using namespace std;


#include <string>

using std::string;
template <typename tipo>
// Define um vetor cujos índices variam em qualquer intervalo, inclusive negativos.
//o codigo tem q ser feito no .h por causa do template
class Vetor {
  public:
    // Cria um vetor cujos índices variam de 'inicio' até 'fim'.
    // O valor associado aos índices é indefinido.
    // PRECONDIÇÃO: fim >= inicio.
    //inicializa as variaveis antes de rodar o construtor, alocando os valores nelas ao mesmo tempo q sao criadas otimizando o processo
    //e como tipos const n podem ser alterados o unico jeito de declarar ele e colocando o valor ao msm tempo que é criado
    Vetor(int inicio, int fim) : inicio_(inicio), fim_(fim) {
      elementos_ = new Tipo[fim - inicio + 1];
    }

    // Redimensiona o vetor de forma que os índices passam a variar
    // de 'inicio2' até 'fim2'.
    // O valor associado aos índices que estão na interseção de
    // [inicio_, fim_] e [inicio2, fim2], não se alteram.
    // Já o valor dos demais índices é indefinido.  
    // PRECONDIÇÃO: fim2 >= inicio2.
    void Redimensionar(int inicio2, int fim2) {
      Tipo* novos_elementos = new Tipo[fim2 - inicio2 + 1];
      int inter_inicio = std::max(inicio_, inicio2);//devolve o maior entre os 2 numeros 
      int inter_fim = std::min(fim_, fim2);
      for (int i = inter_inicio; i <= inter_fim; ++i) {
            // Mapeia o índice virtual 'i' para a posição real no novo e no antigo vetor
            novos_elementos[i - inicio2] = elementos_[i - inicio_];
        }

        // 4. Liberta a memória antiga para evitar memory leaks
        delete[] elementos_;

        // 5. Atualiza os ponteiros e os limites da classe
        elementos_ = novos_elementos;
        inicio_ = inicio2;
        fim_ = fim2;
    }

    // Retorna uma referência a variável correspondente ao índice i.
    // Pode ser utilizado tanto para atribuir quanto para acessar valores.
    // PRECONDIÇÃO: i está dentro do intervalo de índices do vetor.
    Tipo& operator[](int i) { 
       return elementos_[i - inicio_];
    }

    // Desaloca a memória reservada para os elementos do vetor.
    ~Vetor() {
      delete [] elementos_;
    }
  private:
    int inicio_;  // Primeiro índice válido do vetor.
    int fim_;  // Último índice válido do vetor.
    Tipo* elementos_;  // Elementos do vetor.
};

#endif