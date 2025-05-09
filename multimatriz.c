#include <stdio.h>
#include <stdlib.h>

void imprimir_matriz(int linha, int coluna, int matriz[linha][coluna])
{
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    system("cls");
    // multiplicacao de matrizes
    int matrizA[3][2] = 
    {
        {1,2},
        {3,4},
        {5,6}
    };
    int matrizB[2][5] = 
    {
        {2,4,6,8,10},
        {12,14,16,18,20}
    };
    int matriz_resultado[3][5];

    printf("Matriz A:\n");
    imprimir_matriz(3,2,matrizA);
    printf("Matriz B:\n");
    imprimir_matriz(2,5,matrizB);

    for (int i = 0; i < 3; i++) // zerando matriz resultado
    {
        for (int j = 0; j < 5; j++)
        {
            matriz_resultado[i][j] = 0;
        }
    }
    imprimir_matriz(3,5,matriz_resultado);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                matriz_resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
        // imprimir_matriz(3,5,matriz_resultado);
    }
    printf("\nMatriz Resultado:\n");
    imprimir_matriz(3,5,matriz_resultado);
}