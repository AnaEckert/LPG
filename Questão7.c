#include <stdio.h>

int main (){
	
	int C, N, linha = 0, coluna = 0, maior, menor, soma = 0;
	
	printf("Digite a quantidade de casos teste:\n");
	scanf(" %i", &C);
	
	int matriz[C][2];
	
	for (linha = 0; linha < C; linha++){
		printf("Digite 2 valores para caso teste %i:\n", linha);
		for (coluna = 0; coluna < 2; coluna++){
			scanf(" %i", &matriz[linha][coluna]);
		}
		if (matriz[linha][0] > matriz[linha][1]){
			maior = matriz[linha][0]; 
			menor = matriz[linha][1];
	    	} else {
				maior = matriz[linha][1]; 
				menor = matriz[linha][0];
	    	} 
	    if (menor % 2 == 0){
			N = menor + 1;
				while (N < maior){
					soma += N;
					N+= 2;
				}
	    	} else {
				N = menor + 2;
					while (N < maior){
						soma += N;
						N+= 2;
					}
				}
		printf("A soma dos impares consecutivos da linha %i eh: %i\n", linha, soma);
		soma = 0; 
	}
	
	return 0; 
}























