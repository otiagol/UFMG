int soma_digitos_pares(unsigned int n){
    int soma=0;
    unsigned int d;
    while(n>0){
        d=n%10;//recolhe o ultimo numero
        if(d%2==0){
            soma+=d;
        }
        n/=10;//retira o numero recolhido acima para acessar o prox
    }
return soma;
}