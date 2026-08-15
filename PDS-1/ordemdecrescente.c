#include <stdio.h>
void ordemdecrescente(int vetor[], int tam){
    int tempi=0, i=0, k=0;                    
    for(i=0; i<tam; i++){
        for(k=i; k<tam; k++){
            if(vetor[i]<vetor[k]){
                tempi=vetor[i];
                vetor[i]=vetor[k];
                vetor[k]=tempi;
            }
        }
    }
}
int main(){
    int tam=0, i=0;
    scanf("%d", &tam);
    int vetor[tam];
    for(i=0; i<tam; i++){
        scanf("%d", &vetor[i]);
    }
    ordemdecrescente(vetor, tam);
    for(i=0; i<tam;i++){
        if(i==(tam-1)){
            printf("%d", vetor[i]);
        }else{
            printf("%d ", vetor[i]);
        }
    }
return 0;
}