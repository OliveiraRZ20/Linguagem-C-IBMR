#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // exercicio 1: enquanto não digitar numero negativo, ler um numero e somar ao resultado
    int numero, resultado = 0;
    char linha[] = "------------------------------------------";

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (numero >= 0) {
            resultado += numero;
            printf("- Resultado da soma atual = %d\n", resultado);
        } else {
            printf("\n%s\n-=- Execucaoo finalizada devido a insercao de numero negativo -=-\n", linha);
            printf("Resultado final: %d\n\n", resultado);
        }
    } while (numero >= 0);
    system("pause");
    return 0;
}