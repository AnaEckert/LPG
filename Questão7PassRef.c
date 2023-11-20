#include <stdio.h>
#include <stdlib.h>

void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ);

int main (){
	float matriz[3][4] = {3, 6, 1, 7, -8, -3, -5, 0 , 3.5, 1.4, -8.9, -9.5};
	float menor;
	int i, j;
	
	min_matriz(matriz, &menor, &i, &j);
	
	printf("Menor: %.1f / Indice i: %d / Indice j: %d\n", menor, i, j);
	
	return 0;
}
void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ){
	int i, j;
	(*pMin) = mat[0][0];
	(*pI) = 0;
	(*pJ) = 0;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			if(*pMin > mat[i][j]){
				(*pMin) = mat[i][j];
				(*pI) = i;
				(*pJ) = j;
			}
		}
	}
}
