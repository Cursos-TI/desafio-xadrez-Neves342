#include <stdio.h>

//Aluna: Yasmin Neves
//Bem vinda(o) ao jogo de xadrez! Este código simula movimentos de peças de xadrez usando recursividade e loops complexos.  

/* Fiz mais umas pesquisas para entender melhor o comando
    Simulação de movimentação de peças de xadrez com recursividade e loops complexos:
    - Torre: 5 casas para a direita (recursivo)
    - Bispo: 5 casas na diagonal para cima e à direita (recursivo + loops aninhados)
    - Rainha: 8 casas para a esquerda (recursivo)
    - Cavalo: 2 casas para cima e 1 para a direita (loops aninhados com múltiplas variáveis e controle de fluxo)
*/

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento do Bispo (chamada pelo loop aninhado)
void moverBispoDiagonal(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoDiagonal(casas - 1);
}

// Função para o movimento do Bispo usando loops aninhados e recursividade
void moverBispo(int casas_verticais, int casas_horizontais) {
    // Loop externo: movimento vertical
    for (int i = 1; i <= casas_verticais; i++) {
        // Loop interno: movimento horizontal (simulando a diagonal)
        for (int j = 1; j <= casas_horizontais; j++) {
            // Chama a função recursiva para cada passo diagonal
            moverBispoDiagonal(1);
        }
 }
}

// Função para o movimento do Cavalo usando loops aninhados e múltiplas variáveis
void moverCavalo() {
    int casas_cima = 2;
    int casas_direita = 1;
    int movimentos = 0;

    printf("\nMovimento do Cavalo:\n");
    // Loop externo: movimento para cima
    for (int i = 1; i <= casas_cima; i++) {
        printf("Cima\n");
        movimentos++;
        // Se já fez dois movimentos para cima, faz o movimento para a direita
        if (i == casas_cima) {
            // Loop interno: movimento para a direita (pode ser expandido para múltiplas casas se necessário)
            for (int j = 1; j <= casas_direita; j++) {
                // Exemplo de uso de continue/break para controle de fluxo
                if (j > 1) continue; // Não necessário aqui, mas ilustrativo
                printf("Direita\n");
                movimentos++;
                break; // Sai após um movimento para a direita
            }
        }
    }
    // Comentário: O movimento do Cavalo é sempre "Cima", "Cima", "Direita"
}

int main() {
    // Movimento da Torre: 5 casas para a direita (recursivo)
    int casas_torre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casas_torre);

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (recursivo + loops aninhados)
    int casas_bispo = 5;
    printf("\nMovimento do Bispo:\n");
    moverBispo(casas_bispo, 1);

    // Movimento da Rainha: 8 casas para a esquerda (recursivo)
    int casas_rainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casas_rainha);

    // Movimento do Cavalo: 2 casas para cima e 1 para a direita (loops aninhados)
    moverCavalo();

    return 0;
}
