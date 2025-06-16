#include <stdio.h>

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // 1. Criando o tabuleiro (matriz 10x10) e preenchendo com água (0)
    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Posicionando navio horizontal (linha 3, colunas D, E, F)
    tabuleiro[2][3] = 3; // D3
    tabuleiro[2][4] = 3; // E3
    tabuleiro[2][5] = 3; // F3

    // 3. Posicionando navio vertical (coluna H, linhas 6, 7, 8)
    tabuleiro[5][7] = 3; // H6
    tabuleiro[6][7] = 3; // H7
    tabuleiro[7][7] = 3; // H8

    // 4. Imprimindo o cabeçalho do tabuleiro
    printf(" TABULEIRO BATALHA NAVAL \n");
    printf("  ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
    }
    printf("\n");

    // 5. Imprimindo o tabuleiro com os navios
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Numeração das linhas
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}