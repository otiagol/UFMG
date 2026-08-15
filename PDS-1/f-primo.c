int primo(int n){
    int k=2;
    int resto;
    if(n<=1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    while(k<n){
        resto=n%k;
        k++;
        if(resto==0){
           return 0; 
        }
    }
return 1;
}