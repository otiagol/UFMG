#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main(){
    FILE *arq= NULL;
    arq= fopen("case.txt","r");
    int num= 0, soma= 0, maior= INT_MIN, menor= INT_MAX;
    float mpar=0;
    int i=0, k=0, p=0;
    //int *vprimo= NULL;
    while(fscanf(arq, "%d", &num)==1){//retorna a quantidade de coisas q conseguiu ler
        soma+=num;
        if(num>maior)maior=num;
        if(num<menor)menor=num;
        if(num%2==0){
            mpar+=num;
            i++;
        }
        for(k=2; k<num; k++){
            if(num%k==0)break;
        }
        if(k==num){
            //vprimo= (int)realloc(vprimo, (p+1)*sizeof(int));//estica o vetor e se o vetor for null age como um malloc
            //vprimo[p]= num;
            p++;
        }
    }
    fclose(arq);
    printf("A soma é: %d\nO maior número é: %d\nO menor número é: %d\nA média dos pares é: %f\nO número de primos é: %d", soma, maior, menor, (mpar/i), p);
return 0;
}