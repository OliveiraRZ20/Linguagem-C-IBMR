#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // exercicio complementar 15: receber numero do usuario e dizer se ele é impar
    int numero;

    printf("Digite um numero: "); scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("O numero %d e par", numero);
    } else {
        printf("O numero %d e impar", numero);
    }
    return 0;
}