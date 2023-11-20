#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20

int palindrome(char str[]);

int main (){
	char palavra[TAM];
	
	printf("Digite sua palavra:\n");
	scanf("[^\n]%", palavra);
	
	if(palindrome(palavra)){
		printf("Eh palindrome\n");
	} else {
		printf("Nao eh palindrome\n");
	}
	
	return 0; 
}
int palindrome(char str[]){
	int n, i, j; 
	
	n = strlen(str) - 1;
	
	for(i = 0, j = n; i <= n/2; i++, j--){
		if (str[i] != str[j]){
			return 0;
		}
	}
	return 1;
}
