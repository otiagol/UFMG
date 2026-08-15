unsigned int soma_divisores(unsigned int n){
    unsigned int d=1;//denominador
    unsigned int sd=0;
    while(d<=n){
        if(n%d==0){
            sd+=d;
        }
        d++;
    }
return sd;
}