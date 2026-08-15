#include <stdio.h>
int main(){
    float pib= 25 * 1.84 * 1.84;
    float ppb= 122 - pib;
    float pio= 18.5 * 1.76 * 1.76;
    float pgo= pio - 45;
    printf("%.1f %.1f\n", ppb, pgo);
    return 0;
}