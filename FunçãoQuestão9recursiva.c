#include <stdio.h>
#include <stdlib.h>

float serie_harmonica (float n);

int main (){
	int N;
	
	printf("Digite o valor para N:\n");
	scanf(" %d", &N);
	
	printf("O somatorio totaliza: %.3f\n", serie_harmonica(N));
	
	return 0;
}

float serie_harmonica (float n){
	if (n == 1){
		return 1; 
	} else {
		return 1/n + serie_harmonica(n-1); 
	}
	
}
