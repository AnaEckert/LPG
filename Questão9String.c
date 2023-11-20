#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50

void trim(char str[]);

int main (){
	char palavra[N];
	
	printf("Digite sua palavra:\n");
	scanf("%[^\n]", palavra);
	
	printf("Sua antiga string: [%s]\n", palavra);
	
	trim(palavra);
	
	return 0; 
}
void trim(char str[]){
	int i = 0, n, j, cont = 0;
	
	n = strlen(str);
	
	while(i < n){
		if (str[i] == 32){
			i++;	
		} else {
			for(j = 0; j < n; j++){
				str[j] = str[i];
				i++;	
			}
		}
	}
	
	n = strlen(str); 
	
	for(i = 0; i < n; i++){
		if(str[i] == 32){
			str[i] = '\0';
		}
	}
	
	printf("Sua nova string:[%s]\n", str);
}





/*rascunho 
for(j = 0; j < n; j++){
				str[j] = str[j+1];
			}
*/			

