#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 50

void inverte_string (char x[]);

int main (){
	char palavra[N];
	
	printf("Digite sua string:\n");
	scanf("%[^\n]", palavra);
	
	printf("Sua antiga string: [%s]\n", palavra);
	
	inverte_string(palavra);
	
	return 0; 
}
void inverte_string (char x[]){
	int i, j, n, aux[N];
	
	n = strlen(x);
	
	for(i = 0; i < n; i++){
		aux[i] = x[i];
	}
	
	for(i = 0, j = n-1; i < n, j >= 0; i++, j--){
		x[i] = aux[j];
	}
	
	printf("Sua nova string: [%s]\n", x);	
}

