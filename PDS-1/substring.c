#include <stdio.h>
#include <string.h>
int main(){
    char a[51];
    char b[51];
    fgets(a, 51, stdin);
    fflush(stdin);
    fgets(b, 51, stdin);
    a[strcspn(a,"\n")]='\0';
    b[strcspn(b,"\n")]='\0';
    int tamA=strlen(a);
    int tamB=strlen(b);
    /*if(tamA>=tamB && tamb>0){//condicoes para 'b' caber em 'a' e existir
        for(int i=0; i<=(tamA-tamB); i++){
            int k;
            for(k=0; k<tamB;k++){//outro laco pra verificar sem exisate 'b' em 'a', tem q rodar tamB vezes pq queremos verificar se b[] esta completamente em a
                if(a[k+i]!=b[k]){//a[k+i] o i nesse caso vai ser o ponto de partida tipo o 0, e ele vai parar e o k vai aumentar
                    break;
                }
            }
            if(k==tamB){//se saiu do laço de repeticao anterior sem ser pelo break, ent k==tamB
                printf("E substring");
                return 0;//retorno cedo
            }
        }
    }
    printf("Nao e substring");//se chegou aqui dps do if ent n tem como b estar em a*/
    if(strstr(a,b)!=NULL){
       printf("E substring"); 
    }else{
        printf("Nao e substring");      
    }
    return 0;
}
