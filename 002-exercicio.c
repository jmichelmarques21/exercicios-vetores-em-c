/* Exercício 02 - Escreva um programa que alimente um vetor com 5 números inteiros. Apresente na tela apenas os valores ímpares que aparecem no vetor. */

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vetor[5];
	
	for (i = 0; i < 5; i++) {
		printf("Informe o valor para a posição [%d]: ", i);
		scanf("%d", &vetor[i]);
	}	
	
	
	printf("\nValores ímpares: \n");
	for(i = 0; i < 5; i++) {
		if (vetor[i] % 2 != 0) {
			printf("\n%d", vetor[i]);
		}
	}
	
	
	
	return 0;
}
