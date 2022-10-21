#include <stdio.h>
#include <stdlib.h>
int main()
{
    float K, M;
    printf("Digite uma velocidade em km/h:");
    scanf("%f", &K);
    M = K/3.6;
    printf("Essa velocidade em m/s e igual a: %f \n" ,M); 
    return 0;
}