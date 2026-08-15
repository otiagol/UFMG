#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int maior= -1, tam= 0;
    FILE *arq= NULL;
    char info[300], *linha= NULL;
    arq= fopen("texto.txt","r");
    if(arq== NULL) return 1;
    while(fgets(info, 298, arq) != NULL){
        info[strcspn(info, "\n")]= '\0';
        if((int)(strlen(info))>maior){
            free(linha);
            linha= NULL;
            tam= strlen(info);
            maior= tam;
            linha= (char *)malloc(tam+1);
            strcpy(linha, info);
        }
    }
    fclose(arq);
    if(linha != NULL){
        printf("%s\n%d", linha, tam);
    }
return 0;
}