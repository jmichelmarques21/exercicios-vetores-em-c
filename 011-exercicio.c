/* Exercício 11 - Tentando descobrir se um dado era viciado, um dono de cassino honesto (risos) o lançou 15 vezes. Escreva um algoritmo que dados os 
resultados dos lançamentos, armazene em um vetor o número de ocorrências de cada face. Apresente o resultado na tela. */

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, jogadas[15], faces[6] = {0};
	
	printf("Informe o valor da jogada: \n");
	
	for(i = 0; i < 15; i++){
		printf("Jogada %d: ", i + 1);
		scanf("%d", &jogadas[i]);
		
		if(jogadas[i] >= 1 && jogadas[i] <= 6) {
			faces[jogadas[i] - 1]++;
		} else {
			printf("Valor inválido, digite um número entre 1 e 6! ");
			i--;
		}
	}
	
	printf("Número de ocorrências de cada face do dado: \n");
	for (i = 0; i < 6; i++){
		printf("Face %d: %d vezes.\n", i + 1, faces[i]);
	}
	
	
	
	return 0;
}
