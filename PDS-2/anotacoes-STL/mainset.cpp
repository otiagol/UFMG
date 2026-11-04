#include <iostream>
#include <set>      // Biblioteca obrigatória
#include <iterator> // Para std::next() e std::prev()

// ÁRVORE BINÁRIA INVERTIDA: Memória espalhada. Cada caixa guarda o conteúdo, o endereço de uma caixa MENOR (esquerda) e o de uma caixa MAIOR (direita).
// Consequência: Tudo fica ordenado sozinho em ordem crescente e NÃO aceita repetidos!
int main() {
    // entre <> está o tipo guardado no set
    std::set<int> y{9, 1, 4, 1}; // y -> 1, 4, 9 (ordena sozinho na hora e ignora o 1 repetido!)
    std::set<int> z;             // z nasce vazio

    // Na árvore NÃO dizemos a posição onde inserir: ela calcula o galho certo sozinha!
    z.insert(y.begin(), y.end()); // Copia de y e já organiza na árvore de z -> z: 1, 4, 9
    z.emplace(2); // Constrói o 2 direto no galho certo -> z: 1, 2, 4, 9
    z.emplace(4); // Como o 4 já existe na árvore, o set simplesmente ignora!

    // Como está tudo espalhado na memória em galhos, precisa de iterador para navegar.
    // Se percorrermos do begin() ao end(), o iterador caminha da esquerda para a direita (ordem crescente).
    auto it = std::next(z.begin(), 2); // Começa no menor (1) e dá 2 saltos -> cai no 3º elemento (4)

    // REGRA DE PROTEÇÃO DA ÁRVORE: Os elementos dentro do set são SEMPRE const!
    // Você não pode fazer (*it = 10), pois se mudasse o valor na marra, o número ficaria 
    // no galho errado e quebraria a árvore. Para alterar, você apaga o antigo e insere o novo.

    int n = z.size();   // Quantos elementos únicos a árvore tem (4)
    bool b = z.empty(); // Vê se está vazia

    // Não existe .front() nem .back() no set, usamos os iteradores das pontas:
    int menor_elemento = *z.begin();  // Ponta extrema esquerda da árvore -> lê o menor (1)
    int maior_elemento = *z.rbegin(); // rbegin() pega a ponta extrema direita -> lê o maior (9)

    // --- O PONTO FORTE DO SET: BUSCA RÁPIDA PELOS GALHOS ---
    // 1. Verificar se existe com .count() (como não há repetidos, só retorna 1 ou 0):
    if (z.count(4) > 0) {
        // O número 4 existe na árvore!
    }

    // 2. Pegar a posição do elemento com .find():
    auto busca = z.find(2); // Desce a árvore procurando o 2. Se NÃO achar, devolve z.end()!
    if (busca != z.end()) {
        int achou = *busca; // Abre a caixa encontrada (2)
    }

    // --- REMOÇÃO ---
    z.erase(2);         // Acha o 2 nos galhos e já deleta direto pelo valor! -> z: 1, 4, 9
    z.erase(z.begin()); // Também aceita apagar passando o iterador (aqui tira o menor termo: 1)
    z.clear();          // Destrói toda a árvore

    // Para percorrer em ordem crescente (sempre com const& para não clonar à toa):
    for (const int& valor : y) {
        // lê 'valor' já em ordem crescente (1, depois 4, depois 9)
    }

    return 0;
}