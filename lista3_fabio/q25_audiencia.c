#include <stdio.h>
#include <stdlib.h>

main()
{
    int escolha;
    int canal_2 = 0, canal_4 = 0, canal_5 = 0,canal_7 = 0, canal_10 = 0, pessoas, count =0;
    float por_cultura, por_globo, por_sbt, por_band, por_record;
    while (1)
    {
        printf("Digite o canal assistido: ");
        scanf("%d", &escolha);
        if (escolha == 0){
            break;
        } else {
            printf("Digite quantas pessoas estavam assistindo o canal %d: ", escolha);
            scanf("%d", &pessoas);
            count += pessoas;
            if (escolha == 2){
                canal_2 += pessoas;
            } else if (escolha == 4){
                canal_4 += pessoas;
            } else if (escolha == 5){
                canal_5 += pessoas;
            } else if (escolha == 7){
                canal_7 += pessoas;
            } else if (escolha == 10){
                canal_10 += pessoas;
            } else {
                printf("Esse canal nao existe!\n");
            }
        }
    }
    por_cultura = ((float)canal_2 * 100) / count;
    por_globo = ((float)canal_4 * 100) / count;
    por_sbt = ((float)canal_5 * 100) / count;
    por_band = ((float)canal_7 * 100) / count;
    por_record = ((float)canal_10 * 100) / count;

    printf("%0.1f porcento da audiencia estava na Tv Cultura!\n", por_cultura);
    printf("%0.1f porcento da audiencia estava na Globo!\n", por_globo);
    printf("%0.1f porcento da audiencia estava no SBT!\n", por_sbt);
    printf("%0.1f porcento da audiencia estava na Band!\n", por_band);
    printf("%0.1f porcento dos eleitores votaram nulo/branco!\n", por_nulo);
    printf("O total de entrevistados foi: %d \n", count);
   

}