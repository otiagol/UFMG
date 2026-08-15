#include <stdio.h>
int main(){
    float x= 789.54 * 1.0056;
     x= (x + 303.20) * 1.0056;
     x= (x - 58.25) * 1.0056;
    printf("%.2f\n", x);
    return 0;

}