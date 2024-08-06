/*Ler um vetor que contenha as notas de uma turma de 6 alunos. Calcular a m�dia destes
6 alunos e contar quantos alunos obteve nota acima desta m�dia calculada. Escrever a
m�dia da turma e o resultado da contagem.*/

#include <stdio.h>

int main() {
    float notas[6];
    float soma = 0;
    float media;
    int countAcimaMedia = 0;

    // Leitura das notas dos 6 alunos
    printf("Informe as notas dos 6 alunos:\n");
    for (int i = 0; i < 6; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // C�lculo da m�dia
    media = soma / 6;

    // Contagem dos alunos com nota acima da m�dia
    for (int i = 0; i < 6; i++) {
        if (notas[i] > media) {
            countAcimaMedia++;
        }
    }

    // Impress�o da m�dia e do n�mero de alunos acima da m�dia
    printf("M�dia da turma: %.2f\n", media);
    printf("N�mero de alunos com nota acima da m�dia: %d\n", countAcimaMedia);

    return 0;
}

