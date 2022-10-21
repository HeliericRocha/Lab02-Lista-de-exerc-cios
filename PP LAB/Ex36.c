#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
   float V, R, A;
   printf("Digite a altura e o raio de um cilindro respectivamente:");
   scanf("%f%f", &A, &R);
   V= 3.141592* (R*R)*A;
   printf("O Volume do cilindro e igual a: %f \n",V);
    return 0;
}
