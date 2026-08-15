#include <string.h>
void concatena(char *a, unsigned int n1, char *b,unsigned int n2, char *s){// dentro dos parametros de uma funcao char *a=char a[]
    /*unsigned int i=0, k=0;
    s[n1+n2];
    while(i<n1){// n podemos copiar o \0
        s[i]=a[i];
        i++;//o i vai ser diferente do ultimo lugar reservado na memoria no final do laco
    }
    while(k<=n2){//queremos o \0
        s[i]=b[k];
        k++;
        i++;
    }*/
   // Copia a string A inteira para dentro do S (já substitui o que estiver lá)
    strcpy(s, a);
    // Concatena (cola no final) a string B na string S
    strcat(s, b);
}