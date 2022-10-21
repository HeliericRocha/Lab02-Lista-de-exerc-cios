#include <stdio.h>
#include <stdlib.h>
int main()
{
    float P, C;
    printf("Digite um valor em polegadas:");
    scanf("%f", &P);
    C = P*2.54;
    printf("Esse valor em centimetros e igual a: %f \n" ,C);

    return 0;
}
