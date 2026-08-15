#include <stdio.h>
typedef struct atleta{
    char nm[17], sprt[17];
    int idd;
    float h;
}atleta;
void ordena(int n, atleta v[n]){
    int i=0, k=0;
    atleta temp;
    for(int i=0; i<n; i++){
        for(k=(i+1); k<n; k++){
            if(v[i].idd<v[k].idd){//se vi for menor q vk eles precisam mudar de lugar
                temp=v[i];
                v[i]=v[k];
                v[k]=temp;
            }
        }
    }
}
int main(){
    atleta v[5];
    int i=0;
    for(i=0; i<5; i++)
        scanf("%16s %16s %d %f", v[i].nm, v[i].sprt, &v[i].idd, &v[i].h);
    ordena(5, v);
    for(i=0; i<5;i++)
        printf("%d- %s\n", i+1, v[i].nm);
}