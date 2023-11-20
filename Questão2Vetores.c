#include <stdio.h>
#include <stdlib.h>

void fibonacci(int v[], int n);

int main (){
	int N;
	
	printf("Digite os N termos para a sequencia:\n");
	scanf("%i", &N); 
	
	int vet[N];
	
	fibonacci(vet, N);  
	
	return 0;
}
void fibonacci(int v[], int n){
	int i = 0;
	v[0] = 0;
	v[1] = 1; 
	for (i = 2; i < n; i++){
		v[i] = v[i - 2] + v[i - 1]; 
	}
	for (i = 0; i < n; i++){
		printf("%d ", v[i]); 
	}
}
