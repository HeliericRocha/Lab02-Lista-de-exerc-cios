#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int X, H, M ,S;
    printf("Digite um valor em segundos:");
    scanf("%d", &X);
    H = X/3600;
    M = (X%3600)/60;
    S = (X%3600)%60;
    printf("Esse tempo em horas minutos e segundo e igual a: %d:%d:%d", H, M, S);

        return 0;
}
