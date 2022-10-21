#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
   float X, Y;
   printf("Digite o salario de um funcionario:");
   scanf("%f", &X);
   Y= X*1.25;
   printf("O valor do salario resajustado em 25 por cento : %f \n",Y);
    return 0;
}
