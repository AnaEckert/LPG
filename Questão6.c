#include <stdio.h>

int main (){
	
	int X, Y, maior, menor, N, soma = 0;
	
	printf("Digite dois numeros inteiros:\n");
	scanf(" %i %i", &X, &Y); 
	
	if (X > Y){
		maior = X; 
		menor = Y;
	} else {
		maior = Y; 
		menor = X;
	}
	if (menor % 2 == 0){
		N = menor + 1;
		while (N < maior){
			soma += N;
		N+= 2;
		}
	} else {
		N = menor + 2;
		while (N < maior){
			soma += N;
		N+= 2;
		}
	}
	
	printf("A soma dos impares consecutivos eh: %i\n", soma); 
	
	return 0;
}














