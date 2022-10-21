#include <stdio.h>
#include <stdlib.h>
int main()
{
    float G, R;
    printf("Digite um angulo em graus:");
    scanf("%f", &G);
    R = G*3.141592 / 180;
    printf("Esse angulo em radianos e igual a: %f \n" ,R);

    return 0;
}
