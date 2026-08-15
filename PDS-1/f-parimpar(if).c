#include <stdio.h>
void par_ou_impar(int n){
    printf("Digite um numero inteiro: \n");
    scanf("&d", &n);
    if(n>0){
        if(n%2==0){
            printf("%d e par.\n", n);
        }else{
            printf("%d e impar.\n", n);
        }
    }else{
        printf("ERRO: numero invalido.\n");
    }
}