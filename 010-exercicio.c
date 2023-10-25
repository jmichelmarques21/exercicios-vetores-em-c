#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vetor[100], num = 10;
	
	for(i = 0; i < 100; i++){
		vetor[i] = num;
		num += 10;
	}
	
	for(i = 0; i < 100; i++){
		printf("%d\n", vetor[i]);
	}
	return 0;
}
