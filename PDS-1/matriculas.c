#include <stdio.h>
int main(){
    int pds=0, calc=0, i=0, k=0;
    scanf("%d", &pds);
    int mpds[pds];
    for(i; i<pds; i++){
        scanf("%d", &mpds[i]);
    }
    scanf("%d", &calc);
    int mcalc[calc];
    for(i=0; i<calc; i++){
        scanf("%d", &mcalc[i]);
    }
    for(i=0; i<calc; i++){//compara mcalc[i] c todos o mpds[] e se achar printf se n aumenta o i 
        for(k=0; k<pds; k++){// preciso declarar k=0 aqui, pq se n o valor de k ia se manter alterado no final do laco ja q declarei ele fora
            if(mcalc[i]==mpds[k]){
                printf("%d\n", mpds[k]);
                break;// ja q achou ele pode sair do laco e seguir para o prox
            }
        }
    }
    return 0;
}