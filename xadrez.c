// xadrez.c
#include <stdio.h>

int main() {
    // -----------------------------------
    // Movimento da TORRE - FOR
    // -----------------------------------
    int movimentosTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentosTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // -----------------------------------
    // Movimento do BISPO - WHILE
    // -----------------------------------
    int movimentosBispo = 5;
    int j = 0;
    printf("Movimento do Bispo:\n");
    while (j < movimentosBispo) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    // -----------------------------------
    // Movimento da RAINHA - DO-WHILE
    // -----------------------------------
    int movimentosRainha = 8;
    int k = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k < movimentosRainha);
    printf("\n");

    // -----------------------------------
    // Movimento do CAVALO - LOOPS ANINHADOS
    // -----------------------------------
    // O cavalo se move duas casas para baixo e uma casa para a esquerda
    // Utilizaremos:
    // - Um loop for externo para representar múltiplos movimentos "L"
    // - Um loop while interno para simular as duas casas para baixo
    int movimentosCavalo = 1; // número de movimentos em "L"
    int passosParaBaixo = 2;
    int passosParaEsquerda = 1;

    printf("Movimento do Cavalo:\n");
    for (int l = 0; l < movimentosCavalo; l++) {
        // Loop interno para descer duas casas
        int b = 0;
        while (b < passosParaBaixo) {
            printf("Baixo\n");
            b++;
        }
        // Depois das duas casas para baixo, uma casa para esquerda
        printf("Esquerda\n");
    }

    return 0;
}
