 int mdc(int a, int b){
    int mdc=0;
    for(int k=1;k<=b && k<=a; k++){
        if(a%k==0 && b%k==0){
            mdc=k;
        }
    }
return mdc;
 }