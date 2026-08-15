#include <stdio.h>
int main(){
    double n1;
    printf("Digite o primeiro numero: \n");
    scanf("%lf", &n1);
    char op;
    printf("Digite o operador (+, -, *, /): \n");
    scanf(" %c", &op);
    double n2;
    printf("Digite o segundo numero: \n");
    scanf("%lf", &n2);
    switch(op){//colocamos o switch(variavel a ser analizada)
        case'+':// colocamos case 'valor da variavel a ser analizada' se entrar aqui faz oq tem logo embaixo
            printf("%.2lf + %.2lf = %.2lf\n", n1, n2, (n1+n2));
        break;//e ignorado se n entrar no case acima e so e acionado se estiver apos um case que foi utilizado, e quando chega aqui sai automaticamente do bloco switch
        case'-': 
            printf("%.2lf - %.2lf = %.2lf\n", n1, n2, (n1-n2));
        break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", n1, n2, (n1*n2));
        break;
        case '/':
            if(n2!=0){
                printf("%.2lf / %.2lf = %.2lf\n", n1, n2, (n1/n2));
            }else{
                printf("Erro! Divisão por zero não é permitida.\n");
            }
        default://como se fosse um else
            printf("Operador inválido!\n");
    }
return 0;
}