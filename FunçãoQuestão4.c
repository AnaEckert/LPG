#include <stdio.h>
#include <stdlib.h>

int soma_impares (int x, int y);

int main (){
	int X, Y; 
	
	printf("Digite dois numeros inteiros:\n");
	scanf(" %d %d", &X, &Y);
	
	printf("A soma dos impares consecutivos eh: %d\n", soma_impares (X, Y));
	
	return 0; 
}

int soma_impares (int x, int y){
	int maior = 0, menor = 0, N = 0, soma = 0;
	
	if (x > y){
		maior = x; 
		menor = y;
	} else {
		maior = y; 
		menor = x;
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
	
	return soma; 
}

