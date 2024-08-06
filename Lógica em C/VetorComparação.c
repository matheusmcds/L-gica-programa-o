/*Escreva um programa em c que determine se dois arrays unidimensionais de n�meros inteiros s�o iguais. Crie dois 
	arrays de tamanho 5, leia 5 itens para cada array e depois compare-os. */
	
	#include <stdio.h>

int main() {
    int arr1[5];
    int arr2[5];
    int iguais = 1; // Assume inicialmente que os arrays s�o iguais

    // Leitura dos valores para o primeiro array
    printf("Informe 5 valores para o primeiro array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Leitura dos valores para o segundo array
    printf("Informe 5 valores para o segundo array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Compara��o dos arrays
    for (int i = 0; i < 5; i++) {
        if (arr1[i] != arr2[i]) {
            iguais = 0; // Se algum elemento for diferente, os arrays n�o s�o iguais
            break; // N�o precisa continuar comparando
        }
    }

    // Exibir o resultado da compara��o
    if (iguais) {
        printf("Os dois arrays s�o iguais.\n");
    } else {
        printf("Os dois arrays s�o diferentes.\n");
    }

    return 0;
}

