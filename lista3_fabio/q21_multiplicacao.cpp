#include <stdio.h>
#include <stdlib.h>

main()
{
    int n1, n2, resultado = n1;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &n1, &n2);

    for (int i = 0; i<n2; i++){
        resultado += n1;
    }

    printf("%d * %d = %d", n1, n2, resultado);
}