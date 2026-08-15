#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct endereco{
    char *linha;
    int num;
    int cep;
}endereco;
endereco *create_address(char *entrada){
    endereco *x;
    char *info=NULL;
    info= strtok(entrada, "|");
    x= (endereco *)malloc(sizeof(endereco));
    x->linha=(char *)malloc(strlen(info) + 1);//so precisa dar malloc na linha pq ela e a unica c tam indefinido
    strcpy(x->linha, info);
    info= strtok(NULL, "|");
    x->num=atoi(info);
    info= strtok(NULL, "|");
    x->cep=atoi(info);
    return x;
}
void free_address(endereco *x){
    free(x->linha);
    x->linha=NULL;
    free(x);
    x = NULL;
}