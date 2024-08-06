/*Escreva em c um programa que solicita 8 inteiros ao usu�rio e guarda esses valores em um array. Depois o 
	programa deve descobrir e exibir qual a posi��o do elemento de maior valor. 
*/

#include <stdio.h>

int main() {
    int arr[8];
    int maxValue;
    int maxPosition = 0;

    // Solicita os 8 valores ao usu�rio e armazena no array
    for (int i = 0; i < 8; i++) {
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Inicializa maxValue com o primeiro elemento do array
    maxValue = arr[0];

    // Descobre o elemento de maior valor e sua posi��o
    for (int i = 1; i < 8; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxPosition = i;
        }
    }

    // Exibe a posi��o do elemento de maior valor
    printf("O elemento de maior valor est� na posi��o: %d\n", maxPosition + 1);

    return 0;
}

