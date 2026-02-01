#include <stdio.h>

#define TAM 10
#define NAVIO 3
#define TAM_NAVIO 3

int main() {
    int tabuleiro[TAM][TAM];
    int i, j;

    /* 1. Inicializa o tabuleiro com água (0) */
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    /* 2. Definição dos navios */
    int navioHorizontal[TAM_NAVIO] = {NAVIO, NAVIO, NAVIO};
    int navioVertical[TAM_NAVIO]   = {NAVIO, NAVIO, NAVIO};

    /* Coordenadas iniciais */
    int linhaH = 2, colunaH = 2;  // navio horizontal
    int linhaV = 5, colunaV = 6;  // navio vertical

    /* 3. Validação do navio horizontal */
    if (colunaH + TAM_NAVIO <= TAM) {
        for (i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[linhaH][colunaH + i] == 0) {
                tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
            }
        }
    }

    /* 4. Validação do navio vertical */
    if (linhaV + TAM_NAVIO <= TAM) {
        for (i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[linhaV + i][colunaV] == 0) {
                tabuleiro[linhaV + i][colunaV] = navioVertical[i];
            }
        }
    }

    /* 5. Exibição do tabuleiro */
    printf("Tabuleiro Batalha Naval (Nível Novato):\n\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
