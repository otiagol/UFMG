#include <stdio.h>
int main(){
    float valor;
    char id;
    //printf("insira o valor(apenas os numeros e com '.') e o identificador, nesta ordem e separados por um espaco");
    scanf("%f %c", &valor, &id);
    if(id=='G'){
        printf("%.2f\n", (valor*1.07));
    }else if(id=='P'){
        printf("%.2f\n", (valor*1.12));
    }else if(id=='J'){
        printf("%.2f\n", (valor*1.15));  
    }else if(id=='S'){
        printf("%.2f\n", (valor*1.08)); 
    }else{
        printf("Estado invalido\n");
    }
}