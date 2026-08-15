#include <stdio.h>
#include <limits.h>
int main(){
    FILE *arq= NULL;
    arq= fopen("case.txt","r");
    int v[4];
    int mdc=0, menor= INT_MAX, i=0, k=0;
    fscanf(arq, "%d\n%d\n%d\n%d", &v[0], &v[1], &v[2], &v[3]);
    fclose(arq);
    for(i=0; i<4; i++){
        if(v[i]<0)v[i]*=-1;
        if(v[i]<menor)menor=v[i];
    }
    for(i=menor; i>= 1; i--){
        for(k=0; k<4; k++){
            if(v[k]%i!=0){
                break;
            }
        }
        if(k==4){
            mdc=i;
            break;
        }
    }
    printf("%d", mdc);
return 0;
}