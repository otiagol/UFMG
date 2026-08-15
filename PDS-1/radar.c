#include <stdio.h>
int main(){
    int vmax;
    float vmot;
    //printf("escreva a velocidade maxima permetida na via e a velocidade com que passou pelo radar, nessa ordem, sem colocar a unidade de medida apenas os valores numericos\n");
    scanf("%d %f", &vmax, &vmot);
    if((vmax>=vmot)){
        printf("Sem Infracao\n");
    }else if(1.2*vmax>=vmot){// n precisa colocar o limite inferior pq ele so vai chegar aqui se ja for maior que vmax, pq se for menor ou igual vai parar no primeiro if
        printf("Infracao Media\n");
    }else if(1.5*vmax>=vmot){
        printf("Infracao Grave\n");
    }else{// n preciso colocar nenhuma condicao pq so chega aqui se for maior que 150% da velocidade max permitida
        printf("Infracao Gravissima\n");
    }
return 0;
}