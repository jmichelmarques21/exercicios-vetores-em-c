#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vetQ[10]; 
	float vetP[10], faturamento = 0;
	
	printf("Informe a quantidade vendida de cada produto: \n");
	for (i = 0; i < 10; i++) {
		printf("Produto [%d]: ", i);
		scanf("%d", &vetQ[i]);
	}
	
	printf("Informe o valor de venda de cada produto: \n");
	for(i = 0; i < 10; i++) {
		printf("Produto [%d]: ", i);
		scanf("%f", &vetP[i]);
	}
	
	for (i = 0; i < 10; i++){
		faturamento += vetQ[i] * vetP[i];
	}
	
	printf("\nO faturamento mensal do armazém é de R$%.2f.", faturamento);
	
	
	
	
	
	return 0;
}
