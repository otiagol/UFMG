class Racional{//struct eh quando tudo eh publico e class quando tem coisas privadas
private:
    int num;//o "_" foi adotado pelos humanos como um jeito de falar q esta no private
    int den;
    int MDC(int a, int b);
    void simplificar();
    Racional();//nasce zerado
    Racional(int a);//a/1
    Racional(int a, int b);//a/b
public:
    Racional soma(Racional x);
    
};