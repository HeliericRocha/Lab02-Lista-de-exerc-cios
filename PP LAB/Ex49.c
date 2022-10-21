#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int  H, M ,S, D, X, Y, W;
        printf("Digite o horario de inicio de uma experiencia biologica e sua duracao em segundos respectivamente:");
        scanf("%d%d%d%d", &H, &M, &S, &D);
        W = (S+D)%60;
        Y =  (M+((S+D)/60))%60;
        X =   H+(M+((S+D)/60))/60 ;
       printf("%d:%d:%d", X,Y,W);



        return 0;
}
