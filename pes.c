#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float pes, polegadas, jardas, milhas;
    printf("Informe a medida que em pes que deseja converter. \n");
    scanf("%f", &pes);

    polegadas = pes*12;
    jardas = pes/3;
    milhas = pes/5280;

    printf("Esta medida em polegadas e: %5.2f \n", polegadas);
    printf("Esta medida em jardas e: %5.2f \n", jardas);
    printf("Esta medida em milha e %5.2f \n", milhas);
    return 0;
}
