#include <stdio.h>
void bissexto(int ano){
    if(ano<0){
        printf("ano invalido\n");
    }else{if((ano%4==0 && ano%100!=0)||ano%400==0){
        printf("O ano de %d e bissexto.\n", ano);
    }else{
        printf("O ano de %d nao e bissexto.\n", ano);
    }
    }
}
int main(){
    int ano;
    printf("Digite um ano: \n");
    scanf("%d", &ano);
    bissexto(ano);
return 0;   
}