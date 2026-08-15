#include <stdio.h>
int main(){
    int a, b, c, d, e;
    printf("escreva 5 numeros inteiros :'a b c d e'\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int maior = a; // coroamos o a como o maior para sucetiveis x1 ate achar o vdd maior, desse jeito fica imune a numeros iguais, pq se o numero for igual ao maior a condicao da falsa e o maior continua sendo ele
    if(b>maior){maior=b;}
    if(c>maior){maior=c;}
    if(d>maior){maior=d;}
    if(e>maior){maior=e;}
    printf("\nMaior: %d", maior);
    int menor= a; //msm logica acima
    if(b<menor){menor=b;}
    if(c<menor){menor=c;}
    if(d<menor){menor=d;}
    if(e<menor){menor=e;}
    printf("\nMenor: %d", menor);
    int div3=0;
    if(a%3==0){div3=div3+1;}
    if(b%3==0){div3=div3+1;}
    if(c%3==0){div3=div3+1;}
    if(d%3==0){div3=div3+1;}
    if(e%3==0){div3=div3+1;}
    printf("\nQuantidade de divisiveis por 3: %d\n", div3);
    return 0;
}
