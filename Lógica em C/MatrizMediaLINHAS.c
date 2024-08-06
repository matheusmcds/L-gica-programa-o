/*6. Escrever um programa que l� uma matriz M de 6 linhas X 5 colunas e escreve:
a) a m�dia dos elementos de cada linha;
b) a quantidade de elementos pares da matriz.*/

#include <stdio.h>

#define LINHAS 6
#define COLUNAS 5

int main() {
    int matriz[LINHAS][COLUNAS];
    float media[LINHAS];
    int contPares = 0;

    // Ler os elementos da matriz
    printf("Informe os elementos da matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcular a m�dia dos elementos de cada linha e contar os elementos pares
    for (int i = 0; i < LINHAS; i++) {
        int somaLinha = 0;
        for (int j = 0; j < COLUNAS; j++) {
            somaLinha += matriz[i][j];
            if (matriz[i][j] % 2 == 0) {
                contPares++;
            }
        }
        media[i] = (float)somaLinha / COLUNAS; // Corrigido para COLUNAS
    }

    // Mostrar a m�dia dos elementos de cada linha
    printf("\nM�dia dos elementos de cada linha:\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("Linha %d: %.2f\n", i, media[i]);
    }

    // Mostrar a quantidade de elementos pares na matriz
    printf("\nQuantidade de elementos pares na matriz: %d\n", contPares);

    return 0;
}

