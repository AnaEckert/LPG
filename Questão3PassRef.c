#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14


void calcula_circulo(float raio, float *pPerimetro, float *pArea);

int main (){
	float R, Pc, Ac;
	
	printf("Digite o raio do circulo:\n");
	scanf("%f", &R);
	
	calcula_circulo(R, &Pc, &Ac);
	
	printf("Raio: %.1f\n", R);
	printf("Perimetro: %.1f\n", Pc);
	printf("Area: %.1f\n", Ac);
		
	return 0;
}

void calcula_circulo(float raio, float *pPerimetro, float *pArea){
	
	(*pArea) = pi * pow(raio,2);
	(*pPerimetro) = 2 * pi * raio; 
}


