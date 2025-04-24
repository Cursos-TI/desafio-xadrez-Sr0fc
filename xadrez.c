// xadrez.c
#include <stdio.h>

int main() {
    // --------------------------
    // Movimento da TORRE
    // --------------------------
    // Utilizando estrutura de repetição FOR
    // A Torre se moverá 5 casas para a direita
    int movimentosTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentosTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // --------------------------
    // Movimento do BISPO
    // --------------------------
    // Utilizando estrutura de repetição WHILE
    // O Bispo se moverá 5 casas na diagonal: Cima, Direita
    int movimentosBispo = 5;
    int j = 0;
    printf("Movimento do Bispo:\n");
    while (j < movimentosBispo) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    // --------------------------
    // Movimento da RAINHA
    // --------------------------
    // Utilizando estrutura de repetição DO-WHILE
    // A Rainha se moverá 8 casas para a esquerda
    int movimentosRainha = 8;
    int k = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k < movimentosRainha);

    return 0;
}

