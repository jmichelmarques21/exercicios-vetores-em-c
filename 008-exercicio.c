#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vetor[5], num;
	
	for (i = 0; i < 5; i++) {
		printf("Informe o n�mero para a posi��o [%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("\nInforme um n�mero: ");
	scanf("%d", &num);
	
	for (i = 0; i < 5; i++) {
		if (num == vetor[i]) {
			printf("O n�mero %d foi encontrado no �ndice: %d!", num, i);
			return 0;
		}
	}
	
	printf("\nN�mero n�o encontrado!");
	
	
	return 0;
}
