#include <string.h>
#include <stdlib.h>
void main(){
    char a[1000]="ola";
    char guardaa[1000];
    char b[1000]="alo";
    char c[1000]="uno";
    char d[1000]="iupi";
    char e[]="corredor";
    char f[]="corre";
    char g[]="dor";
    char h[]="abacate";
    char i[]= "Pedro Olmo Stancioli";
    char *token;
    char j[]= "123";
    int k = 0;

    strcpy(a,b);//copia o conteudo da string de 'b' e passa para a 'a'
    strcat(a,b);//junta o conteudo de 'a' e 'b'
    strchr(c, 'u');//retorna o end de memoria em q u esta guardado
    strcspn(c, "u");// retorna a posicao de u
    strcpy(guardaa, a);//copia todo texto de 'a' para 'guardaa'
    c[strcspn(c, "u")] = 'a';//troca o primeiro 'u' por 'a' na string c - a funcao strcspn retorna o numero respectivo daquele caracter na string
    //strcmp(a, b)-> retorna 0 se palavras sao igauis

    int tam =strlen(d);//tam agr tem o valor de quantos caracteres tem a string d sem contar o \0
    int tamtotal = sizeof(d);// tamanho real de d rm bits

    strstr(e,f);//devolve o endereco do primeiro caracter da string em comum, e como um printf so para de ler ao ver um \0 ele vai ler string toda nesse exemplo
    strstr(e,g);// no ex anterior retorna e[0] e imprimiria 'e' todo, nesse retorna e[5] e imprime do e[5] ate o \0
    strstr(f,e);//retorna null q e igual a memoria nula
    strchr(h, 'c');//devolve o endereco em q a primeira letra c se enconta, se pedir um printf ele vai printar de c ate o \0, se n tiver nada retorna null

    token = strtok(i, " ");//anda pela string e adiciona um \0 aonde esta o caractere especificado na funcao e ela devolve o endereço de memória da primeira letra da palavra (token) que ela acabou de isolar
    //token = strtok(NULL, " ");quando coloca endereco nulo ele continua da onde parou
    while(token != NULL){//token vai ser nulo ao achar um \0, fim da str
        token = strtok(NULL, " ");//poderia colocar como separador outra string
    }

    k = atoi(j);//pega a string j e transforma o char em inteiro se possivel
    //atof faz a msm coisa so q c flaot
}