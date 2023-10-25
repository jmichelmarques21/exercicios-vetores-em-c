/* Exercício 01 - Escreva um programa que alimente um vetor com 5 números inteiros e apresente na tela o vetor em ordem inversa */


#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vetor[5];
	
	for(i = 0; i < 5; i++) {
		printf("Informe o valor para a posição [%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	
	for(i = 4; i >= 0; i--){
		printf("\nValor na posição [%d]: %d", i, vetor[i]);
	}
	
	
	
	return 0;
}
