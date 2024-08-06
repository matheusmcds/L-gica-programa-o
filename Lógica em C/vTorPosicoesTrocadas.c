/* Dado o vetor X, criado na quest�o anterior, de 15 posi��es. Gerar o vetor de R com os
5 primeiros elementos de X e o vetor S com os 10 �ltimos elementos de X.*/

#include <stdio.h>

int main() {
    int X[15], R[5], S[10];

    // Leitura dos valores para o vetor X
    printf("Informe os 15 valores do vetor X:\n");
    for (int i = 0; i < 15; i++) {
        printf("X[%d]: ", i);
        scanf("%d", &X[i]);
    }

    // Copiar os primeiros 5 elementos de X para R
    for (int i = 0; i < 5; i++) {
        R[i] = X[i];
    }

    // Copiar os �ltimos 10 elementos de X para S
    for (int i = 0; i < 10; i++) {
        S[i] = X[5 + i];
    }

    // Impress�o do vetor R
    printf("Vetor R (primeiros 5 elementos de X):\n");
    for (int i = 0; i < 5; i++) {
        printf("R[%d]: %d\n", i, R[i]);
    }

    // Impress�o do vetor S
    printf("Vetor S (�ltimos 10 elementos de X):\n");
    for (int i = 0; i < 10; i++) {
        printf("S[%d]: %d\n", i, S[i]);
    }

    return 0;
}

