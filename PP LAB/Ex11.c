#include <stdio.h>
#include <stdlib.h>
int main()
{
    float K, M;
    printf("Digite uma velocidade em m/s:");
    scanf("%f", &M);
    K = M*3.6;
    printf("Essa velocidade em km/h e igual a: %.2f \n" ,K);
    return 0;
}
