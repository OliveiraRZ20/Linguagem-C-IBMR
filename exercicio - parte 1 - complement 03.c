#include <stdio.h>
#include <stdlib.h>
#include <math.h> // biblioteca de operações matemáticas

int main() {
    system("cls");
    // exercicio complementar 3: calcular o quadrado e a raiz quadrada de um número
    int num, num_quadrado;
    float num_raiz;

    printf("-=- Bem vindo ao programa do numero ao quadrao e raiz quadrada -=-\n");
    printf("Digite um numero: ");
    scanf("%d", &num);
    num_quadrado = num * num;
    num_raiz = sqrt(num);
    printf("\nO numero %d tem os seguintes resultados:\n", num);
    printf("%d ao quadrado: %d\n", num,num_quadrado);
    printf("Raiz quadrade de %d: %.2f\n", num,num_raiz);
    return 0;
}