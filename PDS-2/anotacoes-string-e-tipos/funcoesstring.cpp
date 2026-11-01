#include <iostream>
#include <string>

 using namespace::std;
int main() {
    std::string curso = "Engenharia";
    
    // 1. Concatenando textos facilmente
    curso += " de Producao"; // Agora vale "Engenharia de Producao"
    
    // 2. Lendo propriedades
    if (!curso.empty()) {
        std::cout << "O texto tem " << curso.length() << " letras.\n"; 
    }
    
    // 3. Recortando um pedaço (Começa na posição 0, pega 10 letras)
    std::string primeiro_nome = curso.substr(0, 10); // Guarda apenas "Engenharia"
    
    // 4. Procurando uma palavra
    if (curso.find("Producao") != std::string::npos) {//maior numero possivel do c q uma string pode ter
        std::cout << "Palavra encontrada na string!\n";
    }
    
    return 0;
}