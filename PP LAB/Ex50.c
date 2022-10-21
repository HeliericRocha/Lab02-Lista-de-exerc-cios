#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int A, I, N;
    printf("Digite o ano atual e a idade de uma pessoa respectivamente:");
    scanf("%d%d", &A, &I);
    N = A - I;
    printf("O ano de nescimento dessa pessoa foi: %d", N);



        return 0;
}
