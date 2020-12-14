#include <stdio.h>
#include <stdlib.h>

main(){
    int count = 0;
    float num;
    printf("Digite o numero: ");
    scanf("%f", &num);

    while (num >= 1){
        num /= 2;
        count += 1;
    }

    printf("Apos dividir o numero %d vezes por 2, o resultado eh: %0.3f\n", count, num);
    system("PAUSE");

}