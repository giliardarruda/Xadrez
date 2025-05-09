#include <stdio.h>

// Protótipos das funções recursivas
void moverTorreRecursivo(int casas_restantes);
void moverBispoRecursivo(int casas_restantes);
void moverRainhaRecursivo(int casas_restantes);
void moverBispoComLoops(int casas_vertical, int casas_horizontal);

int main() {
    // Definição das constantes para o número de casas a serem movidas
    const int MOVIMENTO_TORRE = 5;    // Torre: 5 casas para a direita
    const int MOVIMENTO_BISPO = 5;    // Bispo: 5 casas na diagonal (cima e direita)
    const int MOVIMENTO_RAINHA = 8;   // Rainha: 8 casas para a esquerda
    
    // Definição das constantes para o movimento do Cavalo
    const int MOVIMENTO_CAVALO_CIMA = 2;    // Cavalo: 2 casas para cima
    const int MOVIMENTO_CAVALO_DIREITA = 1; // Cavalo: 1 casa para a direita

    printf("\n=== Simulação do Movimento das Peças de Xadrez ===\n\n");

    // 1. Movimento da Torre usando recursividade
    // A torre se move em linhas retas horizontais ou verticais
    printf("Movimento da Torre - 5 casas para a direita (usando recursividade):\n");
    moverTorreRecursivo(MOVIMENTO_TORRE);
    printf("\n");

    // 2. Movimento do Bispo usando recursividade
    // O bispo se move na diagonal
    printf("Movimento do Bispo - 5 casas na diagonal para cima e à direita (usando recursividade):\n");
    moverBispoRecursivo(MOVIMENTO_BISPO);
    printf("\n");

    // 3. Movimento da Rainha usando recursividade
    // A rainha pode se mover em qualquer direção
    printf("Movimento da Rainha - 8 casas para a esquerda (usando recursividade):\n");
    moverRainhaRecursivo(MOVIMENTO_RAINHA);
    printf("\n");
    
    // 4. Movimento do Cavalo usando loops aninhados complexos
    // O cavalo se move em "L": duas casas em uma direção e uma casa perpendicularmente
    // Neste caso: duas casas para cima e uma para a direita
    printf("Movimento do Cavalo - movimento em 'L': 2 casas para cima e 1 para a direita:\n");
    
    // Contadores para o movimento vertical e horizontal
    int vertical = 0;
    int horizontal = 0;
    
    // Loop externo para controlar o número total de passos (3 no total: 2 para cima + 1 para direita)
    for (int passo = 1; passo <= MOVIMENTO_CAVALO_CIMA + MOVIMENTO_CAVALO_DIREITA; passo++) {
        // Loop interno com condições complexas para determinar a direção do movimento
        for (int direcao = 0; direcao < 1; direcao++) {
            // Verifica se ainda precisa mover para cima
            if (vertical < MOVIMENTO_CAVALO_CIMA) {
                printf("Cima\n");
                vertical++;
                // Usa continue para pular o resto do loop e avançar para a próxima iteração
                continue;
            }
            
            // Verifica se já completou o movimento vertical e precisa mover para a direita
            if (vertical == MOVIMENTO_CAVALO_CIMA && horizontal < MOVIMENTO_CAVALO_DIREITA) {
                printf("Direita\n");
                horizontal++;
                // Usa break para sair do loop interno após completar o movimento horizontal
                break;
            }
        }
        
        // Se já completou todos os movimentos, sai do loop externo
        if (vertical == MOVIMENTO_CAVALO_CIMA && horizontal == MOVIMENTO_CAVALO_DIREITA) {
            break;
        }
    }
    printf("\n");
    
    // 5. Movimento do Bispo usando loops aninhados
    // O bispo se move na diagonal (cima e direita)
    printf("Movimento do Bispo - 5 casas na diagonal para cima e à direita (usando loops aninhados):\n");
    moverBispoComLoops(MOVIMENTO_BISPO, MOVIMENTO_BISPO);
    
    return 0;
}

// Função recursiva para simular o movimento da Torre
void moverTorreRecursivo(int casas_restantes) {
    // Caso base: se não há mais casas para mover, retorna
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime a direção do movimento atual
    printf("Direita\n");
    
    // Chamada recursiva para mover as casas restantes
    moverTorreRecursivo(casas_restantes - 1);
}

// Função recursiva para simular o movimento do Bispo
void moverBispoRecursivo(int casas_restantes) {
    // Caso base: se não há mais casas para mover, retorna
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime a direção do movimento atual
    printf("Cima, Direita\n");
    
    // Chamada recursiva para mover as casas restantes
    moverBispoRecursivo(casas_restantes - 1);
}

// Função recursiva para simular o movimento da Rainha
void moverRainhaRecursivo(int casas_restantes) {
    // Caso base: se não há mais casas para mover, retorna
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime a direção do movimento atual
    printf("Esquerda\n");
    
    // Chamada recursiva para mover as casas restantes
    moverRainhaRecursivo(casas_restantes - 1);
}

// Função com loops aninhados para simular o movimento do Bispo
void moverBispoComLoops(int casas_vertical, int casas_horizontal) {
    // Loop externo para o movimento vertical
    for (int v = 0; v < casas_vertical; v++) {
        // Loop interno para o movimento horizontal
        for (int h = 0; h < 1; h++) {
            printf("Cima, Direita\n");
        }
    }
}