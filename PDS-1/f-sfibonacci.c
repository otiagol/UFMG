int fibonacci(int n){
    int soma;
    int k=3;
    int s2=1;
    int s1=1;
    if(n<1 || n>30){
        return -1;
    }
    if(n==1 || n==2){
        soma=1;
    }
    for(k;n>2 && k<=n;k++){
       soma=s2+s1;
       s1=s2;
       s2=soma;
    }
return soma;
}
