#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 50

void maximus(char x[]);

int main (){
	char palavra[TAM];
	
	printf("Digite sua palavra:\n");
	fgets(palavra, TAM, stdin);
	
	maximus(palavra);
	
	return 0;
}
void maximus(char x[]){
	int i, n;
	n = strlen(x) - 1;
	
	for(i = 0; i < n; i++){
		if(x[i] >= 97 && x[i] <= 122){
			x[i] = x[i] - 32;
		}
	}
	printf("\nPalavra modificada: %s\n", x);
}
