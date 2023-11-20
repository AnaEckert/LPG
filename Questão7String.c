#include <stdio.h>
#include <string.h>
#define N 50

int so_digitos(char str[]);
int converte_string(char x[]);

int main (){
	char palavra[N];
	
	printf("Digite sua string:\n");
	fgets(palavra, N, stdin);
	
	if(so_digitos(palavra)){
		printf("O numero equivalente a sua string eh: %d\n", converte_string(palavra));
	} else {
		printf("Nao eh possivel converter sua string, pois ela contem char.\n");
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
int converte_string(char x[]){
	int i, somatorio = 0, pot = 1, n;
	
	n = strlen(x) - 1;
	for(i = n-1; i >= 0; i--){
		int j = x[i] - '0'; 
		somatorio += (j*pot);
		pot *= 10;	
	} 
	
	return somatorio;
}






