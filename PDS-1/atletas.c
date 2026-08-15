#include <stdio.h>
typedef struct atleta{
    char nm[17], sprt[17];
    int idd;
    float h;
}atleta;
void mais_alto_velho(int n,atleta v[n]){
    atleta alto=v[0];
    atleta velho=v[0];
    for(int i=1; i<n; i++){
        if(alto.h<v[i].h)
            alto=v[i];
    }
    for(int i=1; i<n; i++){
        if(velho.idd<v[i].idd)
            velho=v[i];
    }
    printf("Mais alto: %s\nMais velho: %s", alto.nm, velho.nm);
}
int main(){
    atleta v[5];
    for(int i=0; i<5; i++){
        scanf("%16s %16s %d %f", v[i].nm, v[i].sprt, &v[i].idd, &v[i].h);
    }
    mais_alto_velho(5, v);
return 0;
}