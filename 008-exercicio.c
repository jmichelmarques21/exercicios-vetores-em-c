/* Exercício 08 - Escreva um programa alimente um vetor de 5 números inteiros distintos. Em seguida, leia um número qualquer do teclado e mostre na tela 
o índice em que o número se encontra no vetor, ou então a mensagem "Não encontrado", se o número não estiver presente no vetor. */

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vetor[5], num;
	
	for (i = 0; i < 5; i++) {
		printf("Informe o número para a posição [%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("\nInforme um número: ");
	scanf("%d", &num);
	
	for (i = 0; i < 5; i++) {
		if (num == vetor[i]) {
			printf("O número %d foi encontrado no índice: %d!", num, i);
			return 0;
		}
	}
	
	printf("\nNúmero não encontrado!");
	
	
	return 0;
}
