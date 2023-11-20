#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *repetidor( char *s, int n );

int main (){
	char palavra[] = "Ana";
	int n;
	
	printf("Sua string inicial eh: %s\n", palavra);
	printf("Quantas vezes deseja repeti-la?\n");
	scanf("%d", &n);
	
	char *p = repetidor(palavra, n);
	
	printf("Palavra repetida: %s\n", p);
	
	return 0;
}
char *repetidor( char *s, int n ){
	int tam = (strlen(s) * n), i, j = 0;
	char *palavRep = malloc(sizeof(char) * tam);
	
	for(i = 0; i < tam; i++){
		palavRep[i] = s[j];
		j++;
		if(j == strlen(s)){
			j = 0;
		}
	}
	palavRep[i] = '\0'; 
	
	return palavRep;
	
}

