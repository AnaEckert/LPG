#include <stdio.h>

int main()
{
    int K, mudaSinal = 1, constante = 1;
    float somatorio = 0, pos;
    
    printf("Digite K termos para serie de Gregory-Leibniz:\n");
    scanf(" %i", &K);
    
    for (pos = 1; pos <= (2*K - 1); pos+=2){
        somatorio += 4/pos * mudaSinal; 
        printf("Termo %i: %.2f\n", constante, somatorio);
       
        mudaSinal *= (-1);
        constante++;
        }
    
    printf("O valor aproximado para PI do somatorio de %i termos eh: %.2f\n", K, somatorio);
    
    return 0;
}
