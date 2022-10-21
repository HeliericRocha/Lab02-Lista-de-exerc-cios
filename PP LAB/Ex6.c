#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C,F;
    printf("Digite uma temperatura em graus Celsius:");
    scanf("%f",&C);
    F = C*(9.0/5.0)+32;
    printf("Esta temperatura em Fahrenheit e %f",F);

    return 0;

}
