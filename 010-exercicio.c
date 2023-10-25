/* Exercício 10 - Escreva um programa que preencha um vetor de 100 elementos inteiros com os números 10, 20, 30, 40, 50, ... , 1000. 
Apresentar o vetor na tela após o seu total preenchimento. */

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vetor[100], num = 10;
	
	for(i = 0; i < 100; i++){
		vetor[i] = num;
		num += 10;
	}
	
	for(i = 0; i < 100; i++){
		printf("%d\n", vetor[i]);
	}
	return 0;
}
