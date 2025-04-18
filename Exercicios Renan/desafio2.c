#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    system("cls"); // limpa a tela

    // verificador de numeros primos
    int numero, i;
    bool e_primo = true;

    printf("Digite um numero: "); scanf("%d", &numero);
    for (i = 2; i < numero; i++) {
        if (numero % i == 0) {
            e_primo = false;
        }
    }
    if (e_primo == true) {
        printf("O seu numero e primo");
    } else {
        printf("O seu numero nao e primo");
    }
    return 0;
}