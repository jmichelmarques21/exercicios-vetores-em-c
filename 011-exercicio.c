#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, jogadas[15], faces[6] = {0};
	
	printf("Informe o valor da jogada: \n");
	
	for(i = 0; i < 15; i++){
		printf("Jogada %d: ", i + 1);
		scanf("%d", &jogadas[i]);
		
		if(jogadas[i] >= 1 && jogadas[i] <= 6) {
			faces[jogadas[i] - 1]++;
		} else {
			printf("Valor inv�lido, digite um n�mero entre 1 e 6! ");
			i--;
		}
	}
	
	printf("N�mero de ocorr�ncias de cada face do dado: \n");
	for (i = 0; i < 6; i++){
		printf("Face %d: %d vezes.\n", i + 1, faces[i]);
	}
	
	
	
	return 0;
}
