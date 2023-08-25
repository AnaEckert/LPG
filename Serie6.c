#include <stdio.h> 
#include <math.h>

int main (){
	int N = 0; 
	double X = 0;
	
	printf("Digite o X:\n");
	scanf(" %lf", &X);
	printf("Digite quantos termos da serie deseja:\n");
	scanf(" %i", &N); 
	
	int i; 
	double termo = X, seno = 0, aux = 1; 
	
	for (i = 1; i <= N; i++){ //dá para abolir o aux com i <= n*2; n+=2 
		seno += termo;	
		termo *= (X/(aux+1)) * (X/(aux+2))	* (-1); 	
		aux += 2;
	}
	printf("Seno de %.3lf (%i termos): %.15lf\n", X, N, seno); 
	
	return 0;
}
