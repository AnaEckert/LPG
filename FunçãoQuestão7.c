#include <stdio.h>
#include <stdlib.h>

int soma_especial (int n, int k, int x);

int main (){
	int N, K, X; 
	
	printf("Digite quantos N termos deseja no somatorio:\n");
	scanf(" %d", &N);
	printf("Esses termos sao multiplos de K numero:\n");
	scanf(" %d", &K);
	printf("A partir de X numero o somatorio vai comecar:\n");
	scanf(" %d", &X);
	
	printf("O somatorio totaliza: %d\n", soma_especial(N, K, X));
	
	return 0;
}

int soma_especial (int n, int k, int x){
	int i = 0, somatorio = 0; 
	while (i < n){
		if(x % k == 0){
			somatorio += x; 
			x = x+1; 
			i++; 
		} else {
			x = x+1; 
		}
	}
	return somatorio; 
}
