#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
   float C, L, P, T;
   printf("Digite o comprimento e a largura de um terreno. E tambem o preco do metro de tela respectivamente:");
   scanf("%f%f%f",&C, &L, &P);
   T = (C+C+L+L)*P;
   printf("O preco para cercar esse terreno e de: %f", T);
}
