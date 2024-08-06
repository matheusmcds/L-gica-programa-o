/*Fazer um programa para preencher um vetor de 15 posi��es com n�meros entre 0 a 30.
Ap�s, ler n�meros inteiros e procur�-los no vetor at� que seja digitado o n�mero 99.
Quando o loop de pesquisa encerrar, ent�o mostrar quantas vezes voc� acertou os
n�meros do vetor. Lembre-se de que o n�mero pode estar repetido dentro do vetor,
considerar acertos tantas quantas forem as vezes que o n�mero estiver no vetor. Ao
final do processo, exibir o vetor e o n�mero de acertos do jogador.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 15

int main() {
    int vetor[SIZE];
    int numero, acertos = 0;

    // Inicializar o gerador de n�meros aleat�rios
    srand(time(NULL));

    // Preencher o vetor com n�meros aleat�rios entre 0 e 30
    for (int i = 0; i < SIZE; i++) {
        vetor[i] = rand() % 31; // rand() % 31 gera n�meros entre 0 e 30
    }

    // Exibir o vetor gerado
    printf("Vetor gerado:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Ler n�meros inteiros e procur�-los no vetor
    while (1) {
        printf("Digite um n�mero inteiro (99 para sair): ");
        scanf("%d", &numero);

        if (numero == 99) {
            break;
        }

        // Procurar o n�mero no vetor
        for (int i = 0; i < SIZE; i++) {
            if (vetor[i] == numero) {
                acertos++;
            }
        }
    }

    // Exibir o n�mero de acertos do jogador
    printf("N�mero de acertos: %d\n", acertos);

    // Exibir o vetor final
    printf("Vetor final:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

