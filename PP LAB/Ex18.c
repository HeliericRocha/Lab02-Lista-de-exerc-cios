#include <stdio.h>
#include <stdlib.h>
int main()
{
    float M, L;
    printf("Digite um valor em metros cubicos:");
    scanf("%f", &M);
    L = 1000*M;
    printf("Esse valor em litros e igual a: %f \n" ,L);

    return 0;
}
