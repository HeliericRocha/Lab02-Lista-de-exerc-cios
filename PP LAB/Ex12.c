#include <stdio.h>
#include <stdlib.h>
int main()
{
    float K, M;
    printf("Digite uma distancia em milhas:");
    scanf("%f", &M);
    K = M*1.61;
    printf("Essa distancia em Km e igual a: %f \n" ,K);

    return 0;
}
