#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C,F;
    printf("Digite uma temperatura em graus Fahrenheit:");
    scanf("%f",&F);
    C = 5.0*(F- 32.0)/9.0;
    printf("Esta temperatura em graus Celsius e: %f",C);

    return 0;

}
