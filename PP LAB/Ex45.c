#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  char X;
  printf("Digite uma letra maiuscula:");
  scanf("%c", &X);
  X = X+ 32;
  printf("a letra minuscula e igual a: %c", X);

    return 0;
}
