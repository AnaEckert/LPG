#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primos (int K);
int soma_primos(int v[], int n);

int main (){
	int N;
	printf("Digite a capacidade do seu vetor:\n");
	scanf("%i", &N);
	
	int vet[N];
	
	printf("A soma dos primos em seu vetor eh: %i\n", soma_primos(vet, N)); 
	
	
	return 0; 
}

int soma_primos(int v[], int n){
	int i = 2, pos = 0, somatorio = 0;
	while(pos < n){
		if (primos(i)){
			v[pos] = i; 
			pos++;
			i++;
		} else {
			i++; 
		}
	}
	for (i = 0; i < n; i++){
		somatorio += v[i]; 
	}
	return somatorio; 
}
int primos (int K){ //Aqui estou apenas fazendo a verificação se eh primo 
	int cont = 0, r, pos = 0;
	
	r = sqrt(K);
	
	for (pos = 2; pos <= r; pos++){
		if (K % pos == 0){
			return 0;
		}
	}
	return 1; //eh primo! Já saiu de toda a varredura do for e não retornou 0 - falso - portanto eh primo 	
}



