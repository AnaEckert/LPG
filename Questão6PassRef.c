#include <stdio.h>
#include <stdlib.h>
#define TAM 6

void max_vetor(float vet[], int tam, float *pMax, int *pIndice);

int main (){
	int indice;
	float maior;
	float vetor[TAM] = {2.3, 6.9, 0.4, -4.2, 0, -1.7};
	
	max_vetor(vetor, TAM, &maior, &indice);
	
	printf("O maior valor eh: %.1f e seu indice eh: %d\n", maior, indice);
	
	return 0;
}

void max_vetor(float vet[], int tam, float *pMax, int *pIndice){
	(*pMax) = vet[0];
	(*pIndice) = 0;
	int i;
	
	for(i = 1; i < TAM; i++){
		if(*pMax < vet[i]){
			(*pMax) = vet[i];
			(*pIndice) = i;
		}
	}
	
}
