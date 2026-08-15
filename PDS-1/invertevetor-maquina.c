#include <stdio.h>
int main(){
    int N=0, i=0, n=0;
    scanf("%d", &N);
    int vetor[N];
    int guardavetor[N];
    n = N - 1;
    for(i; i<N; i++){
        scanf("%d", &vetor[i]);
    }
    for(i=0; i<N;i++){
        guardavetor[i]= vetor[i];
    }
    for(i=0; i<N; i++){
        vetor[i] = guardavetor[n];
        n--;
    }
    for(i=0; i<N; i++){
        printf("%d\n", vetor[i]);  
    }
}