#include <stdio.h>
#include <stdlib.h>

main()
{
    int count, escolha, jogador1 = 18 , jogador2 = 18;

    while (1)
    {
        if (jogador1 > 21)
        {
            if(jogador1 - jogador2 >= 2){
                printf("O jogador 1 ganhou\n");
                break;
            } 
        } else if (jogador2 > 21){
            if(jogador2 - jogador1 >= 2){
                printf("O jogador 1 ganhou\n");
                break;
            } 
        } else{
            scanf("%d", &escolha);
            if (escolha == 1)
            {
                jogador1 += 1;
                printf("jogador 1 %d - %d jogador 2\n", jogador1, jogador2);
            } else {
                jogador2 += 1;
                printf("jogador 1 %d - %d jogador 2\n", jogador1, jogador2);
            }
        }
    }
