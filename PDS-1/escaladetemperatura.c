#include <stdio.h>
int main(){
    FILE *arq= NULL;
    arq= fopen("case.txt","r");
    int min=0, max=0, n=0, i=0, k=0, f=0;
    fscanf(arq, "%d\n%d\n%d", &min, &n, &max);
    fclose(arq);
    for(i=0; (min+(i*n))<=max; i++){
        k= (min+(i*n)) + 273;
        f= ((min+(i*n)) * 9)/5 + 32;
        printf("%d %d %d\n", (min+(i*n)), f, k);
    }
return 0;
}