#include <stdio.h>
#include <stdlib.h>

int main (){
	int n, i, m = 1, contNeg = 0, contPosi = 0, j = 0, k = 0, o = 1;

	printf("Quantos elementos deseja no vetor?\n");
	scanf("%d", &n);

	int *v = malloc(sizeof(int) * n);
	int *vp = malloc(sizeof(int) * m);
	int *vn = malloc(sizeof(int) * o);

	printf("Digite os elementos:\n");
	for (i = 0; i < n; i++){
		scanf("%d", v+i);
		if (v[i] > 0){
			contPosi++;
			vp[j] = v[i];
			j++;
			m++;
			vp = realloc(vp, sizeof(int) * (m));
		}
		if(v[i] < 0){
			contNeg++;
			vn[k] = v[i];
			k++;
			o++;
			vn = realloc(vn, sizeof(int) * (o));
		}
	}

	printf("Valores no vetor principal:\n");
	for(i = 0; i < n; i++){
		printf("%d\t", v[i]);
	}
	printf("\nValores no vetor com valores positivos:\n");
	for(i = 0; i < contPosi; i++){
		printf("%d\t", vp[i]);
	}
	printf("\nValores no vetor com valores negativos:\n");
	for(i = 0; i < contNeg; i++){
		printf("%d\t", vn[i]);
	}

	free(v);
	free(vp);
	free(vn);

	return 0;
}
