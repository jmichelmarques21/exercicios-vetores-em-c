#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vetor[5];
	
	for(i = 0; i < 5; i++) {
		printf("Informe o valor para a posi��o [%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	
	for(i = 4; i >= 0; i--){
		printf("\nValor na posi��o [%d]: %d", i, vetor[i]);
	}
	
	
	
	return 0;
}
