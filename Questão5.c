#include <stdio.h>

int main (){
	
	int N, linha = 0, coluna = 0;
	float media; 
	
	printf("Digite quantos casos teste deseja:\n");
	scanf(" %i", &N); 
	
	float matriz[N][3];
	
	for (linha = 0; linha < N; linha++){
		printf("Digite 3 valores para caso teste %i:\n", linha);
		for (coluna = 0; coluna < 3; coluna++){
			scanf(" %f", &matriz[linha][coluna]);
		}
		media = (2*matriz[linha][0] + 3*matriz[linha][1] + 5*matriz[linha][2])/10; 
		printf("A media do caso teste %i eh\n%.1f\n", linha, media);
	}
	
	return 0; 
}





















