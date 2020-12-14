#include <stdio.h>
#include <stdlib.h>

main(){
    int n;

    while (1)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if (n == 0){
            printf("Fim do programa...");
            break;
        } else {
            printf("O numero %d e seus divisores: ", n);
            for (int i = 1; i <= n; i++){
                if (n % i == 0){
                    printf("%d ", i);
                }
            }
            printf("\n");
        }
    }
    
}