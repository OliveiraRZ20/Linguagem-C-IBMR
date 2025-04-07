#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // exercicio complementar 18: calcular fatorial do numero do usuário
    int numero, contador, resultado;
    
    printf("Digite um numero: "); scanf("%d", &numero);
    if (numero >= 13) {
        printf("Erro: numero muito grande, finalizando...\n");
        return 1;
    }
    resultado = numero;
    for (contador = numero-1; contador >= 1; contador -= 1) {
        printf("Multiplicando %d x %d = ", resultado,contador);
        resultado *= contador;
        printf("%d\n", resultado);
    }
    printf("Resultado final: %d", resultado);
    return 0;
}