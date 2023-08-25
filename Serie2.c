#include <stdio.h>

int main()
{
    int K, constante = 1;
    float somatorio = 0, pos;
    
    printf("Digite K termos para a serie ln 2:\n");
    scanf(" %i", &K);
    
    for (pos = 1; pos <= K; pos++){
       somatorio += (1/pos * constante);
       printf("Termo %.0f: %.5f\n", pos, somatorio);
       
       constante *= (-1);
    }
    printf("O valor aproximado de ln(2) para somatorio de %i termos eh: %.5f\n", K, somatorio);
    
    return 0;
}
