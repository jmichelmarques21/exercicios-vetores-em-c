#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vetor[5], soma;
	float media;
	
	soma = 0;
	
	//Inicializando o vetor:
	for (i = 0; i < 5; i++) {
		printf("Informe o valor para a posi��o [%d]: ", i);
		scanf("%d", &vetor[i]);
		soma += vetor[i];
	}
	
	//Imprimindo a m�dia:
	media = soma / 5,0;
	printf("\nM�dia: %.1f\n", media);
	
	//Comparando valores iguais: 
	printf("\nValores iguais ou maiores do que a m�dia:");
	for(i = 0; i < 5; i++) {
		if (vetor[i] >= media) {
			printf("\n%d", vetor[i]);
		}
	}
	
	
	
	
	
	
	
	return 0;
}
