#include <stdlib.h>
void preencherpseudoaleatoriamente(int semente, int min, int max, int x, int y, int m[x][y]){
    srand(semente);
    for(int i=0; i<x; i++){
        for(int k=0; k<y; k++){
            m[i][k]=min+(rand()%(max-min));
        }
    }
}