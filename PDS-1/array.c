#include <stdlib.h>
#include <stdio.h>
float* read_array(int *n){
    scanf("%d", n);
    float *v= NULL;
    v= (float *)malloc(*n * sizeof(float));
    for(int i=0; i<*n; i++){
        scanf("%f", (v+i));
    }
return v;
}
/*(void read_array(float **v, int *n){
    scanf("%d", n);
    *v= (float *)malloc(*n * sizeof(float));
    for(int i=0; i<*n; i++){
        scanf("%f", (*v)+i);
    }  
}
*/
void free_array(float *array){
    free(array);
    array = NULL;
}