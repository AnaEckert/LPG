#include <stdio.h>
#include <stdlib.h>

void busca_todos(int v[], int n, int chave, int indices[]);

int main(){
	int N, busca, i;
	
	printf("Digite o tamanho de seus vetores:\n");
	scanf("%i", &N);
	int vet[N], retorno[N];
	printf("Digite os %d valores no seu vetor:\n", N);
	for (i = 0; i < N; i++){
		scanf(" %d", &vet[i]);
	}
	printf("Digite a chave de busca no seu vetor principal:\n");
	scanf("%d", &busca); 
	
	busca_todos(vet, N, busca, retorno);
	
	return 0;
}
void busca_todos(int v[], int n, int chave, int indices[]){
	int i, pos = 0;
	for (i = 0; i < n; i++){
		if(v[i] == chave){
			indices[pos] = i;
			pos++; 
		}	
	}
	while (pos < n){
		indices[pos] = -1;
		pos++;
	}
	for(i = 0; i < n; i++){
		printf("%d ", indices[i]);
	}
}
