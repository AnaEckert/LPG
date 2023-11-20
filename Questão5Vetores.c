#include <stdio.h>
#include <stdlib.h>

int busca_seq_rec(int v[], int n, int chave);

int main (){
	int N, busca, i;
	
	printf("Digite a capacidade do seu vetor:\n");
	scanf("%d", &N);
	
	int vet[N];
	
	printf("Digite os valores de seu vetor:\n");
	for(i = 0; i < N; i++){
		scanf("%d", &vet[i]);
	}
	
	printf("Digite sua chave de busca:\n");
	scanf("%d", &busca);
	
	if (busca_seq_rec(vet, N, busca) == -1){
		printf("Chave não encontrada\n");
	} else {
		printf("Chave encontrada na posicao: %d\n", busca_seq_rec(vet, N, busca)); 
	}
	
	return 0; 
}

int busca_seq_rec(int v[], int n, int chave){
	while (n != -1){
 		if(v[n] == chave){
 			return n; // Encontrado nesse indice!
 		} else { 
 			return busca_seq_rec(v, n-1, chave);
		}
	}
	return -1;
	
}

