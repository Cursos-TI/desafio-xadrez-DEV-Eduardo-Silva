#include <stdio.h>

int main() {

   
     // =================================================
    // DESAFIO XADREZ – MATECHECK
    // =================================================

    int i, j;

    // ===============================
    // 🏅 NIVEL NOVATO
    // ===============================
    printf("\n=== MATECHECK - NIVEL NOVATO ===\n");

    // BISPO – 5 casas diagonal superior direita
    printf("\nBispo:\n");
    for (i = 0; i < 5; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // TORRE – 5 casas para a direita
    printf("\nTorre:\n");
    i = 0;
    while (i < 5) {
        printf("Direita\n");
        i++;
    }

    // RAINHA – 8 casas para a esquerda
    printf("\nRainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);

    // ===============================
    // 🏅 NIVEL AVENTUREIRO
    // ===============================
    printf("\n=== MATECHECK - NIVEL AVENTUREIRO ===\n");
    printf("\nCavalo:\n");

    // Cavalo em L: 2 para baixo e 1 para esquerda
    for (i = 0; i < 2; i++) {
        printf("Baixo\n");

        for (j = 0; j < 1; j++) {
            printf("Esquerda\n");
        }
    }

    // ===============================
    // 🥇 NIVEL MESTRE
    // ===============================
    printf("\n=== MATECHECK - NIVEL MESTRE ===\n");

    // -------- FUNÇÕES RECURSIVAS --------
    void moverDireita(int passos) {
        if (passos == 0) return;
        printf("Direita\n");
        moverDireita(passos - 1);
    }

    void moverEsquerda(int passos) {
        if (passos == 0) return;
        printf("Esquerda\n");
        moverEsquerda(passos - 1);
    }

    void moverBispo(int passos) {
        if (passos == 0) return;
        printf("Cima\n");
        printf("Direita\n");
        moverBispo(passos - 1);
    }

    // BISPO – recursivo
    printf("\nBispo (recursivo):\n");
    moverBispo(5);

    // TORRE – recursivo
    printf("\nTorre (recursivo):\n");
    moverDireita(5);

    // RAINHA – recursivo
    printf("\nRainha (recursivo):\n");
    moverEsquerda(8);

    // CAVALO – loops com variáveis múltiplas, break e continue
    printf("\nCavalo (loops avancados):\n");

    for (i = 0, j = 0; i < 3; i++, j++) {

        if (i == 0) {
            printf("Cima\n");
            continue;
        }

        if (i == 1) {
            printf("Cima\n");
            continue;
        }

        if (j == 2) {
            printf("Direita\n");
            break;
        }
    }

    return 0;
}
