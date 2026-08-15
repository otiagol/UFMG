double mediaVetor(int v[], int n){
    if(n==0)return 0;
    return  (v[n - 1] + (n - 1) * mediaVetor(v, n - 1)) / (double)n;//media=soma/qtd logo soma=media*qta
}