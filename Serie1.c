#include <stdio.h>

int main()
{
    int K;
    float somatorio = 0, pos; 
    
    printf("Digite K termos para a serie harmonica:\n");
    scanf(" %i", &K);
    
    for (pos = 1; pos <= K; pos++){
        somatorio += (1/pos);
        printf("Termo %.0f: %.2f\n", pos, somatorio);
    }
    
    printf("O somatorio total de %i termos eh: %.2f\n", K, somatorio);
    
    return 0;
}





















