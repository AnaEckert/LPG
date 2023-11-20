#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

void concatena (char str1[], char str2[]); 
int main  (){
	char palavra1[N], palavra2[N];
	
	printf("Digite sua primeira palavra:\n");
	scanf(" %[^\n]", palavra1);
	printf("Digite sua segunda palavra:\n");
	scanf(" %[^\n]", palavra2);
	
	concatena(palavra1, palavra2);
	
	return 0;
}
void concatena (char str1[], char str2[]){
	int n, i, m;
	
	n = strlen(str1);
	m = strlen(str2);
	for (i = n; i < (n + m); i++){
		str1[i] = str2[i - n];
	}
	printf("A nova string eh: %s", str1); //ele printa pulando, pois o fgets põe \n sempre na leitura!!!
}
