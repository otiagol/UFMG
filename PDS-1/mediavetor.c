float calculamedia(int n, float v[]){
    float media=0;
    for(int i=0; i<n; i++){
        media+=v[i];
    }
    return (media/n);
}