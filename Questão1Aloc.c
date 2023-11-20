#include <stdio.h>
#include <stdlib.h>
#define N 5

float *clone( float *v, int n );

int main (){
	float vetor[N] = {4.7, 3.9, 9.7, 2.4, -8.3};
	int i;
	
	printf("O endereco do vetor eh: %d\n", &vetor);
	
	float *p = clone(vetor, N);
	
	printf("O endereco do vetor clone eh: %.0f\n", clone(vetor, N));
	for(i = 0; i < N; i++){
		printf("%.1f\t", p[i]); 
	}
	
	free(p); 
	
	return 0;
}
float *clone( float *v, int n ){
	float *vetorFunc = malloc(sizeof(float) * n);
	int i;
	
	for(i = 0; i < n; i++){
		vetorFunc[i] = v[i];
	}
	return vetorFunc;	
}
