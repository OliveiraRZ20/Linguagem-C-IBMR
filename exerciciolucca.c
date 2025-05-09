#include <stdio.h>

int main()
{
    float vet_notas[5];
    float nota = 0.0, media = 0.0;
    for (int i = 0; i < 5; i++)
    {
        printf("Nota aluno %d: ", i+1);
        scanf("%f", &nota);
        vet_notas[i] = nota;
    }
    for (int i = 0; i < 5; i++)
    {
        media += vet_notas[i];
    }
    media /= 5.0;
    printf("Media: %.2f", media);
}