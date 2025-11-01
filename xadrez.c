#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// === Função recursiva para mover a Torre ===
void moverTorre(int casas) {
    if (casas <= 0) return; // condição de parada
    printf("Torre: Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// === Função recursiva para mover a Rainha ===
void moverRainha(int casas) {
    if (casas <= 0) return; // condição de parada
    printf("Rainha: Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// === Função recursiva para mover o Bispo com loops aninhados ===
void moverBispo(int casas) {
    if (casas <= 0) return;
    
    // Loop vertical (externo)
    for (int i = 1; i <= 1; i++) { // simula 1 passo vertical por chamada recursiva
        // Loop horizontal (interno)
        for (int j = 1; j <= 1; j++) { // simula 1 passo horizontal
            printf("Bispo: Cima, Direita\n");
        }
    }
    
    moverBispo(casas - 1); // chamada recursiva
}

// === Função para mover o Cavalo com loops complexos em "L" (2 cima + 1 direita) ===
void moverCavalo(int passos) {
    int i = 1;
    while (i <= passos) {
        int j = 1;
        while (j <= 2) { // duas casas para cima
            printf("Cavalo: Cima\n");
            j++;
        }
        printf("Cavalo: Direita\n"); // uma casa à direita
        i++;
    }
}

int main() {
    printf("=== Movimentos Complexos de Xadrez ===\n\n");

    // Torre: mover 5 casas para a direita (recursivo)
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Bispo: mover 5 casas na diagonal (recursivo + loops aninhados)
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // Rainha: mover 8 casas para a esquerda (recursivo)
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Cavalo: mover 3 vezes em "L" para cima e à direita (loops complexos)
    printf("Movimento do Cavalo:\n");
    moverCavalo(3);
    printf("\n");

    printf("Fim da simulação de movimentos.\n");

    return 0;
}