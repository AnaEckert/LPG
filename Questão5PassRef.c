#include <stdio.h>
#include <stdlib.h>

void max_min(int vet[], int tam, int *pMin, int *pMax);

int main (){
	int tamanho, i, maior, menor;
	
	printf("Qual tamanho deseja para seu vetor?\n");
	scanf("%d", &tamanho);
	
	int *vetor = malloc(sizeof(int) * tamanho);
	
	printf("Digite os valores do vetor:\n");
	for(i = 0; i < tamanho; i++){
		scanf("%d", vetor+i);
	}
	
	max_min(vetor, tamanho, &menor, &maior);
	
	printf("O maior valor eh: %d e o menor eh: %d\n", maior, menor);
	
	free(vetor);
	
	return 0;
}

void max_min(int vet[], int tam, int *pMin, int *pMax){
	int i;
	
	(*pMin) = vet[0];
	(*pMax) = vet[0];
	
	for(i = 1; i < tam; i++){
		if(*pMin > vet[i]){
			(*pMin) = vet[i];
		}
		if(*pMax < vet[i]){
			(*pMax) = vet[i];
		}
	}
	
}
