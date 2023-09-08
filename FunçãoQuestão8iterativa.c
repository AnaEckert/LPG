#include <stdio.h>
#include <stdlib.h>

int main (){
	int i = 0, somatorio = 0, N, replica;
	
	printf("Digite N para somatorio regressivo:\n");
	scanf(" %d", &N);
	
	replica = N;
	
	for (i = 0; i < replica; i++){
		somatorio += N;
		N--;
	}
	
	printf("O somatorio totaliza: %d\n", somatorio); 
	
	return 0;
}
