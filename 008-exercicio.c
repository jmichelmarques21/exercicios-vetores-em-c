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
