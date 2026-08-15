#include <stdio.h>
/* 
persistencia de informacoes, pode gravar informacoes valiosas em um arquivo dps q o progama terminar elas serao guardadas no hd/ssd(hardware)
por trabalhar c o hd/ssd as informacoes passam de 8gb pra 1 tera(caso do meu pc) mas em contra partida o progama fica mais lento por exatamente n trabalhar c a ram
opcoes de abertuda do arq c fopen: r(le o arq), w(limpa o arq(se o arq n existe ele cria um vazio) e deixa vc escrever nele), a(add conteudo ao arq)
*/
#define max 100
int main(){
    //file e tipo um typedef struct
    FILE *arq, *arqw;//tipo ponteiro
    float m1[max][max], m2[max][max];
    int n=0, m=0, i=0, k=0;// dimensoes da matriz hipotetica do meu arquivo hipotetico
    //ja q hipoteticamente meu arq ta na msm pasta do progama n precisa indicar o caminho, se n precisava falar qual pasta estava 
    arq = fopen("matriz_float.txt", "r");//le o arquivo q hipotetico da meu disco rigido
    arqw= fopen("soma_matrizes.txt", "w");//criei o arquivo e vou escrever nele
    //fscanf(stdin(lugar da onde ele pega os dados), "%d %d", &n, &m);=scanf normal
    fscanf(arq, "%d %d", &n, &m);//le o arquivo em ordem
    for(i=0; i<n; i++){
        for(k=0; k<m; k++){
            fscanf(arq, "%f", &m1[i][k]);
        }
    }
    for(i=0; i<n; i++){
        for(k=0; k<m; k++){
            fscanf(arq, "%f", &m2[i][k]);
        }
    }
    for(i=0; i<n; i++){
        for(k=0; k<m; k++){
            m1[i][k] += m2[i][k];
        }
    }
    for(i=0; i<n; i++){
        for(k=0; k<n; k++){
            fprintf(arqw, "%f ", m1[i][k]);//deixa escrer no arquivo 
        }
        fprintf(arqw, "\n");
    }
    fclose(arqw);
    fclose(arq);//enquanto o arq estiver aberto ele esta bloqueado, ent se quiser fazer outra coisa c ele n vai dar certo
}