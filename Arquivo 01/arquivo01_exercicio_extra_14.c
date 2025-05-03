#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // exercicio complementar 14: calcular a soma de todos os numeros entre 1 e o numero do usuario
    int numero, contador = 0, resultado = 0;

    printf("Digite um numero: "); scanf("%d", &numero);

    for (contador = 1; contador <= numero; contador += 1) {
        printf("Somando... (%d + %d = ", resultado, contador); 
        resultado += contador;
        printf("%d)\n", resultado);
    }
    printf("Resultado final: %d", resultado);
    system("pause");
    return 0;
}