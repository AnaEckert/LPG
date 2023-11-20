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
	
	if(procura_char(str, N, C)){
		printf("O char %c esta na string\n", C);
	} else {
		printf("O char %c NAO esta na string\n", C);
	}
	
	return 0;
}
int procura_char (char x[], int n, char c){
	int i = 0;
	
	for(i = 0; i < n; i++){
		if (c == x[i]){
			return 1;
		}
	}
	return 0;
}
