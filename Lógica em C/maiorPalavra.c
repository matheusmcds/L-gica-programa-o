/*2) Escreva um programa que preenche um vetor de 10 posi��es com palavras. Ap�s a
leitura informe qual � a maior palavra armazenada no vetor e qual o seu tamanho.*/

#include <stdio.h>
#include <strings.h>
int main (void){
	char palavra [3][64];
	char maiorPalavra [64] = " ";
	int cont;
	
	for(cont = 0 ; cont < 3 ; cont++){
		printf("informe uma palavra:\n");
		scanf("%s", &palavra[cont]);
		
		if(strlen(palavra[cont]) > strlen(maiorPalavra)){
			strcpy(maiorPalavra,palavra[cont]);	
		}	
	}
	
	printf("A maior palavra armazenada �: %s ", maiorPalavra);
	printf("\n %d",strlen(maiorPalavra));
	
	
	
}
