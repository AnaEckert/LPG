#include <stdio.h>
#include <stdlib.h>

void troca_valor(float *x, float *y);

int main (){
	float A, B;
	
	printf("Digite valores para A e B:\n");
	scanf("%f %f", &A, &B);
	
	printf("A: %.2f e B: %.2f\n", A, B);
	
	troca_valor(&A, &B);
	
	printf("Modificados! A: %.2f e B: %.2f\n", A, B);
	
	return 0;
}

void troca_valor(float *x, float *y){
	float aux;
	
	aux = (*x);
	(*x) = (*y);
	(*y) = aux;
}
