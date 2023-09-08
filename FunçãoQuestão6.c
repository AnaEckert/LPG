#include <stdio.h>
#include <stdlib.h>

long long int fibo(int n);

int main (){
	int N, i = 0; 
	
	printf("Quantos termos da sequencia Fibonacci deseja?\n");
	scanf(" %d", &N);
	for (i = 1; i <= N; i++){
		printf("Termo %d: %d\n", i, fibo(i));
	}
	
	return 0;
}

long long int fibo(int n){
	long long int s_fibonacci[100] = {0}; 
	
	if (n == 1 || n == 2){
		s_fibonacci[n] = 1;
		return s_fibonacci[n];  
	} else if (s_fibonacci[n] == 0){
		s_fibonacci[n] = fibo(n - 1) + fibo(n - 2);
	}
		return s_fibonacci[n]; 
	
}
