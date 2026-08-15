unsigned int inverte(unsigned int n){
    unsigned int ni=0;
    unsigned int un=0;
    while(n>0){
        un=n%10;
        ni*=10;
        ni=(ni+un);
        n/=10;
    }
return ni;
}