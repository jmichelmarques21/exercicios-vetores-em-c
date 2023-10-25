/* Exercício 06 - Escreva um programa que calcule o produto escalar entre dois vetores de inteiros de tamanho igual a 5. 
Exemplo: {0, 2, 4, 6, 8} x {1, 3, 5, 7, 9} = 0 * 1 + 2 * 3 + 4 * 5 + 6 * 7 + 8 * 9 = 140. */

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vetA[] = {0,2,4,6,8}, vetB[] = {1,3,5,7,9}, produto;
	
	produto = 0;
	
	for(i = 0; i < 5; i++){
		produto += vetA[i] * vetB[i]; 
	}
	
	printf("\nO produto escalar entre esses dois vetores é: %d", produto);
	
	
	return 0;
}
