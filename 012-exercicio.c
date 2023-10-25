/* Exercício 12- Escreva um programa que alimente um vetor G de 6 elementos contendo o gabarito da Mega-Sena e um vetor A de 10 elementos contendo uma aposta. 
A seguir, mostre na tela quantos pontos fez o apostador. */

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, vetG[6], vetA[10], pontos;
	pontos = 0;
	
	for(i = 0; i < 6; i++){
		printf("Gabarito posição %d: ", i + 1);
		scanf("%d", &vetG[i]);
	}	
	
	printf("\n");
	
	for(i = 0; i < 10; i++){
		printf("Informe o %d número apostado: ", i + 1);
		scanf("%d", &vetA[i]);
	}


	for(i = 0; i < 6; i++) {
		for(j = 0; j < 10; j++){
			if(vetG[i] == vetA[j]) {
				pontos++;
				break;
			}
		}
	}	
	printf("Resultado da aposta: %d pontos.", pontos);
	
	
	return 0;
}
