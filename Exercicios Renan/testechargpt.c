#include <stdio.h>

int main(void) {
    float alunos[5];
    float media = 0;

    for (int i = 0; i < 5; i++){
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &alunos[i]);
        while(alunos[i] > 10.0 || alunos[i] < 0.0){
            printf("nota invalida!\nDigite novamente: ");
            scanf("%f", &alunos[i]);
        }
        media += alunos[i];
    }

    media /= 5;

    printf("A media da sua turma e de %.2f", media);
    return 0;
}
