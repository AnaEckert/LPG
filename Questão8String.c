#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50

int eh_data(char x[]);
void converte_data (char x[]);
int eh_digito(char c);

int main (){
	char data[N];
	
	printf("Digite a data:\n");
	fgets(data, N, stdin);
	
	if(eh_data(data)){
		converte_data(data);	
	} else {
		printf("Sua digitacao nao esta no formato data.\n"); 
	}
	
	return 0;
}
int eh_data(char x[]){
	int i, n, cont = 0;
	
	n = strlen(x) - 1;
	if (n == 10){
		for(i = 0; i < n; i++){
			if(i == 2 || i == 5){
				if (x[i] == '/'){
					cont++;	
				}
			}
			if(i < 10 && i != 2 && i != 5){
				if(eh_digito(x[i])){
					cont++;
				}
			}
		}	
	}
	
	if(cont == 10){
		return 1;
	} else {
		return 0;
	}
		
}
void converte_data (char x[]){
	int i, potDia = 1, potMes = 1, potAno = 1;
	int somaDia = 0, somaMes = 0, somaAno = 0;
	
	for(i = 1; i >= 0; i--){
		int nDia = x[i] - '0';
		somaDia += nDia*potDia;
		potDia *= 10;
	}
	for(i = 4; i >= 3; i--){
		int nMes = x[i] - '0';
		somaMes += nMes*potMes;
		potMes *= 10;
	}
	for(i = 9; i >= 6; i--){
		int nAno = x[i] - '0';
		somaAno += nAno*potAno;
		potAno *= 10;
	}
	printf("Os numeros correspondentes para a data dada sao:\n");
	printf("Dia: %d\n", somaDia);
	printf("Mes: %d\n", somaMes);
	printf("Ano: %d\n", somaAno);
}
int eh_digito(char c){
	if (c >= '0' && c <= '9'){
		return 1;
	} else {
		return 0;
	}
}





