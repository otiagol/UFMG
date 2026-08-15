 #include <stdio.h>
 #include <math.h>
 float laplace(float x, float u, float b){
    float y= (1.0/(2.0*b))*exp(-fabs(x-u)/b);
    return y;
 }