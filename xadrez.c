#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // === Movimento da Torre: 5 casas para a direita ===
    printf("Movimento da Torre:\n");
    int casasTorre = 5;
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // === Movimento do Bispo: 5 casas na diagonal (Cima, Direita) ===
    printf("Movimento do Bispo:\n");
    int casasBispo = 5;
    int i = 1; // contador para WHILE
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    // === Movimento da Rainha: 8 casas para a esquerda ===
    printf("Movimento da Rainha:\n");
    int casasRainha = 8;
    int j = 1; // contador para DO-WHILE
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);
    printf("\n");

    // === Movimento do Cavalo: "L" (2 para baixo + 1 para esquerda) ===
    printf("Movimento do Cavalo:\n");
    int movimentosBaixo = 2; // duas casas para baixo
    int movimentosLado = 1;  // uma casa para a esquerda

    int m = 1; // contador do loop externo (for)
    for (m = 1; m <= movimentosBaixo; m++) {
        printf("Baixo\n");

        // Loop interno para a etapa perpendicular (uma casa à esquerda)
        int n = 1;
        while (n <= movimentosLado) {
            printf("Esquerda\n");
            n++;
        }
    }

    printf("\nFim da simulação de movimentos.\n");

    return 0;
}