int somaCubos(int n){
    int soma=0;
    soma+=n*n*n;
    if(n<=0)return 0;
    soma+=somaCubos(--n);
    return soma;
}