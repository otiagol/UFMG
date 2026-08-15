#include <math.h>
int codigoDeArea(unsigned int number){
    number/pow(10,8);
return number;
}
int parEmImpar(unsigned int number){
    if(number%2==0){
return number+1;
    }else{
return number;
    }
}
 int par(unsigned int number){
    if(number%2!=0){
return 0;
    }else{
return 1;
    }
}