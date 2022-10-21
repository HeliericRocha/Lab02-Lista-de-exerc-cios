#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
   float D, S;
    printf("Digite quantos dias o trabalhador compareceu:");
    scanf("%f", &D);
    S = (D*30)*0.92;
    printf("A quantia liquida recebida pelo trabalhor e igual a: %f", S);

    return 0;
}
