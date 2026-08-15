float arredonda(float n){
    float f= (n- (int)n);
    if(f<0.25){
        return (int)n;
    }else if(f<0.75){
        return ((int)n)+0.5;
    }else{
        return (int)(n+0.5);
    }
}
 void arredondaNotas(float *endNota1, float *endNota2, float *endNota3){
    arredona(*endNota1);
    arredona(*endNota2);
    arredona(*endNota3);
 }