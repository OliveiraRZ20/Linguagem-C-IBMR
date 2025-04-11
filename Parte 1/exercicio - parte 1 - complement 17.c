#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // exercicio complementar 17: somar todos os numeros pares entre 5 e 500
    int contador, resultado = 0;
    
    for (contador = 5; contador <= 500; contador += 1) {
        if (contador % 2 == 0) {
            printf("Numero par encontrado %d + %d = ", resultado,contador);
            resultado += contador;
            printf("%d\n", resultado);
        }
    }
    printf("Resultado final: %d", resultado);
    system("pause");
    return 0;
}