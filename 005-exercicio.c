#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vet[5], menor, maior, soma;
	float media;
	
	soma = 0;
	menor = vet[0];
	maior = vet[0];

	for(i = 0; i < 5; i++) {
		printf("Informe o valor para a posi��o [%d]: ", i);
		scanf("%d", &vet[i]);
		if (vet[i] < menor) {
			menor = vet[i];
		}
		if (vet[i] > maior) {
			maior = vet[i];
		}
		soma += vet[i];
 	}
	
	media = soma / 5.0;
	printf("\nO maior valor �: %d", maior);
	printf("\nO menor valor �: %d", menor);
	printf("\nA soma dos valores informados �: %d", soma);
	printf("\nA m�dia dos valores informados �: %.1f", media);
	
	
	
	
	
	
	return 0;
}
