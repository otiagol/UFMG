#include <stdio.h>
#include <limits.h> ////um arquivo de texto gigante cheio de constantes
short int x= SHRT_MIN;//menor valor de x
int c= INT_MAX; //menor valora para c 
long g= LONG_MIN; //menor valor para g
long long k=LLONG_MAX;//maior valor para k
//tipo de dados
bool;//= %d //tem true ou false
char;// =%c //possue na vdd numeros q sao respectivos a caracteres(letras e sinais como espaco e , etc), tabela ASCII
int;//= %i, %d // numeros inteiros
float;//= %f // numeros com casas decimais
double;//= %lf //numeros com casas decimais, mas possue mais bits q o float 

//modificadores de tipos de dados
unsigned;//= %u //permite apenas valores positivos e dobra o limite máximo positivo, n pode fazer double nem float
short;//= %hi, %hd //reduz o tamho em bits pela metade, so funciona pra int
unsigned short;//= %hu
long;//= %li, %ld, %Lf // apenas int e double, aumenta o tamanho em bits
unsigned long;//= %lu
int main() {
    float a = 1.5;
    int b = (int) a;//b e a menos a parte fracionaria
    return 0;
}