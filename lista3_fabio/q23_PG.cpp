#include <stdio.h>
#include <stdlib.h>

main()
{
    int n;
    float razao, a1;
    printf("Digite a razao da PG: ");
    scanf("%f", &razao);
    printf("Digite o primeiro termo da PG: ");
    scanf("%f", &a1);
    printf("Digite a quantidade de termos da PG: ");
    scanf("%d", &n);
    float count = a1;
    printf("%0.1f",a1);
    for (int i = 1; i<n; i++){
        count = count *  razao;
        printf(", %0.1f", count);
    }

    printf("\nO valor de N eh: %0.1f", count);
}