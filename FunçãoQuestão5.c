#include <stdio.h>
#include <stdlib.h>

int primos (int K);
int raiz_quad (int x);
void mostraPrimos (int N, int K);

int main (){
	int k, n;
	
	printf("Digite quantos numeros primos deseja saber:\n");
	scanf(" %d", &n);
	printf("A partir de qual elemento os numeros primos devem iniciar?\n");
	scanf(" %d", &k); 
	
	mostraPrimos (n, k);
		
	return 0; 
}

int primos (int K){ //Aqui estou apenas fazendo a verificação se eh primo 
	int cont = 0, r, pos = 0;
	
	r = raiz_quad(K);
	
	for (pos = 2; pos <= r; pos++){
		if (K % pos == 0){
			return 0;
		}
	}
	return 1; //eh primo! Já saiu de toda a varredura do for e não retornou 0 - falso - portanto eh primo 	
}
int raiz_quad (int x){
	int cont = 0, impar = 1;
	while( x >= impar ){
		x -= impar;
		cont++;
		impar += 2;
	}
	return cont;	
}

void mostraPrimos (int N, int K){
	int i = 0;
	while(i < N){
		if (primos(K) == 1){
			printf("\n%d\n", K); // Aqui ele checa se o k verificado na função de cima foi primo, e printa
			i++; 
		}
	K++; 
	}
}




