#include <stdio.h>
#include <stdlib.h>
int main()
{
    float H, M;
    printf("Digite um valor de area em hectares :");
    scanf("%f", &H);
    M= H*10.000;
    printf("Esse valor de area em metros quadrados e igual a: %f \n" ,M);

    return 0;
}
