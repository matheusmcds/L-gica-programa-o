/*Escrever um programa que leia uma matriz de ordem 3 X 3. Ap�s percorrer esta matriz
para encontrar ocorr�ncias do n�mero 20. Guardar as posi��es em vetores: um para linha e
outro para coluna. Ao final do processo exibir as posi��es (linha e coluna) onde o n�mero
20 est� posicionado. Se n�o houve ocorr�ncias, mostrar mensagem adequada.*/

#include <stdio.h>
int main (void){
	int matriz[3][3];
	int L;
	int C;
	int K = 0;
	int vetorL[9];
	int vetorC[9];
	
	for(L = 0 ; L < 3 ; L++){
		for(C = 0 ; C < 3 ; C++){
			printf("informe o valor:\n");
			scanf("%d", &matriz[L][C]);
				if(matriz[L][C] == 20){
					vetorL[K] = L;
					vetorC[K] = C;
					K++;
				}
		}
	}	
	
	for (L = 0 ; L < K ; L++){
		printf("posi��es do valor 20:%d, %d\n",vetorL[L], vetorC[L] );
	}		
	
}
