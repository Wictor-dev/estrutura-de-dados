#include <stdio.h>
#include <stdlib.h>

main(){
    int alunos, n1,n2,n3, aprovados = 0, matricula;
    float v[3], media;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);
    for (int j = 0; j < alunos; j++){
        printf("Digite a matricula: ");
        scanf("%d", &matricula);
        for (int i = 0; i<3; i++){
            printf("Digite as notas do aluno: ");
            scanf("%f", &v[i]);
        }
        media = (v[0] + v[1] + v[2]) / 3;
        if (media >= 7){
            printf("O aluno esta aprovado!\n");
            aprovados += 1;
        } else {
            printf("O aluno esta reprovado! \n");
        }

    }
    printf("%d alunos passaram...\n", aprovados);
    printf("%d alunos reprovaram...\n", (alunos - aprovados));
    system("PAUSE");
}