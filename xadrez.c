// xadrez.c
#include <stdio.h>

// -------------------------------------------
// Função recursiva para o movimento da Torre
// Move-se 5 casas para a Direita
// -------------------------------------------
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// -------------------------------------------
// Função recursiva para o movimento da Rainha
// Move-se 8 casas para a Esquerda
// -------------------------------------------
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// -------------------------------------------
// Função recursiva para o movimento do Bispo
// Move-se 5 casas na diagonal (Cima Direita)
// Além disso, simula com loops aninhados: vertical (externo) e horizontal (interno)
// -------------------------------------------
void moverBispo(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) return;

    // Loop vertical (externo)
    for (int i = 0; i < 1; i++) {
        // Loop horizontal (interno)
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(passoAtual + 1, totalPassos);
}

// -------------------------------------------
// Movimento do Cavalo em "L": 2 casas para cima e 1 para a direita
// Usando loops aninhados com múltiplas variáveis, break e continue
// -------------------------------------------
void moverCavalo(int movimentos) {
    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < movimentos; i++) {
        int casasVerticais = 2;
        int casasHorizontais = 1;
        
        // Movimento vertical
        for (int v = 0; v < casasVerticais; v++) {
            if (v == 1 && i % 2 == 0) continue; // exemplo de uso de continue
            printf("Cima\n");
        }

        // Movimento horizontal com condição extra
        int h = 0;
        while (h < casasHorizontais) {
            if (h > 1) break;
            printf("Direita\n");
            h++;
        }
    }
    printf("\n");
}

int main() {
    // ------------------------
    // Torre
    // ------------------------
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // ------------------------
    // Bispo
    // ------------------------
    printf("Movimento do Bispo:\n");
    moverBispo(1, 5);
    printf("\n");

    // ------------------------
    // Rainha
    // ------------------------
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // ------------------------
    // Cavalo
    // ------------------------
    moverCavalo(1); // Um movimento em "L"

    return 0;
}
