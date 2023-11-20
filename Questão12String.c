#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50

int compara(char str1[], char str2[]);

int main (){
	char palavra1[N], palavra2[N];
	printf("Digite sua primeira palavra:\n");
	fgets(palavra1, N, stdin);
	printf("Digite sua segunda palavra:\n");
	fgets(palavra2, N, stdin);
	
	if(compara(palavra1, palavra2) == 0){
		printf("As strings sao iguais.\n");
	} else if (compara(palavra1, palavra2) == -1){
		printf("Sao diferentes e a primeira string eh a primeira no alfabeto.\n");
	} else {
		printf("Sao diferentes e a segunda string eh a primeira no alfabeto.\n");	
	}
	
	
	return 0; 
}
int compara(char str1[], char str2[]){
	int i, n, m, maior; 
	
	n = strlen(str1) - 1;
	m = strlen(str2) - 1; 
	
	if (n > m){
		maior = n;	
	} else {
		maior = m;
	}
	
	for(i = 0; i <= maior; i++){
		if(str1[i] != str2[i]){
			if(str1[i] > str2[i]){
				return 1;
			} else {
				return -1;
			}
		}
	}
	return 0;	
}
