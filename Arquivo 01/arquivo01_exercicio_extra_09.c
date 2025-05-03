#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // exercicio complementar 9: analisar se o numero do usuario e igual a 1,2 ou diferente de 1 e 2
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1: {
            printf("O numero e igual a 1");
            break;
        } case 2: {
            printf("O numero e igual a 2");
            break;
        } default: {
            printf("O numero e diferente de 1 e 2");
            break;
        }
    }
    system("pause");
    return 0;
}