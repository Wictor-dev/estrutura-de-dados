#include <stdio.h>
#include <stdlib.h>

main(){
    int n1, n2, maior;
    
    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d", &n1, &n2);
    if (n1 > n2){
        maior = n1;
    } else {
        maior = n2;
    }

    while (1)
    {
        if (n1 % maior == 0 && n2 % maior == 0){
            printf("O MDC eh %d\n", maior);
            break;
        }
        maior -= 1;
    }
    
    system("PAUSE");

}