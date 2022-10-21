#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
   float V, H, P;
    printf("Digite o valor correspondente a hora de trabalho, e o numero de horas trabalhadas no mes, respectivamente:");
    scanf("%f%f",&V,&H);
    P = (V*H)*1.10;
    printf("O valor a ser pago ao funcionario e: %f", P);

    return 0;
}
