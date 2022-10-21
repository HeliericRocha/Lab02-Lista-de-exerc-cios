#include <stdio.h>
#include <stdlib.h>
int main()
{
    float X, Y, Z, W;
    printf("Digite tres valores :");
    scanf("%f%f%f", &X,&Y,&Z);
    W = (X*X) + (Y*Y) + (Z+Z);
    printf("A soma dos quadrados dos tres numeros e igual a: %f \n" ,W);

    return 0;
}
