class Racional { // struct eh quando tudo eh publico e class quando tem coisas privadas
private:
    int num; // o "_" foi adotado pelos humanos como um jeito de falar q esta no private
    int den;
    int MDC(int a, int b);
    void simplificar();

public: // <- O public sobe para cá! Daqui para baixo, tudo é liberado para o usuário
    Racional(); // nasce zerado
    Racional(int a); // a/1
    Racional(int a, int b); // a/b
    
    Racional operator+(Racional x);
    Racional operator-(Racional x);
    Racional operator*(Racional x); // <-- Adicionado: Multiplicação
    Racional operator/(Racional x); // <-- Adicionado: Divisão
    
    Racional simetrico();
    Racional inverte();             // <-- Adicionado: Inverter a fração
    
    bool operator==(Racional x);    // <-- Adicionado: Teste de igualdade
};