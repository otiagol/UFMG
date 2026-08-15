#include <stdio.h>
typedef struct ponto{
    float x, y;
}ponto;
typedef struct retangulo{
    ponto se, id;
}retangulo;
void RcbPtRet(retangulo *r){// para mexer no r da funcao main, e n so fazer uma copia dele q so existe dentro da funcao, mandamos o endereco de r e n r, e so precisa mandar o end de r
    scanf("%f %f", &r->se.x, &r->se.y);// =&(*r).se.x, &(*r).se.y
    do{
        scanf("%f %f", &r->id.x, &r->id.y);
         if(r->id.x <= r->se.x || r->id.y >= r->se.y){
            printf("Coordenada Invalida ");
        }
    }while(r->id.x <= r->se.x || r->id.y >= r->se.y);
}
int tadentro(retangulo r, ponto p){
    if(r.se.x<=p.x && r.id.x>=p.x && r.se.y>=p.y && r.id.y<=p.y){
        return 1;
    }else{
    return 0;
    }
}
int main(){
    retangulo r;
    ponto p;
    RcbPtRet(&r);
    scanf("%f %f", &p.x, &p.y);
    if(tadentro(r, p)){//se der 1 e vdd e se der 0 e falso e sai
        printf("O ponto pertence ao retangulo\n");
    }else{
        printf("O ponto nao pertence ao retangulo\n");
    }
return 0;
}