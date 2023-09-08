#include <stdio.h>
#include <stdlib.h>

int main (){
	int N;
	float i, somatorio = 0;
	
	printf("Digite valor para N:\n");
	scanf(" %d", &N);
	
	for(i = 1; i <= N; i++){
		somatorio += 1/i; 
	}
	printf("O somatorio totaliza: %.3f\n", somatorio);
	
	return 0;
}
