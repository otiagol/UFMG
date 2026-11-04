#include <iostream>
#include <string>

// --- 1. MÚLTIPLOS TIPOS ---
// Basta separar por vírgula. Aqui T1 e T2 podem ser iguais ou totalmente diferentes:
template <typename T1, typename T2>
class Par {
  public:
    T1 chave_;
    T2 valor_;
    Par(T1 c, T2 v) : chave_(c), valor_(v) {} // Lista de inicialização em ação
};

// --- 2. MOLDE GENÉRICO PADRÃO ---
template <typename Tipo>
class Impressora {
  public:
    void imprimir(Tipo dado) {
        // Regra geral: serve para int, float, string, etc.
        std::cout << "Valor normal: " << dado << std::endl;
    }
    void outraFuncao() { /* funciona igual para todos */ }
};

// --- 3. CASO A: ESPECIALIZANDO APENAS UM MÉTODO ---
// E se para 'bool' eu não quiser imprimir 0 ou 1, mas sim "Verdadeiro" ou "Falso"?
// Não precisa reescrever a classe toda! Basta especializar só a função 'imprimir' para bool:
template <>
void Impressora<bool>::imprimir(bool dado) {
    if (dado == true) {
        std::cout << "Booleano especial: Verdadeiro" << std::endl;
    } else {
        std::cout << "Booleano especial: Falso" << std::endl;
    }
}

// --- 4. CASO B: ESPECIALIZANDO A CLASSE INTEIRA ---
// Se o tipo mudar completamente a estrutura da classe (outros atributos e funções),
// você reescreve a classe inteira travando o tipo em 'Impressora<char*>':
template <>
class Impressora<char*> {
  public:
    void imprimirTextoAntigo(char* texto) {
        std::cout << "Tratamento especial para ponteiro de char: " << texto << std::endl;
    }
};

int main() {
    Par<std::string, int> p("Idade", 20); // T1 vira string, T2 vira int

    Impressora<int> imp_int;
    imp_int.imprimir(42); // Usa o molde genérico -> imprime "Valor normal: 42"

    Impressora<bool> imp_bool;
    imp_bool.imprimir(true); // O compilador desvia do molde e usa a versão especial de bool!

    return 0;
}