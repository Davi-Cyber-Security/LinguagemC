#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float peso_saco_kg, racao_gt_gr, t_racao_gr, racao_5d, resto;
    printf("Digite o peso do saco de racao. \n");
    scanf("%f", &peso_saco_kg);
    printf("Digite a quantidade de racao fornecedida para cada gato em gramas. \n");
    scanf("%f", &racao_gt_gr);

    t_racao_gr = peso_saco_kg*1000;
    racao_5d = 2 * racao_gt_gr * 5;
    resto = (racao_gt_gr - racao_5d)*(-1);

    printf("Restara de racao apos 5 dias: %5.2f", resto, "gramas");

    return 0;
}
