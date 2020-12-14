#include <stdio.h>
#include <stdlib.h>

main(){
    float x;
    int n;
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("\nDigite um numero > 2: ");
    scanf("%d", &n);
    printf("%0.2f = ", x);
    if(n < 2) {
        printf("N precisa ser maior que 2!\n");
    } else {
        while (n>=2){
                x = x/n;
                n -= 1;
            }
        printf("%0.2f \n", x);
    } 

    system("PAUSE");

}