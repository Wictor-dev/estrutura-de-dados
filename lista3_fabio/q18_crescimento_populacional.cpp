#include <stdio.h>
#include <stdlib.h>

main()
{
    int cidade_a = 200000, cidade_b = 800000, count = 0;
    float crescimento_a = 0.035, crescimento_b = 0.0135;

    while (cidade_a < cidade_b){
        cidade_a = cidade_a + (cidade_a * crescimento_a);
        cidade_b = cidade_b + (cidade_b * crescimento_b);
        printf("Ano %d\n", count);
        count += 1;
    }

    printf("Depois de %d anos, a cidade A ultrapassou a cidade B\n", cidade_a, cidade_b);
    printf("Cidade A %d ------- Cidade B %d\n", cidade_a, cidade_b);
    system("PAUSE");

    
