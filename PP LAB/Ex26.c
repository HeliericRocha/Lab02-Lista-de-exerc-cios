#include <stdio.h>
#include <stdlib.h>
int main()
{
    float H, M;
    printf("Digite um valor de area em metros quadrados :");
    scanf("%f", &M);
    H = M*0.0001;
    printf("Esse valor de area em hectares e igual a: %f \n" ,H);

    return 0;
}
