#include <stdio.h>

int main() {

    int i;

    /* ================= TORRE ================= */
    /* Torre: 5 casas para a direita (for) */
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    /* ================= BISPO ================= */
    /* Bispo: 5 casas na diagonal (while) */
    printf("Movimento do Bispo:\n");
    i = 1;
    while (i <= 5) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n");

    /* ================= RAINHA ================= */
    /* Rainha: 8 casas para a esquerda (do-while) */
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    printf("\n");

    /* ================= CAVALO ================= */
    /*
       Cavalo: movimento em "L"
       2 casas para baixo + 1 casa para a esquerda
       Uso de loops aninhados (for + while)
    */
    printf("Movimento do Cavalo:\n");

    /* Primeiro movimento: 2 casas para baixo */
    for (i = 1; i <= 2; i++) {
        printf("Baixo\n");
    }

    /* Segundo movimento: 1 casa para a esquerda */
    int j = 1;
    while (j <= 1) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
