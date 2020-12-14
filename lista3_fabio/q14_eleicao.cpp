#include <stdio.h>
#include <stdlib.h>

main()
{
    int  op, count = 0;
    float serra = 0, dilma = 0, ciro = 0, ind = 0, outro = 0, nulo =0, por_serra, por_dilma, por_ciro, por_ind, por_nulo;
    printf("Vote 45 para Serra! \n");
    printf("Vote 13 para Dilma! \n");
    printf("Vote 23 para Ciro Gomes! \n");
    printf("Vote 99 se estiver indeciso! \n");
    printf("Vote 0 para voto nulo/branco! \n");
    while (1){
        printf("Digite o voto: ");
        scanf("%d", &op);
        if (op == 45) {
            serra += 1;
            count += 1;
        } else if (op == 13){
            dilma += 1;
            count += 1;
        } else if (op == 23) {
            ciro += 1;
            count += 1;
        } else if (op == 99){
            ind += 1;
            count += 1;
        } else if (op == 0){
            nulo += 1;
            count += 1;
        } else if (op == -1){
            printf("Fim da votacao!\n");
            break;
        } 
        else {
            printf("\nOpcao invalida\n");
        }
    }

    por_ciro = (ciro * 100) / count;
    por_dilma = (dilma * 100) / count;
    por_serra = (serra * 100) / count;
    por_ind = (ind * 100) / count;
    por_nulo = (nulo * 100) / count;
   
    printf("%0.2f porcento dos eleitores votaram no ciro!\n", por_ciro);
    printf("%0.2f porcento dos eleitores votaram na dilma!\n", por_dilma);
    printf("%0.2f porcento dos eleitores votaram no serra!\n", por_serra);
    printf("%0.2f porcento dos eleitores estavam indecisos!\n", por_ind);
    printf("%0.2f porcento dos eleitores votaram nulo/branco!\n", por_nulo);
    printf("O total de entrevistados foi: %d \n", count);


}