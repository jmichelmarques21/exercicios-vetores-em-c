/* Exercício 07 - Escreva um programa que armazene 5 números em um vetor e apresente uma listagem contendo o índice do elemento e uma das mensagens: 
par ou ímpar. */

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vetor[5];
	
	for (i = 0; i < 5; i++){
		printf("Informe o valor para a posição [%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < 5; i++){
		printf("\nPosição [%d]: ", i);
		if (vetor[i] % 2 == 0) {
			printf("%d - Par!", vetor[i]);
		} else {
			printf("%d - Ímpar!", vetor[i]);
		}
	}
	
	
	
	return 0;
}
