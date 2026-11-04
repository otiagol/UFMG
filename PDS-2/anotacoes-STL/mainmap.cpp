#include <iostream>
#include <map>    // Biblioteca obrigatória
#include <string>

// MESMA ÁRVORE INVERTIDA DO SET (menor à esquerda, maior à direita), mas cada caixa guarda 2 coisas juntas (std::pair): uma CHAVE (first) e um VALOR (second).
// A árvore usa a CHAVE para organizar os galhos (a chave é única, ordenada e const).
// Já o VALOR é livre: pode repetir e pode ser alterado a qualquer momento!
int main() {
    // entre <> vai <Tipo_da_Chave, Tipo_do_Valor>
    // Já nasce ordenado em ordem alfabética pela Chave ("Ana" vem antes de "Zeca"):
    std::map<std::string, int> y{{"Zeca", 10}, {"Ana", 20}}; 
    std::map<std::string, int> m; // m nasce vazio

    m.insert(y.begin(), y.end()); // Copia os pares de y para m

    // --- 2 FORMAS DE INSERIR NO MAP ---
    // 1. Com emplace(Chave, Valor): Constrói na árvore. Se a chave JÁ existir, ele NÃO altera o valor!
    m.emplace("Beto", 15); // Cria a caixa ("Beto", 15) no galho entre "Ana" e "Zeca"

    // 2. Com colchetes m[Chave] = Valor: Se a chave não existir, cria. Se JÁ existir, SOBRESCREVE o valor!
    m["Carlos"] = 30; // Chave nova: cria a caixa ("Carlos", 30) na árvore
    m["Ana"] = 99;    // Chave já existente: vai na caixa da "Ana" e muda o valor de 20 para 99!

    int n = m.size();   // Quantos pares (caixas) existem no map
    bool b = m.empty(); // Vê se está vazio

    // --- CUIDADO NA LEITURA: A PEGADINHA DO m[chave] vs m.at(chave) ---
    //NUNCA use m["Chave"] apenas para consultar se não tiver certeza de que a chave existe! 
    //Motivo mecânico: se você fizer (int x = m["Fantasma"]), como "Fantasma" não existe na árvore,
    // o operador [] CRIA uma caixa nova ("Fantasma", 0) na memória só porque você tentou ler!
    // (Por ter esse poder de criar caixas, o compilador PROÍBE usar m[] dentro de funções const!).
    
    int idade_ana = m.at("Ana"); // FORMA SEGURA DE LER: apenas consulta (e funciona em funções const). 
                                 // Se a chave não existir, avisa o erro na hora sem sujar a memória.

    // --- BUSCA SEGURA ANTES DE LER ---
    if (m.count("Beto") > 0) { // Retorna 1 se a CHAVE "Beto" existir na árvore, ou 0 se não existir
        int idade = m.at("Beto");
    }

    // Buscando com iterador (.find procura sempre pela CHAVE):
    auto it = m.find("Carlos"); // Se não achar a chave, devolve m.end()
    if (it != m.end()) {
        // Como a caixa guarda um par, usamos ->first para a Chave e ->second para o Valor:
        std::string chave = it->first; // "Carlos" (é const, não pode ser alterada)
        int valor = it->second;        // 30 (pode ser alterado ex: it->second = 40;)
    }

    // --- REMOÇÃO ---
    m.erase("Zeca");    // Acha a chave "Zeca" na árvore e destrói a caixa inteira (chave + valor)
    m.erase(m.begin()); // Apaga a primeira caixa da árvore (a menor chave alfabética: "Ana")
    m.clear();          // Limpa tudo

    // --- COMO PERCORRER O MAP (Sempre passa da menor chave para a maior) ---
    // 1. Com for-each (cada 'par' é uma referência para a caixa contendo .first e .second):
    for (const auto& par : y) {
        std::string k = par.first; // Lê a chave
        int v = par.second;        // Lê o valor
    }

    // 2. Com iterador clássico:
    for (auto ptr = y.begin(); ptr != y.end(); ++ptr) {
        // ptr->first é a chave | ptr->second é o valor
    }

    return 0;
}