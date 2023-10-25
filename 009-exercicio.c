/* Exercício 09 - Um armazém trabalha com 10 mercadorias diferentes identificadas pelos números inteiros de 0 a 9. O dono do armazém anota a quantidade 
de cada mercadoria vendida durante o mês. Ele tem uma tabela que indica para cada mercadoria o preço de venda. Escreva um programa que leia a quantidade
vendida de cada produto no final do mês (armazenando-os em um vetor Q) e o preço de venda de cada um (armazenado-os em um vetor P). 
Em seguida, calcule e apresente o faturamento mensal do armazém. */

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
