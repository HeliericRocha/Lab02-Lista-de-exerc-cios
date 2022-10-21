#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
   float D, H, N;
    printf("Digite a altura do degral de uma escada, e a altura que se deseja subir com ela, respectivamente: ");
    scanf("%f%f", &D, &H);
    N = H/D;
    printf("O numero de degraus que se devera subir é de: %f", N);

    return 0;
}
