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

    // 4. Navio diagonal principal, em E7, F8, G9
    tabuleiro[4][2] = 3; // E7
    tabuleiro[5][3] = 3; // F8
    tabuleiro[6][4] = 3; // G9

    // 5. Navio diagonal secundária, em H10, I9, J8
    tabuleiro[9][7] = 3; // H10
    tabuleiro[8][8] = 3; // I9
    tabuleiro[7][9] = 3; // J8

    // 6. Imprimindo o cabeçalho do tabuleiro
    printf(" TABULEIRO BATALHA NAVAL \n");
    printf("  ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
    }
    printf("\n");

    // 7. Imprimindo o tabuleiro com os navios
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Numeração das linhas
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}


//Tive muitas dificuldades em realizar o desafio no nivel mestre, gostaria por favor, de um tutorial explicando melhor como podemos realizar com a manipulação de matrizes!
// grato!!