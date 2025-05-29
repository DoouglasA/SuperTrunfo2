#include <stdio.h>

// Constantes para o número de movimentos de cada peça
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_RAINHA 8
#define MOVIMENTOS_CAVALO_VERTICAL 2
#define MOVIMENTOS_CAVALO_HORIZONTAL 1

// Função recursiva para movimento da Torre
void movimentoTorreRecursivo(int casasRestantes) {
    // Caso base: quando não há mais casas para mover
    if (casasRestantes <= 0) {
        return;
    }
    
    // Movimento para direita e chamada recursiva
    printf("Direita\n");
    movimentoTorreRecursivo(casasRestantes - 1);
}

void movimentoTorre() {
    printf("\n=== Movimento da Torre (Recursivo) ===\n");
    movimentoTorreRecursivo(MOVIMENTOS_TORRE);
}

// Função recursiva para movimento do Bispo
void movimentoBispoRecursivo(int casasRestantes) {
    // Caso base: quando não há mais casas para mover
    if (casasRestantes <= 0) {
        return;
    }
    
    // Movimento diagonal e chamada recursiva
    printf("Cima, Direita\n");
    movimentoBispoRecursivo(casasRestantes - 1);
}

// Função com loops aninhados para movimento do Bispo
void movimentoBispoLoops() {
    printf("\n=== Movimento do Bispo (Loops Aninhados) ===\n");
    // Loop externo para movimento vertical
    for (int vertical = 1; vertical <= MOVIMENTOS_BISPO; vertical++) {
        // Loop interno para movimento horizontal
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
}

void movimentoBispo() {
    printf("\n=== Movimento do Bispo (Recursivo) ===\n");
    movimentoBispoRecursivo(MOVIMENTOS_BISPO);
    movimentoBispoLoops();
}

// Função recursiva para movimento da Rainha
void movimentoRainhaRecursivo(int casasRestantes) {
    // Caso base: quando não há mais casas para mover
    if (casasRestantes <= 0) {
        return;
    }
    
    // Movimento para esquerda e chamada recursiva
    printf("Esquerda\n");
    movimentoRainhaRecursivo(casasRestantes - 1);
}

void movimentoRainha() {
    printf("\n=== Movimento da Rainha (Recursivo) ===\n");
    movimentoRainhaRecursivo(MOVIMENTOS_RAINHA);
}

// Função com loops complexos para movimento do Cavalo
void movimentoCavalo() {
    printf("\n=== Movimento do Cavalo (Loops Complexos) ===\n");
    
    int movimento_vertical = 0;
    int movimento_horizontal = 0;
    
    // Loop externo para controlar o movimento completo
    for (int i = 1; i <= MOVIMENTOS_CAVALO_VERTICAL + MOVIMENTOS_CAVALO_HORIZONTAL; i++) {
        // Loop interno com múltiplas condições
        for (int j = 1; j <= 1; j++) {
            // Primeiro move duas casas para cima
            if (movimento_vertical < MOVIMENTOS_CAVALO_VERTICAL) {
                printf("Cima\n");
                movimento_vertical++;
                continue;
            }
            
            // Depois move uma casa para direita
            if (movimento_horizontal < MOVIMENTOS_CAVALO_HORIZONTAL) {
                printf("Direita\n");
                movimento_horizontal++;
                break;
            }
        }
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