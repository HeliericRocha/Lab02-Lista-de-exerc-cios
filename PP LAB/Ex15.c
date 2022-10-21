#include <stdio.h>
#include <stdlib.h>
int main()
{
    float G, R;
    printf("Digite um angulo em radianos:");
    scanf("%f", &R);
    G = R*180/3.141592;
    printf("Esse angulo em graus e igual a: %f \n" ,G);

    return 0;
}
