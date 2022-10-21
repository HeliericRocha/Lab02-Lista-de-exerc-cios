#include <stdio.h>
#include <stdlib.h>
int main()
{
    float J, M;
    printf("Digite um valor em metros :");
    scanf("%f", &M);
    J = M/0.91;
    printf("Esse valor em jardas e igual a: %f \n" ,J);

    return 0;
}
