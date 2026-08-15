#include <stdio.h>
/*persistencia de informacoes, pode gravar informacoes valiosas em um arquivo dps q o progama terminar elas serao guardadas no hd/ssd(hardware)
por trabalhar c o hd/ssd as informacoes passam de 8gb pra 1 tera(caso do meu pc) mas em contra partida o progama fica mais lento por exatamente n trabalhar c a ram
*/
int main(){
    FILE *arq;
    int n=0, tam=0;
    char *str;
    //opcoes de abertuda do arq c fopen: r(le o arq), w(limpa o arq(se o arq n existe ele cria um vazio) e deixa vc escrever nele), a(add conteudo ao arq)
    arq = fopen("arquivo_hipotetico.txt","r");
    //lembrar q quando o arquivo esta aberto ele lembra qual posicao ele esta, ele e lido em ordem e lembra aonde parou
    feof(arq);//retorna 0 se o arquivo n acabou
    fscanf(arq, "%d", &n);//scanf so q com arquivo
    fclose(arq);//tenho q dar fclose se quiser fazer outra coisa c o arq
    arq = fopen("arquivo_hipotetico.txt","w");
    fprintf(arq, "plu");//escreve no arquivo
    fgets(str, "tam", arq);
return 0;
}