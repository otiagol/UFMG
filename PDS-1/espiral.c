#include <stdio.h>
void rcbMatriz(int x, int y, int m[x][y]){
    for(int i=0; i<x; i++){
        for(int k=0; k<y; k++){
            scanf("%d", &m[i][k]);
        }
    }
}
void espiral(int x, int y, int m[x][y]){
    int contador=0, tamanho=x*y, cima=0, baixo=x-1, esquerda=0, direita=y-1;
    while(1){
        for(int i=esquerda; i<=direita; i++, contador++){//ele caminha pelas colunas, ent i e uma coluna, e como cima comeca da direita pra esquerda i vai comecar na esquerda e ir avancando ate a direita
            printf("%d ", m[cima][i]);
            //vetor[contador] = m[cima][i]; caso quisesse guardar em um vetor
        }
        cima++;
        if(contador==tamanho){//confere dps de todos os for se ja imprimiu tudo
            break;
        }
        for(int k=cima; k<=baixo; k++, contador++){//caminha pelas linhas,k e uma linha, como vai de cima pra baixo, k=cima e vai aumentando ate chegar em baixo
            printf("%d ", m[k][direita]);
        }
        direita--;
         if(contador==tamanho){
            break;
        }
        for(int z=direita; z>=esquerda; z--, contador++){//caminha pelas colunas(=z), como vai da direita pra esquerda, comeca na direita e diminui ate chegar na esquerda
            printf("%d ", m[baixo][z]);
        }
        baixo--;
        if(contador==tamanho){
            break;
        }
        for(int v=baixo; v>=cima; v--, contador++){//caminha pelas linhas(=v) e comeca de baixo ate em cima, ent v=baixo e diminui ate chegar em cima
            printf("%d ", m[v][esquerda]);
        }
        esquerda++;
        if(contador==tamanho){
            break;
        }
    }
}

int main(){
    int x=0, y=0;
    scanf("%d%d", &x, &y);
    int m[x][y];
    rcbMatriz(x, y , m);
    espiral(x, y, m);
return 0;
}
