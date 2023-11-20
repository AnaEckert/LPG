#include <stdio.h>
#include <string.h>
#define N 50

int so_digitos(char str[]);

int main (){
	char palavra[N];
	
	printf("Digite sua palavra:\n");
	fgets(palavra, N, stdin);
	
	if(so_digitos(palavra)){
		printf("A string so contem digitos.\n");
		} else {
			printf("A string contem char.\n");	
		}
	
	return 0; 
}
int so_digitos(char str[]){
	int i, n;
	
	n = strlen(str) - 1;
	
	for(i = 0; i < n; i++){
		if (str[i] >= '0' && str[i] <= '9'){
		} else {
			return 0;	
		}
	} 
	return 1;	
}



