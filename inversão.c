#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int A, B, C, D;
    printf("Digite um valor para A. \n");
    scanf("%d", &A);
    printf("Digite um valor para B. \n");
    scanf("%d", &B);

    C = A;
    D = B;
    A = D;
    B = C;

    printf("O novo valor de A e: %d \n", A);
    printf("O novo valor de B e: %d \n", B);

    return 0;
}