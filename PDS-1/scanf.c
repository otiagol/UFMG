#include <stdio.h>
/* scanf("especificador do tipo da variavel", &variavel); possui um *variavel dentro da funcao para conseguir mudar o conteudo que esta no endereço da variavel
   fflush(stdin); limpa o stdin q e onde fica guardado os valores que vao ser utilizados no scanf
ex de coisas interessantes 
int dia, mes, ano;
printf("Digite sua data de nascimento (DD/MM/AAAA): ");
scanf("%d/%d/%d", &dia, &mes, &ano); - o scanf vai ignorar as barras q o usario digitar, mas se o usario digitar sem barras vai dar erro
   */
//ex de como se pode usar scanf em uma funcao
void perguntar_par_impar() {
    int n;
    scanf("%d", &n);
    // ... faz a fofoca toda e imprime se é par ou impar
}
// Recebe o saldo atual como parâmetro
void fazer_saque(float saldo_conta) {
    float valor_saque;
    
    // Usa scanf para pedir informação nova!
    printf("Voce tem R$%.2f. Quanto quer sacar? ", saldo_conta);
    scanf("%f", &valor_saque); 
    
    if (valor_saque <= saldo_conta) {
        printf("Saque liberado!\n");
    }
}
// Devolve um inteiro (int) e não recebe nada ()
int pedir_idade() {
    int idade_digitada;
    printf("Qual a sua idade? ");
    scanf("%d", &idade_digitada);
    
    return idade_digitada; // Entrega o valor pro main!
}