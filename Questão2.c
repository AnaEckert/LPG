#include <stdio.h>
#include <math.h>

int main (){
	
	double A, B, C;
	double maior = 0, medio = 0, menor = 0; 
	
	printf("Digite o valor do primeiro lado:\n");
	scanf(" %lf", &A); 
	
	maior = A; 
	
    printf("Digite o valor do segundo lado:\n");
	scanf(" %lf", &B);
	
	if (B > maior){
		maior = B; 
		medio = A;
	} else {
		medio = B;
	}
	
	printf("Digite o valor do terceiro lado:\n");
	scanf(" %lf", &C);	
	
    if (C > maior){
    	menor = medio;
    	medio = maior;
    	maior = C;
	} else if (C > medio){
		menor = medio;
		medio = C;
		} else {
		menor = C;
	}
	
	A = maior;
	B = medio;
	C = menor;
	
	//Tipos de casos de triangulos 
	
	if (A >= (B + C)){
		printf("NAO FORMA TRIANGULO\n");
	} else {
		if (pow(A,2) == (pow(B, 2) + pow(C, 2))){
		printf("TRIANGULO RETANGULO\n");
	}
	if (pow(A,2) > (pow (B, 2) + pow (C, 2))){
		printf("TRIANGULO OBTUSANGULO\n");
	}
	if (pow(A,2) < (pow(B, 2) + pow(C, 2))){
		printf("TRIANGULO ACUTANGULO\n");
	}
	if (A == B && A == C){
		printf("TRIANGULO EQUILATERO\n");
		} else if (A == B || A == C || B == C){
			printf("TRIANGULO ISOSCELES\n");
		}	
	}
	
	
	return 0; 
}






















