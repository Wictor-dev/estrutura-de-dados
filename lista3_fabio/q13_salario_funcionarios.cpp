#include <stdio.h>
#include <stdlib.h>

main()
{
    int funcionarios, aumento;

    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &funcionarios);

    float salario[funcionarios], novo_salario[funcionarios];

    for (int i = 0; i< funcionarios; i++){
        scanf("%f", &salario[i]);
        float sal_temp = salario[i];
        if (2999.99 >= sal_temp > 0){
            novo_salario[i] = sal_temp + (sal_temp * 0.25);
        } else if (2999.99 < sal_temp <= 5999.99){
            novo_salario[i] = sal_temp + (sal_temp * 0.2);
        } else if (6000 <= sal_temp <= 9999.99){
            novo_salario[i] = sal_temp + (sal_temp * 0.15);
        } else {
            novo_salario[i] = sal_temp + (sal_temp * 0.1);
        }
    }
    printf("Salarios dos funconarios: \n");
    for (int j = 0; j < funcionarios; j++){
        printf("%0.2f\n", salario[j]);
    }
    printf("Salarios dos funcionarios, com aumento: \n");
    for (int k = 0; k < funcionarios; k ++ ){
        printf("%0.2f\n", novo_salario[k]);
    }

    printf("Diferenca dos salarios: \n");
    for (int o = 0; o< funcionarios; o++){
        printf("%0.2f\n",(novo_salario[o] - salario[o]));
    }

}