#include <stdio.h>

int main() {
    // Tamanho do tabuleiro
    int tabuleiro[10][10] = {0};

    // Navio vertical (3 partes) começando em (2, 4)
    int navio_vertical[3][2] = {
        {2, 4},
        {3, 4},
        {4, 4}
    };

    // Navio horizontal (4 partes) começando em (6, 1)
    int navio_horizontal[4][2] = {
        {6, 1},
        {6, 2},
        {6, 3},
        {6, 4}
    };

    printf("Coordenadas do Navio Vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("Parte %d: (%d, %d)\n", i+1, navio_vertical[i][0], navio_vertical[i][1]);
    }

    printf("\nCoordenadas do Navio Horizontal:\n");
    for (int i = 0; i < 4; i++) {
        printf("Parte %d: (%d, %d)\n", i+1, navio_horizontal[i][0], navio_horizontal[i][1]);
    }

    return 0;
}