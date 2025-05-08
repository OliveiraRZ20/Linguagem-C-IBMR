#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    // declaração do vetor com lista de incicialização
    int numeros[5] = {10,20,30,40,50};

    printf("Vetor criado!\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Posicao %d = %d\n", i, numeros[i]);
    }
    return 0;
}

// declaração dos valores do vetor 1 por 1
// numeros[0] = 10;
// numeros[1] = 20;
// numeros[2] = 30;
// numeros[3] = 40;
// numeros[4] = 50;