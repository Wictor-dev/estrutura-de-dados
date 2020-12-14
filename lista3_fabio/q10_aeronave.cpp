#include <stdio.h>
#include <stdlib.h>

main(){
    int peso_decolagem = 500000, peso_passageiro = 70, peso_bagagem = 10,passageiros,bagagem, peso_total_passageiros, container;
    float combustivel, peso_container,peso_carga, peso_total;
    
    printf("Digite a quantidade de containers: ");
    scanf("%d", &container);
    printf("Digite o peso dos containers (kg): ");
    scanf("%f", &peso_container);
    printf("Digite a quantidade de passageiros: ");
    scanf("%d", &passageiros);
    printf("Digite quantas bagagens os passageiros levam: ");
    scanf("%d", &bagagem);
    peso_total_passageiros = (passageiros * peso_passageiro) + (bagagem * peso_bagagem);
    peso_carga = peso_container * container;
    peso_total = peso_carga + peso_total_passageiros;
    if (peso_total < peso_decolagem){
        combustivel = peso_decolagem - peso_total;
        if (combustivel < 15000){
            printf("A aeronave nao ira decolar, combustivel = %0.2f \n", combustivel);
        }else {
            printf("A aeronave ira decolar, combustivel = %0.2f \n", combustivel);
        }
    } else {
        printf("Ultrapassou o peso da aeronave \n");
    }

    system("PAUSE");

}