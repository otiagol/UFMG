#include <math.h> // so precisa add as bibliotecas q vao ser utilizadas nas funcoes como n tem nenhum printf ou scanf
float laplace(float x, float u, float b){
    float y= (1.0/(2.0*b))*exp(-fabs(x-u)/b);
    return y;
 }
float gumbel(float x, float u, float b){
    float z= (x-u)/b;
    float y=(1.0/b) * exp(-(z+exp(-z)));
    return y;
}
float cauchy(float x){
float y=1.0/(3.141592*(1.0+(pow(x,2))));
return y; // precisa colocar se n a funcao entrega nada
}