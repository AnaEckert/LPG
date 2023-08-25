#include <stdio.h>

int main (){
	int N = 0; 
	double X = 0;
	
	printf("Digite o X:\n");
	scanf(" %lf", &X);
	printf("Digite quantos termos da serie deseja:\n");
	scanf(" %i", &N); 
	
	int i; 
	double termo = 1, cosseno = 0,  aux = 0; 
	
	for (i = 1; i <= N; i++){ //dá para abolir o aux com i <= n*2; n+=2 
		cosseno += termo;	
		termo *= (X/(aux+1)) * (X/(aux+2))	* (-1); 	
		aux += 2;
	}
	printf("Cosseno de %.3lf (%i termos): %.15lf\n", X, N, cosseno); 
	
	return 0;
}
