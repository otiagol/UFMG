#include <stdio.h>
/* operadores de memoria                                                                                                       memoria
&varaivel -> retorno o endereço de memoria onde a variavel esta guardada                                               endereco   |    conteudo
%p -> foramata enderecos para impressao                                                                              a->  201     |     10->11->22(guarda '10' dps da linha 17 , '11' dps da linha 18 e '22' dps da linha 20)
tipo*variavel -> declara que a variavel armazena enderecos de memoria com conteudo tipo(:int,char,float)             p->  202     |     201       (guarda o endereco de a dps da linha 13)   
*endereco -> acessa o conteudo da memoria no endereco                                                                x->  203     |     201       (x existe temporariamente, apenas enquanto a funcao dobrar for usada)
ex:                                                                                                                       204     |                                                            
  */
 void dobrar(int*x){ 
        *x= *x * 2;
    }
 int main(){
    int a;
    int*p;  //p agr armazena enderecos de memoria
    //*(&a)=conteudo de a
    p= &a;  //p recebe e guarda o endereco de a  
    //&(*p)= &a = p
    printf("%p %p\n", &a , p);
    *p=10;  // vai ate o endereço de p e muda o conteudo para 10, mas como p guarda o endereço de a, ele vai para a muda o conteudo de a 
    a=*p+1; //(agr 'a' e igual a 11) tbm poderia ter escrito: a=a+1; ja q a=*p
    printf("%d %d \n", a, *p);
    dobrar(&a);
    printf("%d %d \n", a , *p);
    return 0;
}
// ponteiros sao utilizados principalmente para "conseguir dar varios return" de uma funcao, a funcao com ponteiro n precisa retornar nada(void) pq ela ja ta mudando o conteudo direto pelo endereco
