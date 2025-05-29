#include <stdio.h>

// Constantes para o número de movimentos de cada peça
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_RAINHA 8
#define MOVIMENTOS_CAVALO_VERTICAL 2
#define MOVIMENTOS_CAVALO_HORIZONTAL 1

void movimentoTorre() {
    printf("\n=== Movimento da Torre ===\n");
    // Usando for para mover a Torre 5 casas para a direita
    for (int i = 1; i <= MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }
}

void movimentoBispo() {
    printf("\n=== Movimento do Bispo ===\n");
    // Usando while para mover o Bispo 5 casas na diagonal (cima e direita)
    int casas = 1;
    while (casas <= MOVIMENTOS_BISPO) {
        printf("Cima, Direita\n");
        casas++;
    }
}

void movimentoRainha() {
    printf("\n=== Movimento da Rainha ===\n");
    // Usando do-while para mover a Rainha 8 casas para a esquerda
    int casas = 1;
    do {
        printf("Esquerda\n");
        casas++;
    } while (casas <= MOVIMENTOS_RAINHA);
}

void movimentoCavalo() {
    printf("\n=== Movimento do Cavalo ===\n");
    // Loop externo (for) para movimento vertical (2 casas para baixo)
    for (int i = 1; i <= MOVIMENTOS_CAVALO_VERTICAL; i++) {
        printf("Baixo\n");
    }
    
    // Loop interno (while) para movimento horizontal (1 casa para esquerda)
    int movimentos_horizontais = 1;
    while (movimentos_horizontais <= MOVIMENTOS_CAVALO_HORIZONTAL) {
        printf("Esquerda\n");
        movimentos_horizontais++;
    }
}

int main() {
    printf("Simulacao de Movimentos de Pecas de Xadrez\n");
    printf("==========================================\n");

    // Executa o movimento de cada peça
    movimentoTorre();
    movimentoBispo();
    movimentoRainha();
    movimentoCavalo();

    return 0;
} 
