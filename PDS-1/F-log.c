#include <math.h>
float loglcdf(float x, float a, float b){
    float F;
    if(x>=0){
        F=1/(1+pow((x/a), b));
    }else{
        F=0;
    }
return F;
}