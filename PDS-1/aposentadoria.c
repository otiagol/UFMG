#include <stdio.h>
int main(){
    char sexo;
    int idade, cont;
    //printf("escreva sua idade(apenas os numeros), tempo de contribuicao(apenas os numeros), nessa ordem\n");
    scanf("%d %d %c", &idade, &cont, &sexo);
    //fflush(stdin);
    //printf("escreva seu sexo com M(masc) ou F(Fem)\n");
    //scanf("%c", &sexo);
    if(sexo=='F'){
        if((idade>=55 && cont>=30)||(idade>=60)){
            printf("Pode aposentar\n");
        }else{
            printf("Nao pode aposentar\n");
        }
    }else{
        if((idade>=60 && cont>=35)||(idade>=65)){
            printf("Pode aposentar\n");
        }else{
            printf("Nao pode aposentar\n");
        }
    }
}