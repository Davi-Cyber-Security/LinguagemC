#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float salarioMinimo;
    float Kwh;
    float valorKwh;
    float valorTotal;
    float valorComDesconto;
    float desconto;
    printf("Digite seu salário mínimo: ");
    scanf("%f", &salarioMinimo);
    printf("Digite o seu consumo de energia: ");
    scanf("%f", &Kwh);
    valorKwh = salarioMinimo / 5;
    valorTotal = valorKwh * Kwh;
    desconto = valorTotal * 0.15;
    valorComDesconto = valorTotal - desconto;
    printf("O valor da energia é: R$ %.2f\n", valorKwh);
    printf("Valor total a pagar: R$ %.2f\n", valorTotal);
    printf("Com o valor de desconto: R$ %.2f\n", valorComDesconto);
    return 0;
}
