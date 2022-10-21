#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
   float D, X, Y;
   printf("Digite as coordenadas x e y");
   scanf("%f%f", &X, &Y);
   D = sqrt((X*X)+(Y*Y));
   printf("A distancia do ponto ate a origem e: %f \n",D);

        return 0;
}
