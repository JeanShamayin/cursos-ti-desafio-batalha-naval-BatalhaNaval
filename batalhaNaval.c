// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

#include <stdio.h>

#define TAM 10
#define TAM_NAVIO 3

int main() {

    int tabuleiro[TAM][TAM];
    int navio1[TAM_NAVIO] = {3, 3, 3}; // navio horizontal
    int navio2[TAM_NAVIO] = {3, 3, 3}; // navio vertical

    // Coordenadas iniciais dos navios (linha, coluna)
    int linha1 = 2, coluna1 = 1; // navio horizontal
    int linha2 = 5, coluna2 = 6; // navio vertical

    int i, j;

    /* -----------------------------
       Inicializa o tabuleiro com 0
       ----------------------------- */
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    /* -----------------------------
       Validação do navio horizontal
       ----------------------------- */
    if (coluna1 + TAM_NAVIO > TAM) {
        printf("Erro: Navio horizontal fora do tabuleiro!\n");
        return 0;
    }

    /* -----------------------------
       Posiciona o navio horizontal
       ----------------------------- */
    for (j = 0; j < TAM_NAVIO; j++) {
        if (tabuleiro[linha1][coluna1 + j] != 0) {
            printf("Erro: Sobreposicao no navio horizontal!\n");
            return 0;
        }
        tabuleiro[linha1][coluna1 + j] = navio1[j];
    }

    /* -----------------------------
       Validação do navio vertical
       ----------------------------- */
    if (linha2 + TAM_NAVIO > TAM) {
        printf("Erro: Navio vertical fora do tabuleiro!\n");
        return 0;
    }

    /* -----------------------------
       Posiciona o navio vertical
       ----------------------------- */
    for (i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[linha2 + i][coluna2] != 0) {
            printf("Erro: Sobreposicao no navio vertical!\n");
            return 0;
        }
        tabuleiro[linha2 + i][coluna2] = navio2[i];
    }

    /* -----------------------------
       Exibe o tabuleiro
       ----------------------------- */
    printf("\n===== TABULEIRO =====\n\n");

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

#define TAM 10
#define TAM_NAVIO 3

int main() {

    int tabuleiro[TAM][TAM];
    int navio1[TAM_NAVIO] = {3, 3, 3}; // navio horizontal
    int navio2[TAM_NAVIO] = {3, 3, 3}; // navio vertical

    // Coordenadas iniciais dos navios (linha, coluna)
    int linha1 = 2, coluna1 = 1; // navio horizontal
    int linha2 = 5, coluna2 = 6; // navio vertical

    int i, j;

    /* -----------------------------
       Inicializa o tabuleiro com 0
       ----------------------------- */
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    /* -----------------------------
       Validação do navio horizontal
       ----------------------------- */
    if (coluna1 + TAM_NAVIO > TAM) {
        printf("Erro: Navio horizontal fora do tabuleiro!\n");
        return 0;
    }

    /* -----------------------------
       Posiciona o navio horizontal
       ----------------------------- */
    for (j = 0; j < TAM_NAVIO; j++) {
        if (tabuleiro[linha1][coluna1 + j] != 0) {
            printf("Erro: Sobreposicao no navio horizontal!\n");
            return 0;
        }
        tabuleiro[linha1][coluna1 + j] = navio1[j];
    }

    /* -----------------------------
       Validação do navio vertical
       ----------------------------- */
    if (linha2 + TAM_NAVIO > TAM) {
        printf("Erro: Navio vertical fora do tabuleiro!\n");
        return 0;
    }

    /* -----------------------------
       Posiciona o navio vertical
       ----------------------------- */
    for (i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[linha2 + i][coluna2] != 0) {
            printf("Erro: Sobreposicao no navio vertical!\n");
            return 0;
        }
        tabuleiro[linha2 + i][coluna2] = navio2[i];
    }

    /* -----------------------------
       Exibe o tabuleiro
       ----------------------------- */
    printf("\n===== TABULEIRO =====\n\n");

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

#define TAM 10
#define TAM_NAVIO 3

int main() {

    int tabuleiro[TAM][TAM];
    int navio1[TAM_NAVIO] = {3, 3, 3}; // navio horizontal
    int navio2[TAM_NAVIO] = {3, 3, 3}; // navio vertical

    // Coordenadas iniciais dos navios (linha, coluna)
    int linha1 = 2, coluna1 = 1; // navio horizontal
    int linha2 = 5, coluna2 = 6; // navio vertical

    int i, j;

    /* -----------------------------
       Inicializa o tabuleiro com 0
       ----------------------------- */
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    /* -----------------------------
       Validação do navio horizontal
       ----------------------------- */
    if (coluna1 + TAM_NAVIO > TAM) {
        printf("Erro: Navio horizontal fora do tabuleiro!\n");
        return 0;
    }

    /* -----------------------------
       Posiciona o navio horizontal
       ----------------------------- */
    for (j = 0; j < TAM_NAVIO; j++) {
        if (tabuleiro[linha1][coluna1 + j] != 0) {
            printf("Erro: Sobreposicao no navio horizontal!\n");
            return 0;
        }
        tabuleiro[linha1][coluna1 + j] = navio1[j];
    }

    /* -----------------------------
       Validação do navio vertical
       ----------------------------- */
    if (linha2 + TAM_NAVIO > TAM) {
        printf("Erro: Navio vertical fora do tabuleiro!\n");
        return 0;
    }

    /* -----------------------------
       Posiciona o navio vertical
       ----------------------------- */
    for (i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[linha2 + i][coluna2] != 0) {
            printf("Erro: Sobreposicao no navio vertical!\n");
            return 0;
        }
        tabuleiro[linha2 + i][coluna2] = navio2[i];
    }

    /* -----------------------------
       Exibe o tabuleiro
       ----------------------------- */
    printf("\n===== TABULEIRO =====\n\n");

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
