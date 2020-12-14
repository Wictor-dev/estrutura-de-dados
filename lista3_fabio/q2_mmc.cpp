#include <stdio.h>
#include <stdlib.h>

main(){
    int n1,n2, mmc;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &n1,&n2);
    if (n1 > n2){
        mmc = n1;
    } else {
        mmc = n2;
    }

    while (1)
    {
        if ((mmc % n1 == 0) && (mmc % n2 == 0)){
            printf("O mmc eh: ");
            printf("%d",mmc);
            break;
        } else {
            mmc += 1;
        }
    }
    printf("\n");
    system("PAUSE");
}