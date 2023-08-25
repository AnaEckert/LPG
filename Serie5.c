#include <stdio.h>
#include <stdlib.h>

int main() {
	double X;
	int N, pos, i;
	printf("Digite o valor de X:\n");
	scanf("%lf", &X);
	printf("Quantos termos?\n");
	scanf("%d", &N);
	
	double ex = 0;
	
	for( pos = 0 ; pos <= N ; pos++ ){
		double pot = 1;
		int fat = 1;
		for( i = 1 ; i <= pos ; i++ ){
			pot *= X; // pot = pot * x;
			fat *= i; // fat = fat * i;
		}
		ex += pot/fat; // ex = ex + pot/fat;
	}
	printf("e elevado a %.3lf (%i termos): %.15lf\n", X, N, ex);
	
	return 0;
}

