#include <stdio.h>
/*tudo que n for 0 e vdd, e tudo q for 0 e falso
    -op relacionais:
'>' maior que; '<' menor que; '>=' maior ou igual a; '<=' menor ou igual a; '==' igual a; '!=' diferente de;
int a=3; float x= 1.5; -> (a!=x) =vdd; (a/2.0==x)=vdd; (a/2==x)falso; (a)=vdd; (a-2*x)=falso;
    -op logicos:
'&&' and(e) as 2 precisam ser vdd para ser vdd; '||' or(ou) apenas 1 precisa ser vdd para ser vdd; '!' negacao logica - oq e vdd vira falso;
int a=3; float x= 1.5; -> ((a/2==x)&&(a>2)) = falso; ((x<=a)&&(a>=2*x)) = vdd; (!(a/3<=x)) = falso; (a&&x) = vdd;((a-2*x)||(x<=a/2))= falso
*/