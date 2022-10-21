#include <stdio.h>
#include <stdlib.h>
int main()
{
    int X, Y, Z;
    printf("Digite um numero inteiro:");
    scanf("%d",&X);
    Y = X - 1 ;
    Z = X + 1 ;
    printf("O valor de seu antecessor e: %d, e seu sucessor: %d", Y,Z);

    return 0;
}
