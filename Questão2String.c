#include <stdio.h>
#include <stdlib.h>
#define N 20

int procura_char (char x[], int n, char c);

int main (){
	char C;
	
	//printf("Digite o tamanho da sua palavra:\n");
	//scanf("%i", &N);
	
	char str[N];
	
	printf("Digite sua palavra:\n");
	fgets(str, N, stdin);
	
	printf("Digite seu char de busca:\n");
	scanf(" %c", &C);
	
	printf("Sua chave ocorre %i vez(es) na string\n", procura_char(str, N, C));
	
	return 0;
}
int procura_char (char x[], int n, char c){
	int i = 0, cont = 0;
	
	for(i = 0; i < n; i++){
		if (c == x[i]){
			cont++;
		}
	}
	return cont; 
}
