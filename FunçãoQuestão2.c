#include <stdio.h>
#include <stdlib.h>

int maior_valor (int a, int b, int c);

int main (){
	int A = 0, B = 0, C = 0;
	
	printf("Digite os 3 valores:\n");
	scanf(" %i %i %i", &A, &B, &C);
	
	maior_valor (A, B, C);
	
	return 0; 
}

int maior_valor (int a, int b, int c){
	
	if (b > a || c > a){
		if (b > c){
			return printf("O maior valor eh %d\n", b);
		} else {
			return printf("O maior valor eh %d\n", c);
		}
	} else {
		return printf("O maior valor eh %d\n", a); 
	}

	
}

