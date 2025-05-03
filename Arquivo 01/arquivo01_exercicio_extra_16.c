#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // exercicio complementar 16: listar todos os numeros de 1 a 500 dizendo se eles são impares ou pares
    int contador;

    for (contador = 1; contador <= 500; contador += 1) {
        if (contador % 2 == 0) {
            printf("O numero %d e par\n", contador);
        } else {
            printf("O numero %d e impar\n", contador);
        }
    }
    system("pause");
    return 0;
}