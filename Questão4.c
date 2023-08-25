#include <stdio.h>

int main (){
	
    int N, pos = 0;
    int par = 0, impar = 0, posi = 0, neg = 0; 
	
	printf("Digite quantos valeores deseja classificar:\n");
	scanf(" %i", &N); 	
	
	int vetor[N];
	
	printf("Digite os valores a serem classificados:\n");
	for (pos = 0; pos < N; pos++){
		scanf(" %i", &vetor[pos]);
		if (vetor[pos] > 0){
			posi++;
		}
		if (vetor[pos] < 0){
			neg++;
		}
		if (vetor[pos] % 2 == 0){
			par++;
		} else {
			impar++;
		}
	}
	
	printf("%i valor(es) par(es)\n", par);
	printf("%i valor(es) impar(es)\n", impar);
	printf("%i valor(es) positivo(s)\n", posi);
	printf("%i valor(es) negativo(s)\n", neg);
	
	return 0; 
}




















