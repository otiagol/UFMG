#include <stdio.h>
void rcbMatriz(int x, int y, int m[x][y]){
    for(int i=0; i<x; i++){
        for(int k=0; k<y; k++){
            scanf("%d", &m[i][k]);
        }
    }
}
void ivtMatriz(int x, int y, int m[x][y]){
    for(int i=0; i<x; i++){
        for(int k=0; k<y; k++){
            m[i][k]=-m[i][k];
        }
    }
}
void ipmMatriz(int x, int y, int m[x][y]){
    for(int i=0; i<x; i++){
        for(int k=0; k<y; k++){
            printf("%d ", m[i][k]);
        }
        printf("\n");
    }
}
int main(){
    int x=0, y=0;
    scanf("%d%d", &x, &y);
    int m[x][y];
    rcbMatriz(x, y, m);
    ivtMatriz(x, y, m);
    ipmMatriz(x, y, m);
return 0;
}