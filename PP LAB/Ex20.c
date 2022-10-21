#include <stdio.h>
#include <stdlib.h>
int main()
{
    float K, L;
    printf("Digite um valor de massa em quilogramas :");
    scanf("%f", &K);
    L = K/0.45;
    printf("Esse valor em libras e igual a: %f \n" ,L);

    return 0;
}
