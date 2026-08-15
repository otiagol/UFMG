#include <stdio.h>
/* v=1 f=0
'&'=and= os 2 precisam ser 1 para ser vdd(1)(e)
'|'=or= apenas um precisa ser 1 para ser vdd(1)(ou)
'^'=xor= quando sao iguais (1 e 1 ou 0 e 0) é falsa(0) mas quando alternam (1 e 0 ou 0 e 1 ) e vdd(1)
'~'= negacao bit a bit, ~x = -(x + 1)
'>>' = deslocamento a direita
'<<' = deslocamento a esquerda
*/
int main(){
    int a=6; //ex:0000110
    a= a<<1; // 0001100 todos os bits se deslocaram a esquerda , agr vale 12 (multiplicou por 2^1)
     printf("deslocamento a esquerda= %d\n",a);
    a= a>>2; // 0000011 todos os bits vao deslocar 2 casas a direita, agr vale 3 (dividiu por 2^2)
     printf("deslocamento a direita= %d\n",a);
    a= a|6; //  compara bit a bit de 3(valor de a agr) e 6 com a regra do or(ou)-> 0000111=7
     printf("or= %d\n",a);
    a= a&12; // compara bit a bit de 7(valor atual de a) e 12 com a regra do and(e)-> 0000100 =4
     printf("and= %d\n",a);
    a= a^7; // compara bit a bit de 4(valor atual de a) e 7 com a regra do xor-> 0000011=3
     printf("xor= %d\n",a);
    a=~a; // inverte todos os bits-> 1111100 = -4
     printf("negacao= %d\n",a);
    return 0;
}