#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K, C;
    printf("Digite uma temperatura em graus Kelvin:");
    scanf("%f" , &K);
    C = K - 273.15;
    printf("Essa temperatura em graus celsius e: %f" ,C);

    return 0;

}
