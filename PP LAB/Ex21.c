#include <stdio.h>
#include <stdlib.h>
int main()
{
    float K, L;
    printf("Digite um valor de massa em libras :");
    scanf("%f", &L);
    K = L*0.45;
    printf("Esse valor em quilogramas e igual a: %f \n" ,K);

    return 0;
}
