#include <stdio.h>
#include <limits.h>
int main() {
    int alt;
    int maior = 0; 
    int menor = INT_MAX; 
    // Um único laço rodando exatamente 15 vezes (de 0 a 14)
    for (int k = 0; k < 15; k++) {
        scanf("%d", &alt);
        // Testa se a altura lida é o novo recorde de MAIOR
        if (alt > maior) {
            maior = alt;
        }
        // Ao mesmo tempo, testa se ela é o novo recorde de MENOR
        if (alt < menor) {
            menor = alt;
        }
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    return 0;
}