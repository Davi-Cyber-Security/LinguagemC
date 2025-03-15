#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float salarioMinimo;
    float Kwh;
    float valorKwh;
    float valorTotal;
    printf("Digite o seu salário mínimo: ");
    scanf("%f", &salarioMinimo);
    printf("Digite o seu consumo de energia: ");
    scanf("%f", &Kwh);
    valorKwh = salarioMinimo / 5;
    valorTotal = valorKwh * Kwh;
    printf("\n%f", "O valor da energia é: R$", valorKwh);
    printf("\n%f", "Valor total a pagar: R$", valorTotal);
    return 0;
}
