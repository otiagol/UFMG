#include <stdio.h>
#include <string.h>
unsigned int ContaPalavras(char txt[]){
    unsigned int plu=0, EmPalavra=0;
    unsigned int n=strlen(txt);

    for(unsigned int i=0; i<n; i++){
        if(txt[i]==' ' || txt[i]=='\n'){
            EmPalavra = 0;
        }else if(EmPalavra == 0){//esse bloco so e acionado quando o de cima n for, ent quando n for mais ' ' ou enter e for 0
            EmPalavra = 1;
            plu++;
        }
    }
return plu;
}
int main(){
    char txt[51];
    fgets(txt, 51, stdin);
    printf("%u", ContaPalavras(txt));
    return 0;
}