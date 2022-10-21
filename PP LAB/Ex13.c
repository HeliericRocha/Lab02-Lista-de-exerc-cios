#include <stdio.h>
#include <stdlib.h>
int main()
{
    float K, M;
    printf("Digite uma distancia em quilometros:");
    scanf("%f", &K);
    M = K/1.61;
    printf("Essa distancia em milhas e igual a: %f \n" ,M);

    return 0;
}
