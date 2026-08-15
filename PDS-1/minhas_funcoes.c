//gcc -c ...
int ddd(long long n){
    n = n / 1000000000;
    return n;  
}
void soma1(int*s){
    (*s)++;
}
void troca(float* end_valor1, float* end_valor2){
    float variaveltemp= *end_valor1;
    *end_valor1= *end_valor2;
    *end_valor2= variaveltemp;
}