#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    // declaracao de uma matriz
    int matriz[3][3] = {{1,3,7},
                        {0,1,0},
                        {1,9,9}};
    
    printf("Matriz criada!\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// declaracao de valores da matriz 1 a 1
// matriz[0][0] = 1;
// matriz[0][1] = 3;
// matriz[0][2] = 7;
// matriz[1][0] = 0;
// matriz[1][1] = 1;
// matriz[1][2] = 0;
// matriz[2][0] = 1;
// matriz[2][1] = 9;
// matriz[2][2] = 9;