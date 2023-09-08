#include <stdio.h>
#include <stdlib.h>

int main (){
	float somatorio = 1, fat = 1; 
	int N, i; 
	
	printf("Digite o valor N:\n");
	scanf(" %d", &N); 
	
	for (i = 1; i <= N; i++){
		somatorio += 1/fat;
		fat *= i+1; 
	}
	printf("O somatorio do valor da constante E para %d termos eh: %.5f\n", N, somatorio); 
	
	return 0;
}
