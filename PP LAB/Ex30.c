#include <stdio.h>
#include <stdlib.h>
int main()
{
    float X, Y, Z;
    printf("Digite um valor em reais :");
    scanf("%f", &X);
    printf("Agora digite a cotacao do dolar:");
    scanf("%f", &Y);
    Z = Y*X ;
    printf("O Valor do real em dolares e: %f \n" ,Z);

    return 0;
}
