#include <stdio.h>
void imprimeNaturais(int N){
    printf("%d\n", N);
    if(N<=0)return;
    imprimeNaturais(--N);
}
