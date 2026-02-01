#include <stdio.h>

/* ==========================
   TORRE – Movimento Recursivo
   ========================== */
void moverTorre(int casas) {
    if (casas == 0)
        return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

/* ==========================
   RAINHA – Movimento Recursivo
   ========================== */
void moverRainha(int casas) {
    if (casas == 0)
        return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

/* ==========================
   BISPO – Recursividade + Loops Aninhados
   ========================== */
void moverBispo(int casas) {
    if (casas == 0)
        return;

    /* Loop externo: vertical */
    for (int v = 0; v < 1; v++) {
        printf("Cima ");

        /* Loop interno: horizontal */
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}

/* ==========================
   CAVALO – Loops Complexos
   Movimento em L:
   2 para cima, 1 para direita
   ========================== */
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    int cima = 0;
    int direita = 0;

    for (int i = 0; i < 3; i++) {

        /* Duas casas para cima */
        if (cima < 2) {
            printf("Cima\n");
            cima++;
            continue;
        }

        /* Uma casa para a direita */
        if (direita < 1) {
            printf("Direita\n");
            direita++;
            break;
        }
    }
}

int main() {

    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Rainha:\n");
    moverRainha(8);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    printf("\n");
    moverCavalo();

    return 0;
}
