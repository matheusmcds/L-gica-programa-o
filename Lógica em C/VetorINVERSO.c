/*Leia 4 n�meros, coloque-os em um vetor e mostre-os na ordem inversa de sua leitura. */

#include <stdio.h>

int main() {
    int arr[4];

    // Leitura dos 4 valores
    printf("Informe 4 valores:\n");
    for (int i = 0; i < 4; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Exibi��o dos valores na ordem inversa
    printf("Valores na ordem inversa:\n");
    for (int i = 3; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

