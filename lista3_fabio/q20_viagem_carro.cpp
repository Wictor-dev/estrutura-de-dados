#include <stdio.h>
#include <stdlib.h>

main()
{
    int distancia = 600;
    float tanque = 50, distancia_percorrida,litros,litros_totais = 0, d = 0, km;

    while (1){
        printf("Digite a distancia percorrida pelo carro: ");
        scanf("%f", &distancia_percorrida);
        printf("Digite a quantidade de litros consumidos: ");
        scanf("%f", &litros);
        litros_totais += litros;
        d += distancia_percorrida;
        tanque -= litros;
        if (tanque <= 0){
            printf("O carro precisou parar pra abastecer!\n");
            tanque = 50;
        }
        if (d >= distancia){
            printf("O carro chegou ao destino!\n");
            break;
        }
    }
    km = d / litros_totais;
    printf("O carro faz %0.1f km/l\n", km);
    system("PAUSE");

}