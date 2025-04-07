#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // exercicio complementar 10: permitir usuario escolher entre somar dois ou tres numeros
    int opcao, contador, contador_maximo, num, resultado = 0;
    
    printf("Escolha uma das duas opcoes:\n1 - soma de dois numeros | 2 - soma de tres numeros\n> "); 
    scanf("%d", &opcao);
    switch (opcao) {
        case 1: {
            contador_maximo = 2;
            break;
        } case 2: {
            contador_maximo = 3;
            break;
        }
    }
    for (contador = 1; contador <= contador_maximo; contador += 1) {
        printf("Contador: %d | Digite um numero: ", contador);
        scanf("%d", &num);
        resultado += num;
    }

    printf("Resultado final da soma de %d numeros: %d", contador_maximo, resultado);
    system("pause");
    return 0;
}