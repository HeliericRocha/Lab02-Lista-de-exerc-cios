#include <stdio.h>
#include <stdlib.h>
int main()
{
    float A, M;
    printf("Digite um valor de area em metros quadrados :");
    scanf("%f", &M);
    A = M*0.000247;
    printf("Esse valor de area em acres e igual a: %f \n" ,A);

    return 0;
}
