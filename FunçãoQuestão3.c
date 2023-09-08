#include <stdio.h>
#include <stdlib.h>

int eh_numero (char a);

int main (){
	char A; 
	
	printf("Digite um caractere:\n");
	scanf(" %c", &A);
	
	eh_numero (A);
	
	return 0; 
}

int eh_numero (char a){
	if (a <= 57 && a >= 48){
		return printf ("Eh numero! Eh %d\n", a - 48);
	} else {
		return printf ("Nao eh numero\n");
	}
}
