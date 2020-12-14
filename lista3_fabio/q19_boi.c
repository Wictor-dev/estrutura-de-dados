#include <stdio.h>
#include <stdlib.h>

main()
{
    int num_iden;
    float peso;

    printf("Digite o numero de identificacao do boi: ");
    scanf("%d", &num_iden);
    printf("Digite o peso do boi: ");
    scanf("%f", &peso);

    int num_iden_menor = num_iden, num_iden_maior = num_iden; // o primeiro boi já vai ser considerado o mais magro e mais gordo
    float peso_menor = peso, peso_maior = peso;

    while (num_iden != 0){
        printf("Digite o numero de identificacao do boi: ");
        scanf("%d", &num_iden);
        if (num_iden == 0){
            break;
        }
        printf("Digite o peso do boi: ");
        scanf("%f", &peso);

        if (peso > peso_maior){
            peso_maior = peso;
            num_iden_maior = num_iden;
        }
        if (peso < peso_menor){
            peso_menor = peso;
            num_iden_menor = num_iden;
        } 
    }

    printf("O boi mais gordo eh o de numero de identificacao %d ", num_iden_maior);
    printf("com %0.2f quilos.\n", peso_maior);
    printf("O boi mais magro eh o de numero de identificacao %d ", num_iden_menor);
    printf("com %0.2f quilos.\n", peso_menor);

}