#include <stdio.h>
#include <stdlib.h>
int main()
{
    int X, Y;
    printf("Digite um numero inteiro:");
    scanf("%d",&X);
    Y = ((X*3)+1) + ((X*2)-1) ;
    printf("a soma do sucessor de seu triplo com o antecessor de seu dobro e: %d", Y);

    return 0;
}
