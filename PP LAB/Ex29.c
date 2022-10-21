#include <stdio.h>
#include <stdlib.h>
int main()
{
    float X, Y, Z, W, N;
    printf("Digite quatro notas :");
    scanf("%f%f%f%f", &X,&Y,&Z,&W);
    N = (X + Y + Z + W)/4;
    printf("A media aritimetica e igual a: %f \n" ,N);

    return 0;
}
