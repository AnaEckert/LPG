#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50

void apaga_ocorrencia (char x[], char c);
int main (){
	char C, palavra[N];
	
	printf("Digite sua palavra:\n");
	scanf("%[^\n]", palavra);
	printf("Digite sua chave de busca:\n");
	scanf(" %c", &C);
	
	printf("Sua antiga string: [%s]\n", palavra);
	
	apaga_ocorrencia(palavra, C);
	
	
	return 0;
}
void apaga_ocorrencia (char x[], char c){
	int i = 0, n, j, aux;
	
	n = strlen(x);
	
	while(i < n){
		if(c == x[i]){
			aux = i;
			for(j = 0; j < (n - i); j++){
				x[aux] = x[aux+1];
				aux++;
			}	
		n = strlen(x);
		} else {
			i++;
		}
	}
	
	printf("Sua nova string: [%s]\n", x);
}






