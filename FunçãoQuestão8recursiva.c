#include <stdio.h>
#include <stdlib.h>

int somatorio(int n);

int main (){
	int N;
	
	printf("Digite N para somatorio regressivo:\n");
	scanf(" %d", &N); 
	
	printf("O somatorio totaliza: %d\n", somatorio(N)); 
	
	return 0;
}

int somatorio(int n){
	
	if (n == 0){
		return 0; 
	} else {
		return n + somatorio(n-1); 
	}
}
