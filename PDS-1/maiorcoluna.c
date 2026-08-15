#include <stdio.h>
void colunademaiorconteudo(int x, int y, int matriz[x][y]){
    int maiorcont=-9999, coluna=0;
    for(int i=0; i<y; i++){// le 1 coluna toda e dps passa pra prox, i=colunas e k=linhas
        for(int k=0; k<x; k++){
            if(matriz[k][i]>maiorcont){
                coluna=i;
                maiorcont=matriz[k][i];
            }
        }
    }
printf("%d", coluna);
}
int main(){
    int i=0, k=0, c=0, u=0, maior=-9999, maiorind=0;
    scanf("%d", &c);
    scanf("%d", &u);
    int matriz[c][u];// linha coluna
    for(i=0; i<c; i++){//completa 1 linha toda e passa pra prox
        for(k=0; k<u; k++){
            scanf("%d", &matriz[i][k]);
        }
    }
    colunademaiorconteudo(c, u, matriz);
return 0;
}