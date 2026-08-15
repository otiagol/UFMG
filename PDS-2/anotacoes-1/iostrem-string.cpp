#include <iostream>//bib semelhante a stdio.h
#include <string>//bib para usar a variavel string 
#include <limits>//bib para usar limites
using namespace std;// std=padrao, como se fosse o sobrenome desse cod e se eu quiser usar alguma coisa desse cod em outro posso falar ao computador de qual pasta 
//ele eh usando using namespace pastagenerica ou pastagenerica::funcao 

int main(){
    string nome = "";//nova variavel "inteligente", n precisa mallocar pra aumentar ja guarda nela msm o tamanho e quanto de memoria total esta alocado para ela
    //para acessar as letras e igual na string em c, nome[0] para primeira e nome[tam-1] para a ultima
    string sobrenome = "";
    string nomecompleto= "";
    int tam=0;
    cin >> sobrenome;//recebe dados da entrada padrao ate aparcer um espaco enter ou tab, se receber uma coisa incompativel c a variavel relacionada buga e trava ->
    //se for numero recebe 0
    while(cin.fail()){//funcao q rcb 0 se falhar
        cin.clear;//tem q limpar pq se o primeiro travar, trava todos
        cin.ignore(numeric_limits<streamsize>::max(), '\n');//funcao q ignura tudo do teclado ate oq vc colocar no ultimo parametro, nesse caso '\n' ->
        //ou ate no limite q vc colocou no primeiro parametro, q nesse caso foi o limite max, se quiser ignorar apenas 1 coisa coloque sem parametros
        cin >> sobrenome;
    }
    nome= "ti";
    nome += "ago";
    nomecompleto = nome+ " "+ sobrenome;
    nomecompleto.find('o')!=string::npos//string::npos e a constante especial q devolve caso n haja letras e a funcao funciona palavragenerica.find(letra q estoucomparando)->
    //retorna o lugar da primeira letra igual q achar e pode colocar um segundo parametro q a partir de qual posicao da plv deve comecar a ler
    //rfind() msm coisa do find mas cmc do final
    int tam = nomecompleto.size();//funcao q retorna a quantidade de letras q tem na palvara/ poderia usar length no lugar de size
    cout << "meu nome e sobrenome eh:" << nomecompleto << "e tem"<< tam-1 << "letras" << endl;//n precisa especificar o tipo ele eh "inteligente", toda vez q for de texto pra variavel tem q colocar << ->
    //e tbm quando for colocar variaveis seguidas 
    //o endl e um \n q da flush no buffer, ele n e rapido como o \n mas e o ideal para evitar bugs
return 0;
}