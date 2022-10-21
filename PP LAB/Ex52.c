#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
   float A, B, C, T, P, X, Y, Z;
   printf("Digite as apostas de cada um dos 3 amigos e o valor do premio:");
   scanf("%f%f%f%f", &A, &B, &C, &P);
   T = A + B + C;
   X = (A/T)*P;
   Y = (B/T)*P;
   Z = (C/T)*P;
   printf("Cada um ira receber respectivamente: %f\n%f\n%f", X,Y,Z);
}
