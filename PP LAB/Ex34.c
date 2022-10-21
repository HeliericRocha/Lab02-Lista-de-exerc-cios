#include <stdio.h>
#include <stdlib.h>
int main()
{
   float R, A, P;
    printf("Digite o valor de um raio de um circulo:");
    scanf("%f", &R);
    P = 3.141592;
    A = P*(R*R);
    printf("O raio do circulo e igual a: %f", A);

    return 0;
}
