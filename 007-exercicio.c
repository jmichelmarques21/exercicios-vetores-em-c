#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vetor[5];
	
	for (i = 0; i < 5; i++){
		printf("Informe o valor para a posi��o [%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < 5; i++){
		printf("\nPosi��o [%d]: ", i);
		if (vetor[i] % 2 == 0) {
			printf("%d - Par!", vetor[i]);
		} else {
			printf("%d - �mpar!", vetor[i]);
		}
	}
	
	
	
	return 0;
}
