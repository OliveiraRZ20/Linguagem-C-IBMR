#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    system("cls");
    // desafio soso: calcular o log natural e base 10 de um número
    float num, num_log, num_log10;

    printf("|---------------------------------------------------------------|\n");
    printf("|=- Bem vindo ao calculador de logaritmo natural e log base10 -=|\n");
    printf("|---------------------------------------------------------------|\n\n");
    printf("Digite um numero: ");
    scanf("%f", &num);
    num_log = log(num);
    num_log10 = log10(num);
    printf("\nO numero %.0f tem os seguintes resultados:\n", num);
    printf("O logaritmo natural de %.0f: %.3f\n", num,num_log);
    printf("O logaritmo na base 10 de %.0f: %.3f\n", num,num_log10);
    return 0;
}