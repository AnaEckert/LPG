#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50

void substring (char str[], int ini, int n, char sub[]);

int main (){
	char palavra[N], str_resultado[N];
	int indice, tamanho;
	
	printf("Digite sua string:\n");
	scanf("%[^\n]", palavra);
	
	printf("Digite o indice em que sua substring se encontra:\n");
	scanf("%i", &indice);
	
	printf("Digite o tamanho desejado para sua substring:\n");
	scanf("%i", &tamanho);
	
	printf("Sua string antiga eh: %s\n", palavra);
	
	substring(palavra, indice, tamanho, str_resultado);
		
	return 0;
}
void substring (char str[], int ini, int n, char sub[]){
	int i = 0, j, k;
	
	j = strlen(str);
	
	if(ini > j){
		sub[i] = 'X';
	} else {
		for(i = ini; i < (ini + n); i++){
			if(str[i] = 0){
				sub[i - ini] = '\0';
				break;
			} else {
				int k = i - ini;
				printf("Entrou! Valor de k: %d. Valor de i: %d\n", k, i);
				sub[k] = str[i];
				printf("A substring eh: %s\n", sub);
			}
		}	
	}
	
	printf("Sua substring eh: %s\n", sub);
}






