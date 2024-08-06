/*Fazer um programa que tem dois vetores do mesmo tamanho (6). O usu�rio fornecer�
os dados do primeiro, e depois dever� ser armazenado e exibido o valor do segundo
vetor que � o valor do primeiro vetor somado a posi��o do elemento. */

#include <stdio.h>

int main() {
    int vetor1[6];
    int vetor2[6];

    // Leitura dos valores para o primeiro vetor
    printf("Informe os 6 valores do primeiro vetor:\n");
    for (int i = 0; i < 6; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    // C�lculo dos valores para o segundo vetor
    for (int i = 0; i < 6; i++) {
        vetor2[i] = vetor1[i] + i;
    }

    // Impress�o dos dois vetores
    printf("Primeiro vetor:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor1[i]);
    }
    printf("\n");

    printf("Segundo vetor (valores do primeiro vetor somados � posi��o):\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    return 0;
}

