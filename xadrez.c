#include <stdio.h>

int main() {
    // Definição das constantes para o número de casas a serem movidas
    const int MOVIMENTO_TORRE = 5;   // Torre: 5 casas para a direita
    const int MOVIMENTO_BISPO = 5;   // Bispo: 5 casas na diagonal (cima e direita)
    const int MOVIMENTO_RAINHA = 8;  // Rainha: 8 casas para a esquerda

    printf("\n=== Simulação do Movimento das Peças de Xadrez ===\n\n");

    // 1. Movimento da Torre usando FOR
    // A torre se move em linhas retas horizontais ou verticais
    printf("Movimento da Torre - 5 casas para a direita (usando FOR):\n");
    for (int i = 1; i <= MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // 2. Movimento do Bispo usando WHILE
    // O bispo se move na diagonal
    printf("Movimento do Bispo - 5 casas na diagonal para cima e à direita (usando WHILE):\n");
    int contador_bispo = 1;
    while (contador_bispo <= MOVIMENTO_BISPO) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    printf("\n");

    // 3. Movimento da Rainha usando DO-WHILE
    // A rainha pode se mover em qualquer direção
    printf("Movimento da Rainha - 8 casas para a esquerda (usando DO-WHILE):\n");
    int contador_rainha = 1;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= MOVIMENTO_RAINHA);

    return 0;
}