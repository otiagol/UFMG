#include <stdio.h>
//incremento, decremento
void sufixo(int a, int b){ //primeiro ocorre a conta e so dps o incremento/decremento 
    int c= a++ + b;//incremento 
   // int c= a-- +b;//decremento
   printf("sufixo-> c:%d a:%d\n", c, a);
}
void prefixo(int a, int b){ //primeiro ocorre o incremento/decremento e dps a conta
    int c= ++a + b;
    //int c= --a + b;
   printf("prefixo-> c:%d  a:%d\n", c, a);
}
int main(){
    int p= 1, e=8, n= 3, i= 18, s=1;
    p+= 5;// p agr vale 6
    e-=1;// e agr vale 7
    n*= 2;// n agr vale 6
    i/= (s+1);// i vale 9 agr
    printf("%d %d %d %d\n", p, e, n, i);
    int x=2, y=3;
    sufixo(x,y);
    prefixo(x,y);
    return 0;
}