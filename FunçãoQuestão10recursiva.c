#include <stdio.h>
#include <stdlib.h>

float constante_e(float n);
int fat(int f);

int main (){
	float N; 
	
	printf("Digite o valor N:\n");
	scanf(" %f", &N);
	
	printf("O somatorio para %.0f termos na constante E eh: %.5f\n", N, constante_e(N)); 
	
	return 0;
}

float constante_e(float n){
	if (n == 0){
		return 1.0;
	} else {
		return 1.0/fat(n) + constante_e(n-1); 
	}
	
}
int fat(int f){
	if (f == 0){
		return 1; 
	} else {
		return f * fat(f-1);
	}
}
