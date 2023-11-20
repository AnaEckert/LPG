#include <stdio.h>
#include <stdlib.h>

void inc_dec (int *a, int *b);

int main (){
	int A, B;
	
	printf("Digite valores para A e B:\n");
	scanf("%d %d", &A, &B);
	
	printf("Os valores digitados foram A: (%d) e B: (%d)\n", A, B);
	
	inc_dec(&A, &B);
	
	printf("A incrementado: %d\n", A);
	printf("B decrementado: %d\n", B);
	
	return 0; 
}

void inc_dec (int *a, int *b){
	(*a)++;
	(*b)--;
}





