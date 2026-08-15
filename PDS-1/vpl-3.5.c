#include <stdio.h>
#include <limits.h>//um arquivo de texto gigante cheio de constantes
int main(){
    unsigned long long maior= ULLONG_MAX; //maior possivel
    long long menor = LLONG_MIN; //menor negativo possivel 
    printf("menor: %lld\nMaior: %llu\n", menor, maior);
return 0;
}