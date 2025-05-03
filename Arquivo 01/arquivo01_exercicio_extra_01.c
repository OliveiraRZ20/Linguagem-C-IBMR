#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // exercicio complementar 1: calculadora com soma, subtração, divisão e multiplicação de dois números
    int num1, num2, operador, resultado = 0;

    printf("-=- Bem vindo a calculadora basica em C -=-\n");
    printf("Escolha a operacao desejada:\n 1 - Soma    | 2 - Subtracao\n 3 - Divisao | 4 - Multiplicacao\n> ");
    scanf("%d", &operador);
    if (operador < 1 || operador > 4) {
        printf("Erro: operador invalido, finalizando...");
        return 1;
    }
    printf("\nEscolha seu primeiro numero: ");
    scanf("%d", &num1);
    printf("Escolha seu segundo numero: ");
    scanf("%d", &num2);

    switch (operador) {
        case 1: { // operação = SOMA
            resultado = num1 + num2;
            printf("O resultado de %d + %d = %d", num1,num2,resultado);
            break;
        } case 2: { // operação = SUBTRAÇÃO
            resultado = num1 - num2;
            printf("O resultado de %d - %d = %d", num1,num2,resultado);
            break;
        } case 3: { // operação = DIVISÃO
            if (num1 == 0 || num2 == 0) {
                printf("Erro: divisao por 0 detectada, finalizando...");
                return 1;
            } else {
                resultado = num1 / num2;
                printf("O resultado de %d / %d = %d", num1,num2,resultado);
                break;
            }
        } case 4: { // operação = MULTIPLICAÇÃO
            resultado = num1 * num2;
            printf("O resultado de %d x %d = %d", num1,num2,resultado);
            break;
        }
    }
    system("pause");
    return 0;
}