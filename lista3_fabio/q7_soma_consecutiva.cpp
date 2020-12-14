#include <stdio.h>
#include <stdlib.h>

main(){
    int x,anterior = 0, atual = 0;

    scanf("%d", &x);
    while (1){
        printf("Digite um numero: ");
        scanf("%d", &atual);

        if(atual + anterior == x){
            printf("%d + %d = %d", anterior, atual, x);
            break;
        }
        anterior = atual;
    }

    printf("\n");
    system("PAUSE");
}