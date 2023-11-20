#include <stdio.h>
#include <stdlib.h>

int main (){
	int n, i, j = 0;
	float media, somatorio = 0;
	
	printf("Quantos elementos deseja para calcular a media?\n");
	scanf("%d", &n);
	
	float *p = malloc(sizeof(float) * n);
	
	printf("Digite os elementos:\n");
	for(i = 0; i < n; i++){
		scanf("%f", p+i);
		somatorio += p[i];
	}
	
	media = somatorio/n;
	
	float *maiores = malloc(sizeof(float) * 1);
	for(i = 0; i < n; i++){
		if(p[i] >= media){
			maiores[j] = p[i];
			j++;
			maiores = realloc(maiores, sizeof(float) * (n+1));
		}
	}
	maiores = realloc(maiores, sizeof(float) * (n - 1));
	
	printf("Valores acima da media:\n");
	for(i = 0; i < j; i++){
		printf("%.1f\t", maiores[i]);
	}
	
	free(p);
	free(maiores);
	return 0;
}
