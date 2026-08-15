#include <stdio.h>
#include <string.h>
void InverteStr(char str[]){
    int tam = strlen(str);
    char guardastr[tam+1];// espaco para o \0
    int i=0, k=tam-1;
    while(i<=(tam-1)){
        str[i]=guardastr[k];// ola 0(o)->2(a) 1(l)->1(l) 2(a)->0(o)
        i++;
        k--;
    }
    str[i+1]='\0';
}
int main(){
    char str[52];// 50 end pra caracteres, 1 para um eventual enter e 1 para \0
    fgets(str, 52, stdin);
    str[strcspn(str, "\n")]='\0';
    InverteStr(str);
    printf("%s", str);
}
