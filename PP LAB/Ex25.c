#include <stdio.h>
#include <stdlib.h>
int main()
{
    float A, M;
    printf("Digite um valor de area em acres :");
    scanf("%f", &A);
    M = A*4048.58;
    printf("Esse valor de area em metros quadrados e igual a: %f \n" ,M);

    return 0;
}
