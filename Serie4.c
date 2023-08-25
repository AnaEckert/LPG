#include <stdio.h>

int main (){
	int N; 
	float somatorio = 1, pos = 1, fat = 1; 
	
	printf("Digite N numeros para a aproximacao do numero de Euler:\n");
	scanf(" %i", &N); 
	
	if (N == 1){
		printf("Termo 1: 1.00000\n");
	} else {
	  	for (pos = 1; pos <= N; pos++){
		fat *= pos; 
		somatorio += 1/fat;
		printf("Termo %.0f: %.5f\n", pos+1, somatorio);	
	    }	
	}
	
	printf("A aproximacao para %i termo(s) do numero de Euler eh: %.5f\n", N, somatorio); 
	
	return 0;
}







