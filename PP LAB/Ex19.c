#include <stdio.h>
#include <stdlib.h>
int main()
{
    float M, L;
    printf("Digite um valor em litros :");
    scanf("%f", &L);
    M = 1000/L;
    printf("Esse valor em metros cubicos e igual a: %f \n" ,M);

    return 0;
}
