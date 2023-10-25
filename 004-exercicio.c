/* Exercício - Escreva um programa que alimente um vetor A com 5 números inteiros. Em um vetor B, armazene o dobro de cada um dos números vetor A 
e apresente o vetor B na tela  */

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vetA[5], vetB[5], i;
	
	for(i = 0; i < 5; i++) {
		printf("Informe o valor para a posição [%d]: ", i);
		scanf("%d", &vetA[i]);
	}
	
	for (i = 0; i < 5; i++) {
		vetB[i] = vetA[i] * 2;
	}
	
	printf("\nVETOR B:\n");
	for(i = 0; i < 5; i++) {
		printf("Valor na posição [%d]: %d\n", i, vetB[i]);
	}
	
	
	
	
	
	return 0;
}
