#include <stdio.h>

int main (){
	
	int inicio, final, tempo = 0; 
	
	printf("Digite o horário inicial e final do jogo:\n");
	scanf(" %i %i", &inicio, &final);
	
	if (inicio < final){
		tempo = final - inicio;
	} else {
		tempo = (24 - inicio) + final; 
	}
	
	printf("O JOGO DUROU %i HORA(S)\n", tempo);
	
	return 0;
}









