#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
   float B, S;
   printf("Digite o salario base de um funcionario:");
   scanf("%f", &B );
   S = (B*1.05)-(B*0.07);

   printf("O salario que esse funcionario ira receber e: %f", S);

    return 0;
}
