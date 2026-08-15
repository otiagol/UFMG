#include <string.h>
void removechar(char A[],unsigned tamA, char c){
    /*for(unsigned i=0; i<tamA; i++){
        if(A[i]==c){
            for(i; i<tamA; i++){// apenas < pq se n vai copiar lixo e de qualquer jeito vai acabar no tamA-1
            A[i]=A[i+1];
        }
            break;
        }
    }*/
   char alvo[2];
   alvo[0]= c;
   alvo[1]= '\0';
   unsigned i = strcspn(A, alvo);
   if(i <tamA){//se achar nada ele devolve tamA
     for(i; i<tamA; i++){// apenas < pq se n vai copiar lixo e de qualquer jeito vai acabar no tamA-1
            A[i]=A[i+1];
        }
    }
}