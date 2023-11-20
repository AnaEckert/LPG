#include <stdio.h>
#include <stdlib.h>

void calcula_hora(int totalMinutos, int *ph, int *pm);

int main (){
	int minutos, hExata = 0, minExato = 0;
	
	printf("Quantos minutos se passaram desde a meia noite?\n");
	scanf("%d", &minutos);
	
	calcula_hora(minutos, &hExata, &minExato);
	
	printf("Sao %dh e %dmin\n", hExata, minExato);
	
	return 0;
}

void calcula_hora(int totalMinutos, int *ph, int *pm){
	(*ph) = totalMinutos/60;
	(*pm) = totalMinutos % 60;
}

