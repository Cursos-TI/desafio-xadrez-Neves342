#include <stdio.h>

/* O que deve ser feito:
    Simulação de movimentação de peças de xadrez:
    - Torre: 5 casas para a direita (usando for)
    - Bispo: 5 casas na diagonal para cima e à direita (usando while)
    - Rainha: 8 casas para a esquerda (usando do-while)
*/

int main() {
    // Movimento da Torre: 5 casas para a direita (for)
    int casas_torre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (while)
    int casas_bispo = 5;
    int contador_bispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (contador_bispo <= casas_bispo) {
        printf("Cima Direita\n");
        contador_bispo++;
    }

    // Movimento da Rainha: 8 casas para a esquerda (do-while)
    int casas_rainha = 8;
    int contador_rainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);

    return 0;
}