unsigned long long fatorial(int n){
    unsigned long long fat=1;
    for(int k=2; k<=n; k++){
        fat=fat*k;
    }
return fat;
}