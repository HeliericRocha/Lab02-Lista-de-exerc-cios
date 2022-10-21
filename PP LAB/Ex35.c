#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
   float H, A, B;
   printf("Digite os catetos de um triangulo retangulo");
   scanf("%f%f", &A, &B);
   H = sqrt((A*A)+(B*B));
   printf("A hipotenusa desse triangulo retangulo e: %f \n",H);
    return 0;
}
