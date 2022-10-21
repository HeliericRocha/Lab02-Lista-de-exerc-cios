#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K, C;
    printf("Digite uma temperatura em graus Celsius:");
    scanf("%f" , &C);
    K = C + 273.15;
    printf("Essa temperatura em graus Kelvin e: %f" ,K);

    return 0;

}
