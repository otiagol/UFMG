#include <stdio.h>
#include <stdlib.h>//existe uma variavel aqui dentro q guarda a semente
#include <time.h>
int aleatorio(int n){
    return rand()%(n+1);// aleatorio entre 0 e n
}
int aleatoriominmax(int min, int max){
    return min+(rand()%(max-min));
}
float randf(){
    return (float)rand()/RAND_MAX;
}
float minmaxrandf(float min, float max){
    return min + (randf()*(max-min));
}
int main(){
    int x=0;
    int i=0;
    float y=0, min=999999, max=-999999;
    //funcao q muda a semente de rand 
    srand(time(NULL));// funcao q da tempo desde de alguma epoca la em segundos
    for(i; i<10000000; i++){
        //x=aleatorio(10);
        //x = rand();//gera entre 0 e RAND_MAX = 32767 
        //printf("x = %d\n", x);
        y= randf();
        //printf("%f\n", y);
        if(y>max){
            max=y;
        }else if(y<min){
            min=y;
        }
    } 
    printf("%f %f", min, max);
return 0;
}