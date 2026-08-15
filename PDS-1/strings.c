#include <stdio.h>
/* sequencia de caracteres q termina c um '\0' - elas sao ponteiros 
VAR | END | CONT 
    |  1   |   o -> 'a'     sitaxe: char variavel[] = "...";
    |  2   |   l -> 'i'     
    |  3   |   a -> 'o' -> '\0'     
    |  4   |   !      
    |  5   |   /0   
msg |  6   |   END1        
*/
void main(){
    // fgets(nome_do_vetor, tamanho_maximo, origem_da_leitura); ele le a linha toda diferente do scanf q para no ' ', add o '\0' no ultimo endereco de memoria acionado automaticament 
    char nome[50];
    fgets(nome, 50, stdin);
}
void ImprimeStr(char s[]){//simula o printf c %s
    int i=0;
    printf("\n");
    while(s[i] != '\0'){
        printf("%c", s[i]);
        i++;
    }
}
int main(){
    char msg[]="ola!";
    //o espaco reservado para string vai igual ao tamanho da palavra + 1, ent 5 de 0 a 4, mas podemos deminuir ela e aumentar manipulando o conteudo dos enderecos, podemos aumentar tbm assi,m : [1000] agr tem mil lugares reservados
    printf("\n %s", msg);
    //*(msg+0)= 'a';
    msg[0] = 'a';
    //*(msg+2)= 'o';
    msg[2] = 'o';
    printf("\n %s", msg);
    msg[1]='i';
    msg[2]='\0';
    ImprimeStr(msg);
    return 0;
}   