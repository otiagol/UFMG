#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
typedef struct pessoa{
    char *nm;
    int idd;
}pessoa;
int main(){
    FILE *arq= NULL;
    pessoa *vp= NULL;
    pessoa velha= {0};
    pessoa nova= {0};
    velha.idd= INT_MIN;
    nova.idd= INT_MAX;
    int n=0, i=0;
    char tam[300];
    arq= fopen("case.txt", "r");
    while(fscanf(arq, "%s%d", tam, &n)==2){
        vp=(pessoa *)realloc(vp, sizeof(pessoa)*(i+1));
        vp[i].idd= n;
        vp[i].nm= (char *)malloc(strlen(tam)+1);
        strcpy(vp[i].nm, tam);
        i++;
    }
    fclose(arq);
    for(n=0; n<i; n++){
        if(vp[n].idd>velha.idd){
            free(velha.nm);
            velha.nm=NULL;
            velha.idd=vp[n].idd;
            velha.nm=(char *)malloc(strlen(vp[n].nm)+1);
            strcpy(velha.nm, vp[n].nm);
        }
         if(vp[n].idd<nova.idd){
            free(nova.nm);
            nova.nm=NULL;
            nova.idd=vp[n].idd;
            nova.nm=(char *)malloc(strlen(vp[n].nm)+1);
            strcpy(nova.nm, vp[n].nm);
        }
    }
    printf("%s\n%s", nova.nm, velha.nm);
return 0;
}
