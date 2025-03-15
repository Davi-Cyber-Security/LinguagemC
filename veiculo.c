#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float preco_fabrica, percentual_lucro, percentual_imp, lucro_dist, imposto, pr_final;

    printf("Digite o preço de fabrica do veiculo: \n");
    scanf("%f", &preco_fabrica);
    printf("Digite o percentual de lucro do distribuidor. \n");
    scanf("%f", &percentual_lucro);
    printf("Digite o percentual de impostos. \n");
    scanf("%f", &percentual_imp);

    lucro_dist =  (percentual_lucro / 100) * preco_fabrica;
    imposto = (percentual_imp / 100) * preco_fabrica;
    pr_final = preco_fabrica + lucro_dist + imposto;

    printf("O Valor correspondente ao lucro do distribuidor e: R$ %.2f\n", lucro_dist);
    Printf("O valor correspondente aos impostos é: R$ %.2f\n", imposto);
    printf("O preco final do veiculo é: R$ %.2f", pr_final);

    return 0;
}