#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
   float V, D, P, C, X;
    printf("Digite o valor total de um produto:");
    scanf("%f",&V);
    D = V*0.90;
    P = V/3;
    C = D*0.05;
    X = V*0.05;
    printf("O valor do produto a vista com desconto e: %f,\n O valor de cada parcela dividido em 3 vezes e: %f,\n A comissao do vendendor na compra a vista e: %f, \n A comissao do vendedor na compra a prazo e: %f", D,P,C,X);

    return 0;
}
