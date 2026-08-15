#include <stdio.h>
#include <math.h>
typedef struct ponto{
    float x, y;
}ponto;
typedef struct retangulo{
    ponto pse, pid;
}retangulo;
float area(retangulo r){
    return(r.pid.x-r.pse.x)*(r.pse.y-r.pid.y);
}
float perimetro(retangulo r){
    return 2*(r.pid.x-r.pse.x+r.pse.y-r.pid.y);
}
float diagonal(retangulo r){
    return sqrt(pow(r.pse.x-r.pid.x, 2)+pow(r.pse.y-r.pid.y, 2));
}
int main(){
    retangulo r;
    ponto p1, p2;
    scanf("%f %f", &p1.x, &p1.y);
    do{
        scanf("%f %f", &p2.x, &p2.y);
        if(p2.x <= p1.x || p2.y >= p1.y){
            printf("Coordenada Invalida ");
        }
    }while(p2.x <= p1.x || p2.y >= p1.y);
    r.pse=p1;
    r.pid=p2;
    printf("Area = %.2f Perimetro = %.2f Diagonal = %.2f", area(r), perimetro(r), diagonal(r));
return 0;
}
