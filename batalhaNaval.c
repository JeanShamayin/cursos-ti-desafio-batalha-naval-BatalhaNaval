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
    int i, j;

    // Inicializa o tabuleiro com 0 (água)
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Coordenadas iniciais dos navios
    // Navio 1 - Horizontal
    int l1 = 1, c1 = 2;

    // Navio 2 - Vertical
    int l2 = 4, c2 = 7;

    // Navio 3 - Diagonal ↘ (linha e coluna aumentam)
    int l3 = 0, c3 = 0;

    // Navio 4 - Diagonal ↗ (linha diminui e coluna aumenta)
    int l4 = 9, c4 = 2;

    /* -----------------------------
       Função lógica: posicionar navio
       ----------------------------- */

    // Navio 1 - Horizontal
    if (c1 + TAM_NAVIO > TAM) {
        printf("Erro: Navio horizontal fora do tabuleiro!\n");
        return 0;
    }
    for (j = 0; j < TAM_NAVIO; j++) {
        if (tabuleiro[l1][c1 + j] != 0) {
            printf("Erro: Sobreposicao no navio horizontal!\n");
            return 0;
        }
        tabuleiro[l1][c1 + j] = 3;
    }

    // Navio 2 - Vertical
    if (l2 + TAM_NAVIO > TAM) {
        printf("Erro: Navio vertical fora do tabuleiro!\n");
        return 0;
    }
    for (i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[l2 + i][c2] != 0) {
            printf("Erro: Sobreposicao no navio vertical!\n");
            return 0;
        }
        tabuleiro[l2 + i][c2] = 3;
    }

    // Navio 3 - Diagonal ↘
    if (l3 + TAM_NAVIO > TAM || c3 + TAM_NAVIO > TAM) {
        printf("Erro: Navio diagonal ↘ fora do tabuleiro!\n");
        return 0;
    }
    for (i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[l3 + i][c3 + i] != 0) {
            printf("Erro: Sobreposicao no navio diagonal ↘!\n");
            return 0;
        }
        tabuleiro[l3 + i][c3 + i] = 3;
    }

    // Navio 4 - Diagonal ↗
    if (l4 - (TAM_NAVIO - 1) < 0 || c4 + TAM_NAVIO > TAM) {
        printf("Erro: Navio diagonal ↗ fora do tabuleiro!\n");
        return 0;
    }
    for (i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[l4 - i][c4 + i] != 0) {
            printf("Erro: Sobreposicao no navio diagonal ↗!\n");
            return 0;
        }
        tabuleiro[l4 - i][c4 + i] = 3;
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

