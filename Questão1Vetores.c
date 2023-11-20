#include <stdio.h>
#include <stdlib.h>

int compara(float a[], float b[], int n); 

int main (){
	int N, i;
	printf("Digite um valor N para a capacidade dos vetores:\n");
	scanf("%i", &N); 
	
	float vet1[N], vet2[N]; 
	
	printf("Digite valores para vetor 1\n");
	for(i = 0; i < N; i++){
		scanf(" %f", &vet1[i]);
	}
	printf("Digite valores para vetor 2\n");
	for(i = 0; i < N; i++){
		scanf(" %f", &vet2[i]);
	}
	
	if(compara(vet1, vet2, N)){
		printf("Os vetores sao iguais\n");
	} else {
		printf("Os vetores nao sao iguais\n");
	}
		
	return 0; 
}
int compara(float a[], float b[], int n){
	int i = 0;
	while (i < n){
		if (a[i] != b[i]){
			return 0;
		} else {
			i++;
		}
	}
	return 1; 
}
