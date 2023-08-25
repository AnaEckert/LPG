#include <stdio.h>

int main (){
	int K, pos = 2, constante = 1;
	float somatorio = 3, denom1 = 2, denom2 = 3, denom3 = 4;
	
	printf("Digite K termos para se aproximar de PI:\n");
	scanf(" %i", &K);
	
	if (K == 1){
	   	printf("A aproximacao Nilakantha para PI de 1 termo eh: 3\n");
		} else {
			printf("Termo posicao 1: %.5f\n", somatorio);
	  		for (pos = 2; pos <= K; pos++){
	  			somatorio += 4/(denom1*denom2*denom3) * constante; 
	  			
	  			printf("Termo posicao %i: %.5f\n", pos, somatorio);
	  			
	  			denom1 += 2;
	  			denom2 += 2;
	  			denom3 += 2;
	  			constante *= (-1); 
			  }
	}
	printf("Para %i termo(s), PI eh aproximadamente: %.5f\n", K, somatorio); 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0; 
}






















