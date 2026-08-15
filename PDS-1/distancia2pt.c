#include <stdio.h>
#include <math.h>
typedef struct coordenada{
    double x, y;
}cood;
double distancia(cood c1, cood c2){
    return sqrt(pow(c1.x-c2.x, 2)+pow(c1.y-c2.y, 2));
}
int main(){
    cood c1, c2;
    scanf("%lf %lf", &c1.x, &c1.y);
    scanf("%lf %lf", &c2.x, &c2.y);
    printf("%lf", distancia(c1, c2));
}