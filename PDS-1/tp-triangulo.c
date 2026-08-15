#include <stdio.h>
int main(){
    float A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if(A<=0 && B<=0 && C<=0){
        printf("Valores invalidos\n");
        return 0; //early return, o programa ja acaba aqui
    }
   if (A < B + C && B < C + A && C < B + A) {
    if(A==B && B==C){
        Printf("Triangulo equilatero\n");
    }else if(A==B || B==C || C==A){
        Printf("Triangulo isoceles\n");
   }else{
       Printf("Triangulo escaleno\n"); 
   }}else{
    printf("Valores invalidos\n");
   }
return 0;
}