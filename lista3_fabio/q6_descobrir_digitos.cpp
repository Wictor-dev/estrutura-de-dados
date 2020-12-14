#include <stdio.h>
#include <stdlib.h>

main(){
    int num, count = 0;

    printf("Digite o numero: ");
    scanf("%d", &num);
    
    while (num > 0){
        num /= 10;
        count += 1;
        
    }

    printf("O numero tem %d digitos\n", count);
    system("PAUSE");
}