#include <stdio.h>
#include <math.h>
float gumbel(float x, float u, float b){
    float z= (x-u)/b;
    float y=(1.0/b) * exp(-(z+exp(-z)));
    return y;
}