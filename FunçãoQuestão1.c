#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int tipo_triangulo (float x, float y, float z);

int main (){
	float x = 0, y = 0, z = 0;
	
	printf("Digite o valor do primeiro lado:\n");
	scanf(" %f", &x);
	printf("Digite o valor do segundo lado:\n");
	scanf(" %f", &y);
	printf("Digite o valor do terceiro lado:\n");
	scanf(" %f", &z);
	
	tipo_triangulo (x, y, z);
	
	return 0; 
}

int tipo_triangulo (float x, float y, float z){
	float maior, menor, medio;
	maior = x; 
	
	if (y > maior){
		maior = y; 
		medio = x;
	} else {
		medio = y;
	}
	
	if (z > maior){
    	menor = medio;
    	medio = maior;
    	maior = z;
	} else if (z > medio){
		menor = medio;
		medio = z;
		} else {
		menor = z;
	}
	
	x = maior;
	y = medio;
	z = menor;
	
	if (x >= (y + z)){
		return printf("NAO FORMA TRIANGULO\n");
	} else if (x != y && x != z && y != z){
		return printf("TRIANGULO ESCALENO\n");
	}
	if (x == y && x == z){
		return printf("TRIANGULO EQUILATERO\n"); 
	} else if (x == y || x == z || y == z){
		return printf("TRIANGULO ISOSCELES\n");
	}
}




