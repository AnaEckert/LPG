#include <stdio.h>
#include <stdlib.h>

int busca_seq(int *v, int n, int busca);
int *uniao( int *v1, int n1, int *v2, int n2, int *p3 );

	int main (){
	int vetor1[] = {5, 4, 9, 2, -8, -9};
	int vetor2[] = {0, 4, -9, 2, -6, 34, 75};
	int cap1 = 6, cap2 = 7, cap3 = 0, i;

	int *vetor3 = uniao(vetor1, cap1, vetor2, cap2, &cap3);
	
	printf("Vetor gerado pela uniao:\n");
	for(i = 0; i < cap3; i++){
  		printf("%d\t", vetor3[i]);
	}

	return 0;
}
int *uniao( int *v1, int n1, int *v2, int n2, int *p3 ){
    int i, j, *p;
   
    if(n1 > n2){
        p = malloc(sizeof(int) * n1);
        for (i = 0; i < n1; i++){
            p[i] = v1[i];
            (*p3)++;
        }
        for(j = 0; j < n2; j++){
            if(busca_seq(v1, n1, v2[j]) == -1){
                (*p3)++;
                p = realloc(p, sizeof(int) * (*p3));
                p[i] = v2[j];
                i++;
            }
        }
    }
    if(n2 > n1){
        p = malloc(sizeof(int) * n2);
        for (i = 0; i < n2; i++){
            p[i] = v2[i];
            (*p3)++;
        }
        for(j = 0; j < n1; j++){
            if(busca_seq(v2, n2, v1[j]) == -1){
                (*p3)++;
                p = realloc(p, sizeof(int) * (*p3));
                p[i] = v1[j];
                i++;
            }
        }
    }
   
    return p;
   
}

int busca_seq(int *v, int n, int busca){
    int i;
   
    for(i = 0; i < n; i++){
        if (busca == v[i]){
            return i;
        }
    }
    return -1;
}
